
#include <iostream>
#include <vector>
#include <map>
using namespace std;


vector<int> topKFrequent(vector<int>& nums, int k) {
    map<int,int> occurenses = {};
    vector<int> result(k,0);
    for(int i = 0; i<int(nums.size()); i++)
    {
        occurenses[nums[i]]++;
    }
    for(int i = 0; i<k; i++)
    {
        map<int,int>::iterator dt = occurenses.end();
        for(map<int,int>::iterator it = occurenses.begin();it!=occurenses.end() ;it++)
        {
            //cout<<"it->second ="<<it->second<<"  Result[i]->second ="<<occurenses.find(result[i])->second<<'\n';
            if(it->second>=occurenses.find(result[i])->second)
            {
                result[i] = it->first;
                dt = it;
            }
        }
        if(dt!=occurenses.end())
        {
            //cout<<dt->first<<' '<<dt->second<<'\n';
            occurenses.erase(dt);
        }
    }
    return result;
}


int main()
{
    vector<int> v = {6,0,1,4,9,7,-3,1,-4,-8,4,-7,-3,3,2,-3,9,5,-4,0};
    int k = 6;
    vector<int> result = topKFrequent(v,k);
    for(int i= 0; i<k; i++)
    {
        cout<<result[i]<<' ';
    }
    return 0;
}