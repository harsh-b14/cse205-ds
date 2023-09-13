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
    ListNode *middleNode(ListNode *head)
    {
        int cnt = 1;
        ListNode *temp = head;
        while (temp->next != NULL)
        {
            cnt++;
            temp = temp->next;
        }
        int mid = -1;
        if (cnt % 2 != 0)
        {
            mid = (cnt + 1) / 2;
            cnt = 1;
            temp = head;
        }
        else
        {
            mid = (cnt / 2) + 1;
            cnt = 1;
            temp = head;
        }
        while (cnt < mid)
        {
            cnt++;
            temp = temp->next;
        }
        return temp;
    }
};