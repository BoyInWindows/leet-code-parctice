#include <vector>
using namespace std;

#include "Solution.h"

vector<int> Solution::twoSum(vector<int>& nums, int target)
{
  vector<int> result(2);
  vector<int> enableNums;
  vector<int> enableIndex;

  for(int i = 0; i < nums.size(); i++) {
    int num = nums[i];
    if (num > target) continue;
    int anotherNum = target - num;
    /* int foundIndex = findOne(enableNums, anotherNum); */
    int foundIndex = -1;
    for(int j = 0; j < enableNums.size(); j++) {
      if (enableNums[j] == anotherNum) {
        foundIndex = j;
        break;
      }
    }
    if (foundIndex > -1) {
      result[0] = enableIndex[foundIndex];
      result[1] = i;
      return result;
    }
    enableNums.push_back(num);
    enableIndex.push_back(i);
  }

  return result;
}

