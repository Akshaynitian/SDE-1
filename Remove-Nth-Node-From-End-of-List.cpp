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
   void del(ListNode* &head,int &n){
        ListNode* curr=head;
            int size=0;
            while(curr!=NULL){
                size++;
                curr=curr->next;
            }
        //cout<<size<<" "<<n<<endl;
        // if(size==n){
        //     head=head->next;
        // }
        int v=size-n;
        curr=head;
        ListNode* temp=head;
        int currpos=1;
        while(currpos<v){
            temp=temp->next;
            currpos++;
        }
        ListNode* prev=temp->next;
        temp->next=temp->next->next;
        delete(prev);
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==NULL){
            return head;
        }

        del(head,n);

        return head;

    }
};