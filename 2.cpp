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



    ListNode* addRecursive(ListNode*l1, ListNode* l2, int pass )
    {
        if(l1 == nullptr && l2 == nullptr)
        {   
            if (pass == 0) {
                return nullptr;
            }
            ListNode *result = new ListNode(pass);
            return result;
        }else if(l2 == nullptr)
        {
            ListNode* ptr = addRecursive(l1->next,nullptr,(l1->val+pass)/10);
            ListNode *result = new ListNode((l1->val + pass)%10, ptr);
            
            
            return result;
        }else if(l1 == nullptr)
        {
            ListNode* ptr = addRecursive(nullptr,l2->next,(l2->val+pass)/10);
            ListNode *result = new ListNode((l2->val + pass)%10, ptr);
            
            
            return result;
        }else
        {
            ListNode* ptr = addRecursive(l1->next,l2->next,(l1->val + l2->val)/10); 
            ListNode *result = new ListNode((l1->val + l2->val + pass)%10, ptr);
            
            return result;
        }
 
    
    }


    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* ptr = addRecursive(l1, l2, 0);
        return ptr;
        
    }

};