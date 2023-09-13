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
class Solution
{
public:
    ListNode *removeNthFromEnd(ListNode *head, int n)
    {
        ListNode *temp = head;
        int cnt = 1;
        while (temp->next != NULL)
        {
            cnt++;
            temp = temp->next;
        }

        // if LL has only one node
        if (cnt == 1)
        {
            return NULL;
        }
        // if nth node is equal to head node
        if (n == cnt)
        {
            return head->next;
        }

        int idx = cnt - n; // node to be removed from head
        temp = head;
        ListNode *prev = NULL;
        for (int i = 0; i < idx; i++)
        {
            prev = temp;
            temp = temp->next;
        }
        prev->next = temp->next;
        temp->next = NULL;
        return head;
    }
};