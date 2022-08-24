#include "Solution.h"

using namespace std;

ListNode* Solution::addTwoNumbers(ListNode* l1, ListNode* l2)
{
  ListNode* result;

  ListNode* p1 = l1;
  ListNode* p2 = l2;
  ListNode* pr = result;
  int iUp = 0;
  while(p1 || p2 || iUp)
  {
    /* cout << "-->" << endl; */
    int val1 = p1 ? p1->val : 0;
    int val2 = p2 ? p2->val : 0;
    cout << "p1 val = " << val1 << " ,";
    cout << "p2 val = " << val2 << ".";
    cout << endl;

    // 计算
    int sum = val1 + val2 + iUp;

    // 进位数
    iUp = sum / 10;
    int digits = sum % 10;
    // 记录数
    pr->val = digits;

    // while tail
    pr = pr->next;
    if (p1) { p1 = p1->next; }
    if (p2) { p2 = p2->next; }
  }

  cout << "result = ";
  ListNode* pResult = result;
  while(pResult) {
    cout << pResult->val;
    pResult = pResult->next;
  }
  cout << endl;

  return result;
}
