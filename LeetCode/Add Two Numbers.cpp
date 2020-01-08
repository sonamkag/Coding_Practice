/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* lres=NULL;
        ListNode *tmp, *prev=NULL;
        int carry=0,sum;
        while(l1!=NULL || l2!=NULL){
            sum=carry+(l1?l1->val:0)+(l2?l2->val:0);
            carry=(sum>=10)?1:0;
            sum%=10;
            
            tmp=new ListNode(sum);
            //printf("%d",tmp->val);
            if(lres==NULL)  lres=tmp; //first node
            else prev->next=tmp;
            prev=tmp;
            
            if(l1) l1=l1->next;
            if(l2) l2=l2->next;
        }
        
        if(carry>0) tmp->next=new ListNode(carry);
        return lres;      
    }
};
