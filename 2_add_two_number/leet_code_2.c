/**
 * 15 ms C solution.
 * Author: Jason Tu.
 * Contain the core function only.
 */
#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int val;
    struct ListNode *next;
};
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    int valSum, carry = 0;
    struct ListNode *result = NULL;
    struct ListNode *tmp3 = NULL;
    struct ListNode *node;

    while (l1 || l2 || carry) {
        node = (struct ListNode *)malloc(sizeof(struct ListNode));
        valSum = (l1 ? l1->val : 0) + (l2 ? l2->val : 0) + carry;
        node->val = valSum % 10;
        carry = valSum / 10;

        l1 = l1 ? l1->next : l1;
        l2 = l2 ? l2->next : l2;

        if (!result) {
            result = node;
            tmp3 = result;
        } else {
            tmp3->next = node;
            tmp3 = tmp3->next;
        }
    }

    tmp3->next = NULL;
    return result;
}

int main()
{
    return 0;
}
