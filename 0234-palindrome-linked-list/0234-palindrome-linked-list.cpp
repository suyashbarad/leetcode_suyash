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
    bool isPalindrome(ListNode* head) {
        ListNode* copy = NULL;
        ListNode* tail = NULL;
        ListNode* temp = head;
        while(temp != NULL){
            ListNode* node = new ListNode(temp->val);
            if(copy == NULL){
                copy = node;
                tail = node;
            }
            else{
                tail->next = node;
                tail = node;
            }
            temp = temp->next;
        }
        ListNode* prev = NULL;
        ListNode* curr = copy;
        while(curr != NULL){
            ListNode* nextNode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextNode;
        }
        ListNode* curr1 = head;
        ListNode* curr2 = prev;
        while(curr1 != NULL && curr2 != NULL){
            if(curr1->val != curr2->val){
                return false;
            }
            curr1 = curr1->next;
            curr2 = curr2->next;
        }
        return true;
    }
};