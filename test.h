#pragma once
#include <cassert>
#include "functions.h"
void number_of_sighn_changes_test_1() {
	int test[5] = { 1,-2,3,-4,5 };
	int result = NumberOfSighnChanges(test, 5);
	assert(result == 4);
}
void number_of_sighn_changes_test_2() {
	int test[5] = { 1,2,3,4,5 };
	int result = NumberOfSighnChanges(test, 5);
	assert(result == 0);
}
void number_of_sighn_changes_test_3() {
	int test[5] = { -1,2,3,4,5 };
	int result = NumberOfSighnChanges(test, 5);
	assert(result == 1);
}
void number_of_sighn_changes_test_4() {
	int test[5] = { -1,2,3,4,-5 };
	int result = NumberOfSighnChanges(test, 5);
	assert(result == 2);
}
void number_of_sighn_changes_test_5() {
	int test[5] = { -1,2,-3,4,-5 };
	int result = NumberOfSighnChanges(test, 5);
	assert(result == 4);
}
void composition_test_1() {
	int test[5] = { -1,2,-3,4,-5 };
	int result = Composition(test, 5);
	assert(result == 0);
}
void composition_test_2() {
	int test[5] = { 0,2,0,4,-5 };
	int result = Composition(test, 5);
	assert(result == 2);
}
void composition_test_3() {
	int test[5] = { 0,-3,-3,0,-5 };
	int result = Composition(test, 5);
	assert(result == 9);
}
void composition_test_4() {
	int test[5] = { 1,0,-3,0,0 };
	int result = Composition(test, 5);
	assert(result == -3);
}
void run_test() {
	number_of_sighn_changes_test_1();
	number_of_sighn_changes_test_2();
	number_of_sighn_changes_test_3();
	number_of_sighn_changes_test_4();
	number_of_sighn_changes_test_5();
	composition_test_1();
	composition_test_2();
	composition_test_3();
	composition_test_4();

}