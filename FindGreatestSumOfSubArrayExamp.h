#ifndef FIND_GREATEST_SUM_OF_SUB_ARRAY_EXAMP_H
#define FIND_GREATEST_SUM_OF_SUB_ARRAY_EXAMP_H
#include <iostream>
#include <vector>
#include <stdexcept>
using namespace std;
int FindGreatestSumOfSubArray(const vector<int> &array) {
    if (array.empty()) throw invalid_argument("Invalid inputs.");
	if (array.size() == 1) return array[0];

	int curBegin = 0;
	int curEnd = 0;
	int begin = 0;
	int end = 0;
	int nCurSum = 0;
	int nGreatestSum = 0x80000000;//the smallest int.
	for (int i = 0; i != array.size(); ++i) {
		curEnd = i;

		if (nCurSum <= 0) {//nCurSum是上一个i给出的结果。
			nCurSum = array[i];
			curBegin = i;
		}
		else {
			nCurSum += array[i];
		}

		if (nCurSum > nGreatestSum) {//这一步是说不管array[i]是否为正数，都要检查是否需要更新nGreatSum。
			nGreatestSum = nCurSum;
			begin = curBegin;
			end = curEnd;
		}
		cout<<curBegin<<" "<<curEnd<<" "<<nCurSum<<" "<<begin<<" "<<end<<" "<<nGreatestSum<<endl;
	}
	return nGreatestSum;
}
#endif
