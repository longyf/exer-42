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
	int tempSum = array[0];
	int begin = tempBegin;
	int end = tempEnd;
	int largest = tempSum;
	while (tempEnd != array.size() - 1) {
		cout<<tempBegin<<" "<<tempEnd<<" "<<tempSum<<" "<<largest<<endl;
		tempEnd++;
		tempSum += array[tempEnd];
		if (tempSum < 0) {
			cout<<tempSum<<" "<<largest<<endl;
			if (tempSum > largest) {
				largest = tempSum;
			}
			tempBegin = tempEnd;
			tempSum = 0;
		}
		else {
			if (tempSum > largest) {
				largest = tempSum;
			}
		}
	}
	return largest;
}
#endif
