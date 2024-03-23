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
    ListNode* deleteMiddle(ListNode* head) {
        if(head==NULL || head->next==NULL) return NULL;
        ListNode* temp=head;
        int n=0;
        while(temp){
            temp=temp->next;
            n++;
        }
        if(n==1) return head;
        int j=(n/2)-1;
        temp=head;
        while(j--){
            temp=temp->next;
        }
        temp->next=temp->next->next;
        return head;
    }
};