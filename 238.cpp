#include <iostream>
#include <vector>
using namespace std;



//my solution doesnt work because i did it in O(n**2) time complexity
// vector<int> productExceptSelf(vector<int>& nums) {
//     vector<int> res;
//     int mult_all = 1;
//      for(size_t i = 0; i<nums.size(); i++)
//     {
//         int mult = 1;
//         for(int c = 0; c<nums.size(); c++)
//         {
//             if(i!=c)
//             {
//                 mult*=nums[c];
//             }
//         }
//         res.push_back(mult);
//     }
//     return res;
    
// }


//neetcode solution
vector<int> productExceptSelf(vector<int>& nums)
{
    vector<int> res;
    int pre = 1;
    for(size_t i = 0; i<nums.size(); i++)
    {
        res.push_back(pre);
        pre *= nums[i];
    }
    for(int n : res)cout<<n<<", ";
    cout<<'\n';
    int pos = 1;
    //cout<<nums.size()<<'\n';
    for(int i =res.size()-1; i>=0; i--)
    {
        cout<<pos<<", ";
        res[i] *=pos;
        pos*=nums[i];
    }
    cout<<'\n';
    return res;
}


int main()
{
    vector<int> nums = {-1,1,0,-3,3};
    vector<int> res = productExceptSelf(nums);
    for(int c: res)
    {
        cout<<c<<", ";
    }
    return 0;
}