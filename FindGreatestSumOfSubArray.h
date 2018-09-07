#ifndef FIND_GREATEST_SUM_OF_SUB_ARRAY_H
#define FIND_GREATEST_SUM_OF_SUB_ARRAY_H
#include <iostream>
#include <vector>
#include <stdexcept>
using namespace std;
int FindGreatestSumOfSubArray(vector<int> &array) {
	if (array.empty()) throw invalid_argument("Invalid inputs.");
	if (array.size() == 1) return array[0];

	int tempBegin = 0;
	int tempEnd = 0;
	int tempSum = 0;
	int largest = 0x80000000;//这个地方又忘记啦！
	int begin = 0;
	int end = 0;

	for (auto index = 0; index != array.size(); index++) {
		tempEnd = index;
		if (tempSum < 0) {
			tempSum = array[index];
			tempBegin = index;//
		}
		else {
			tempSum += array[index];
		}

		if (tempSum > largest) {
			largest = tempSum;
			begin = tempBegin;//
			end = tempEnd;
		}
	}
	cout<<"The array starts at "<<begin<<" and ends at "<<end<<"."<<endl;
	return largest;
}
#endif
