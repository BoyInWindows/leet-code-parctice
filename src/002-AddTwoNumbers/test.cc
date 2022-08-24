#include <gtest/gtest.h>

#include "Solution.h"

using namespace std;

TEST(LeetCode, TwoSum) {
  cout << "start->" << endl;

  Solution* solution = new Solution();

  ListNode* l1 = new ListNode(2, new ListNode(4, new ListNode(3)));
  ListNode* l2 = new ListNode(1, new ListNode(8, new ListNode(7)));
  ListNode* result = solution->addTwoNumbers(l1, l2);

  cout << "end<-" << endl;
}

int main(int argc, char **argv)
{
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

