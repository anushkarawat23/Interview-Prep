/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) 
    {
        if( !head || !head -> next )  // 0 or 1 nodes
            return NULL;
        if( !head -> next -> next )   // 2 nodes
        {
            head -> next = NULL;    //delete node at 1 index
            return head;
        }
        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* prev = NULL;

        while( fast != NULL && fast -> next != NULL )
        {
            prev = slow;
            slow = slow -> next;
            fast = fast -> next -> next;
        }
        prev -> next = slow -> next;
        delete(slow);
        return head;
    }
};