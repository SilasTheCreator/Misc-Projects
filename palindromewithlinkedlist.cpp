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
       ListNode* point = head;
       ListNode* quickPoint = head;
        
        while(quickPoint != NULL && quickPoint->next != NULL){
            point = point->next;
            quickPoint = quickPoint->next->next;
        }
        
        ListNode* curr = point;
        ListNode* nextNode = point;
        ListNode* prev = NULL;
        
        while(curr != NULL){
            nextNode = nextNode->next;
            curr->next = prev;
            prev = curr;
            curr = nextNode;
        }
        
        while(prev != NULL && head != NULL){
            if(head->val != prev->val){
                return false;
            }
            head = head->next;
            prev = prev->next;
        }
    return true;
    }
};