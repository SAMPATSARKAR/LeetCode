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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* temp = head;
        int n=0;
        while(temp!=NULL){
            n++;
            temp=temp->next;
        }
        ListNode* temp2=head;
        int i=0;
        while(i<k-1){
            temp2=temp2->next;
            i++;
        }
        ListNode* temp3=head;
        int count1=0;
        while(count1 <= n-k-1){
            count1++;
            temp3=temp3->next;
        }
        int d = temp2->val;
        temp2->val=temp3->val;
        temp3->val=d;

        return head;

    }
};