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
        int length=0;
        ListNode* temp=head;
        while(temp){
            length++;
            temp=temp->next;
        }
        int pos=length-n;
        if(pos==0) return head->next;
        temp=head;
        ListNode* prev=NULL;
        for(int i=0;i<pos;i++){
            prev=temp;
            temp=temp->next;
        }
        prev->next=temp->next;
        temp=NULL;
        return head;
    }
};