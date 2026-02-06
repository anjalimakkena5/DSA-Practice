// User function Template for C++

/*
struct Node
{
    int data;
    Node * next;
    Node (int x)
    {
        data=x;
        next=NULL;
    }

};
*/

Node *deleteAtPosition(Node *head, int pos) {
    // Your code here
    if(pos==1){
        Node* delnode=head;
        head=head->next;
        delnode->next=nullptr;
        delete delnode;
        return head;
    }
    Node* temp=head;
    Node* prev=nullptr;
    int cnt=0;
    while(temp!=nullptr){
        cnt++;
        if(cnt==pos){
            Node* delnode=temp;
            prev->next=temp->next;
            temp->next=nullptr;
            delete temp;
            break;
        }
        prev=temp;
        temp=temp->next;
    }
    return head;
}
