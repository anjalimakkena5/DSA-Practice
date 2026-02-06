/*
Definition of singly linked list:
class ListNode{
  public:
    int data;
    ListNode *next;
    ListNode() : data(0), next(nullptr) {}
    ListNode(int x) : data(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : data(x), next(next) {}
};
*/

class Solution {
    public:
        ListNode* deleteNodeWithValueX(ListNode* &head, int X) {
            //your code goes here
            if(head->data==X){
                ListNode* delnode=head;
                head=head->next;
                delnode->next=nullptr;
                delete delnode;
                return head;
            }
            ListNode* temp=head;
            ListNode* prev=nullptr;
            while(temp!=nullptr){
                if(temp->data==X){
                    ListNode* delnode=temp;
                    prev->next=temp->next;
                    temp->next=nullptr;
                    delete delnode;
                    break;
                }
                prev=temp;
                temp=temp->next;
            }
            return head;
        }
};
