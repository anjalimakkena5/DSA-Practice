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
    int lengthOfLoop(Node *head) {
        // code here
        if(head==nullptr || head->next==nullptr){
            return 0;
        }
        int res=0;
        Node* slow=head;
        Node* fast=head;
        while(fast!=nullptr && fast->next!=nullptr){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast){
                res=1;
                break;
            }
        }
        if(res==0) return 0;
        int cnt=1;
        slow=fast->next;
        while(slow!=fast){
            slow=slow->next;
            cnt++;
        }
        return cnt;
    }
};
