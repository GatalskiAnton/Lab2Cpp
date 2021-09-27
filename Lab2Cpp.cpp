#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <ctime>
#define MAX_NUMBER_OF_ARRAY_ELEMENTS 20

using namespace std;
int main()
{
	srand(time(NULL));
	int number_of_array_elements;
	int i = 0;
	do
	{
		if (i > 0)
		{
			cout << "Incorrect value\n";
		};
		cout << "Enter number of array elements (0, " <<  MAX_NUMBER_OF_ARRAY_ELEMENTS << "]" <<  "\n";
		i++;
		cin >> number_of_array_elements;
		
	} while ((number_of_array_elements > MAX_NUMBER_OF_ARRAY_ELEMENTS) or (number_of_array_elements < 0));
	int* arr = new int[number_of_array_elements];
	int left_border,right_border;
	cout << "How do you want to filing the array, by keyboard input or random number generator(type keyboard, random accordingly\n";
	string filing_method;
	cin >> filing_method;
	if (filing_method == "keyboard")
	{
		cout << "Enter " << number_of_array_elements << " numbers";
		for (int i = 0; i < number_of_array_elements; i++)
		{
			cin >> arr[i];
		};
	}
	else {
		cout << "Enter the left border of the range ";
		cin >> left_border;
		cout << "Enter the right border of the range ";
		cin >> right_border;
		for (int i = 0; i < number_of_array_elements; i++)
		{

			arr[i] = (rand() % right_border + left_border);
		};
	};
	for (int i = 0; i < number_of_array_elements; i++)
	{
		cout << arr[i] << endl;
	}
	int composition = 1;
	int zero_pos1, zero_pos2;
	for (int i = 0; i < number_of_array_elements; i++)
	{
		if (arr[i] == 0) {
			zero_pos1 = i;
			
			break;
		}
		else {
			zero_pos1 = number_of_array_elements + 1;
		}

	}
	for (int i = 0; i < number_of_array_elements; i++)
	{
		if (arr[i] == 0 and i != zero_pos1)
		{
			zero_pos2 = i;
			break;
		}
		else {
			zero_pos2 = number_of_array_elements + 1;
		}
	}
	if (zero_pos1 > number_of_array_elements or zero_pos2 > number_of_array_elements)
	{
		
		cout << "It is not possible to count the composition\n";
	}
	else {

		for (i = (zero_pos1 + 1); i < zero_pos2 ; i++)
		{
			composition *= arr[i];
		};
		cout << "Composition : " << composition << endl;

	}
	
	int number_of_sign_changes = 0;
	
	for (int i = 0; i < (number_of_array_elements - 1); i++)
	{

		if (arr[i] * arr[i + 1] == 0 && (arr[i] == 0 || arr[i + 1] == 0) && (arr[i] < 0 || arr[i + 1] < 0))
		{
			++number_of_sign_changes;
		}
		if (arr[i] * arr[i + 1] < 0 && ((arr[i] > 0 && arr[i + 1] < 0) || (arr[i] < 0 && arr[i + 1] > 0)))
		{
			++number_of_sign_changes;
		}


	}
	cout << "Number of sign changes : " << number_of_sign_changes
	<< endl;
	for (int i = number_of_array_elements; i > 0; --i)
	{
		int j = i - 1;
		for ( j = number_of_array_elements; j > 0; --j)
		{
			if (arr[j] % 2 && arr[j - 1])
			{

			}
			else {
				swap(arr[j], arr[i - 1]);
			}
		}
	}

	for (int i = 0; i < number_of_array_elements; i++)
	{
		cout << arr[i] << endl;
	};

	
}

