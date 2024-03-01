#include<bits/stdc++.h>
using namespace std;

public class ListNode {
    int val;
    ListNode next;
    ListNode() {}
    ListNode(int val) { this.val = val; }
    ListNode(int val, ListNode next) { this.val = val; this.next = next; }
}

class Solution {
public:
    ListNode* addTwoNumbers(ListNode *l1, ListNode *l2) {
            ListNode *t1 = l1;
            ListNode *t2 = l2;

            ListNode *dummyNode = new ListNode(-1);
            ListNode *current = dummyNode;
            int carry = 0;

            while (t1 != NULL || t2 != NULL) {
                int sum = carry;

                if (t1 != nullptr) {
                    sum += t1->val;
                }
                
                if (t2 != nullptr) {
                    sum += t2->val;
                }

                ListNode *newNode = new ListNode(sum%10);
                carry = sum / 10;
                current->next = newNode;
                current = current->next;

                if (t1 != nullptr) {
                    t1 = t1->next;
                }

                if (t2 != nullptr) {
                    t2 = t2->next;
                }
            }

            if (carry) {
                ListNode *newNode = new ListNode(carry);
                current->next = newNode;
            }

            return dummyNode->next;
        }
}