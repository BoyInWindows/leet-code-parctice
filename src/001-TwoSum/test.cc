#include <gtest/gtest.h>

#include "Solution.h"

#include <vector>
using namespace std;

TEST(LeetCode, TwoSum) {

  Solution solution;

  vector<int> vt = {3,2,4,8,7,11,15};
  vector<int> vr = {1,4};

  auto out = solution.twoSum(vt, 9);
  EXPECT_EQ(out[0], vr[0]);
  EXPECT_EQ(out[1], vr[1]);
}

int main(int argc, char **argv)
{
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

