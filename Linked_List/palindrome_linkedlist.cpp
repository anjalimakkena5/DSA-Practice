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
    ListNode* reverselinkedlist(ListNode* head){
        if(head==nullptr || head->next==nullptr){
            return head;
        }
        ListNode* curr=head;
        ListNode* prev=nullptr;
        while(curr!=nullptr){
            ListNode* front=curr->next;
            curr->next=prev;
            prev=curr;
            curr=front;
        }
        return prev;
    }
    ListNode* findmiddle(ListNode* head){
        if(head==nullptr || head->next==nullptr) return head;
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast->next!=nullptr && fast->next->next!=nullptr){
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow->next;
    }
    bool isPalindrome(ListNode* head) {
        ListNode* middle=findmiddle(head);
        ListNode* newhead=reverselinkedlist(middle);
        ListNode* first=head;
        ListNode* second=newhead;
        while(second!=nullptr){
            if(first->val!=second->val){
                reverselinkedlist(newhead);
                return false;
            }
            first=first->next;
            second=second->next;
        }
        reverselinkedlist(newhead);
        return true;
    }
};
