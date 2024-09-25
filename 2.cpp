#include <iostream>

struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
 };
 
class Solution {
public:



    ListNode* addRecursive(ListNode*l1, ListNode* l2, int pass )
    {
        if(l1 == nullptr && l2 == nullptr)
        {
            return nullptr;
        }else if(l2 == nullptr)
        {
            ListNode result((l1->val + pass)%10, addRecursive(l1->next,nullptr,(l1->val+pass)/10));
            ListNode* ptr = &result; 
            
            return ptr;
        }else if(l1 == nullptr)
        {
            ListNode result((l2->val + pass)%10, addRecursive(nullptr,l2->next,(l2->val+pass)/10));
            ListNode* ptr = &result; 
            
            return ptr;
        }else
        {
            ListNode result((l1->val + l2->val + pass)%10, addRecursive(l1->next,l2->next,(l1->val + l2->val)/10));
            ListNode* ptr = &result; 
            
            return ptr;
        }
 
    
    }


    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        return addRecursive(l1, l2, 0);
        
    }
};


int main()
{
    ListNode
}