/*
class Node {
  public:
    int data;
    Node *next;
    Node(int x) {
        data = x;
        next = nullptr;
    }
};
*/

class Solution {
  public:
    Node *insertPos(Node *head, int pos, int val) {
        // code here
        
        if(pos==1){
            Node* temp=new Node(val);
            temp->next=head;
            return temp;
        }
        int cnt=0;
        Node* temp=head;
        while(temp!=nullptr){
            cnt++;
            if(cnt==pos-1){
                Node* newnode=new Node(val);
                newnode->next=temp->next;
                temp->next=newnode;
                break;
            }
            temp=temp->next;
        }
        return head;
    }
};
