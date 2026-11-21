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
        int len =0;
        ListNode* temp = head;
        while( temp!=NULL){
            len++;
            temp = temp->next;

        }
        if(n == len){
            ListNode* del = head;
            head = head->next;
            delete del;
            return head;
        }
        int n1 = len-n-1;
        temp=head;
        int cnt=0;
        while(temp!=NULL && cnt<n1){

            temp=temp->next;
            cnt++;

        }
        ListNode* del = temp->next;
        temp->next=del->next;
        delete del;
        return head;
    }
};