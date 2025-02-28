/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeElements(struct ListNode* head, int badVal) {
   
    //if the first node is "bad" handles by looking only at and deleting only the first node
    while(head != NULL && head->val == badVal) {
        struct ListNode* temp = head;//save location
        head = head->next;//move pointer forward
        free(temp);//remove saved location
    
    }

    if (head == NULL) return NULL; //if that deleted everything just return null

    struct ListNode* node = head;  // set node to first node to start loop

    while (node->next != NULL) {
        if (node->next->val == badVal) { //checks if the next node's value is bad
            struct ListNode* temp = node->next;//save location
            node->next = node->next->next;  //set ptr to next node now to next node's next node skipping it
            free(temp);  //remove saved location
        } else {
            node = node->next;  // no deletion happened
        }
    }
    return head;
}
