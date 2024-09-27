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

    long long getNumber(ListNode *list) {
        if (list == nullptr) return 0;
        return list->val + getNumber(list->next) * 10;
    }

    ListNode *createNumber(long long n) {
        if (!n) return nullptr;

        ListNode *next = createNumber(n / 10);
        return new ListNode(n % 10, next);
    }


    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        long long a = getNumber(l1);
        long long b = getNumber(l2);
        long long sum = a + b;

        if (sum == 0) return new ListNode();
        return createNumber(sum);
    }

};