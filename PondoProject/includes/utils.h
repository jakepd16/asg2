#ifndef UTILS_H_
#define UTILS_H_
#include "constants.h"
#include <vector>
#include <iostream>

namespace std{
	void sortData(const SORT_ORDER &mySortOrder,vector<process> &myProcesses);
	process getNext(vector<process> &myProcesses);
	int getSize(vector<process> &myProcesses);
	int handleMissingData(vector<process> &myProcesses);
}
#endif
