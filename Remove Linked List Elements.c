/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

//https://leetcode.com/explore/featured/card/july-leetcoding-challenge/546/week-3-july-15th-july-21st/3396/

struct ListNode* removeElements(struct ListNode* head, int val){
    if(head==NULL)
        return head;
    if(head->next==NULL){
        if(head->val==val)
            return head=NULL;
        else
            return head;
    }
    struct ListNode* curr=head;
    struct ListNode* prev;
    curr=head;
    //next=head->next;
    int flag=0;
    while(curr!=NULL){

        if(curr->val==val && flag==0){
            head=curr->next;
            curr=curr->next;
            //next=curr->next;
        }
        else if(curr->val!=val && flag==0){
            flag++;
            prev=head;
            curr=curr->next;
            //next=next->next;
        }
        else if(curr->val==val){
            prev->next=curr->next;
            curr=curr->next;
            //next=next->next;
        }
        else if(curr->next==NULL && curr->val==val){
            prev->next=NULL;
            curr=curr->next;
        }
        else{
            curr=curr->next;
            prev=prev->next;
            //next=next->next;
        }
    }
    return head;
}
