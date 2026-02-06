
Node* insertBeforeValue(Node* head, int x, int val){
    // Write your code here.
    Node* temp=head;
    Node* prev=nullptr;
    if(head->data==val){
        Node* newnode=new Node(x);
        newnode->next=head;
        return newnode;
    }
    while(temp!=nullptr){
        if(temp->data==val){
            Node* newnode=new Node(x);
            newnode->next=temp;
            prev->next=newnode;
            break;
        }
        prev=temp;
        temp=temp->next;
    }
    return head;
}
