//https://leetcode.com/problems/reverse-linked-list/submissions/1812934691/?envType=problem-list-v2&envId=linked-list

 //* Definition for singly-linked list.
 struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
 };
 


class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prevNode = nullptr; ListNode* currNode = head;
        while(currNode != nullptr){
            ListNode* next = currNode->next;
            currNode->next = prevNode; 
            prevNode = currNode;
            currNode = next; 
        }
        return prevNode;
    }
};

//solved 10.27.25 (w/ hint assistance)