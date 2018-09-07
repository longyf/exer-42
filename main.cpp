#include <iostream>
#include "FindGreatestSumOfSubArray.h"
//#include "FindGreatestSumOfSubArrayExamp.h"
#include <vector>
void test1() {
	cout<<"Test1."<<endl;
	vector<int> v1 = {1, -2, 3, 10, -4, 7, 2, -5};
	cout<<FindGreatestSumOfSubArray(v1)<<endl;
}

void test2() {
	cout<<"Test2."<<endl;
	vector<int> v1 = {-1, 0, -5, -3, -10};
	cout<<FindGreatestSumOfSubArray(v1)<<endl;
}

void test3() {
	cout<<"Test3."<<endl;
	vector<int> v1 = {1, 1, 1};
	cout<<FindGreatestSumOfSubArray(v1)<<endl;
}

int main() {
	test1();
	test2();
	test3();
	return 0;
}
