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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int len=0;
        ListNode* temp=head;
        
        while(temp!=NULL){
            len++;
            temp=temp->next;
        }
        temp=head;
        int pos=len-n;
        ListNode* prev=NULL;
        if(pos==0) return head->next;
        for(int i=0;i<pos;i++){
            prev=temp;
            temp=temp->next;
        }
        prev->next=temp->next;
        
        temp=NULL;
        return head;
        
    }
};