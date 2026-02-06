/*
class Node {
  public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    Node *insertAtFront(Node *head, int x) {
        // Code here
        if(head==nullptr) return new Node(x);
        Node* temp=new Node(x);
        temp->next=head;
        head=temp;
        return head;
    }
};
