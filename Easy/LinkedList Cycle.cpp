//https://leetcode.com/problems/linked-list-cycle/description/

 //Definition for singly-linked list.
  struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(nullptr) {}
  };

class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* fast = head;
        ListNode* slow = head; 

        while(fast != nullptr && fast->next != nullptr){
            slow = slow->next;
            fast = fast->next->next;
            if (fast == slow){
                return true;
            }
        }
        return false;
    }
};

//solved 10.27.25

//uses a slow pointer that moves once
// and another fast pointer that moves twice
//in theory, if a cycle exists, they will meet at some point
//fast->next condition is checked in while loop for edge case
//O(n) time since depends only on length "n" of the linkedlist
//O(1) space since no extra data structs?