/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head) {
    //recursive base case
    if(head == NULL || head->next == NULL){ //if we get a null value for head then the list was empty to begin with. if we get a null value for the next node then we are at the end of the first list so we need to go back!
        return head;
    }

    struct ListNode* reverse = reverseList(head->next); //call the function with the next node to begin recursion

    head->next->next = head; //we get here once we hit the base case up top. so now this is being called with 'head' being second to last, and the next one of that is head->next, which is the value in the recursive call, and we're making the next one of that the new head of the list.

    head->next = NULL; //now that we've established a new head we make it point to null, since it's now the end as we're going backwards
    return reverse; //returns the reverse we have so far
}
