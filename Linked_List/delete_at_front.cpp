class Solution {
  public:
    Node *deleteHead(Node *head) {
        // code here
        if(head==nullptr || head->next==nullptr) return nullptr;
        Node* temp=head;
        head=head->next;
        delete temp;
        return head;
    }
};
