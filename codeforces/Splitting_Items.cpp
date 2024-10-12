#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;



int main()
{
    int t;
    cin>>t;
    for(int i = 0; i<t; i++)
    {
        int n= 0,k = 0;
        cin>>n>>k;
        vector<int> items;
        for(int c = 0; c<n; c++)
        {
            int p;
            cin>>p;
            items.push_back(p);
        }
        sort(items.begin(), items.end());
        int sum_a= 0, sum_b= 0;
        for(int c = 0; c<n;c++)
        {
            if(c%2==0)
            {
                sum_a += items[items.size()-c-1];
            }else
            {
                sum_b += items[items.size()-c-1];
            }
        }
        if(sum_a-sum_b <=k){cout<<0<<'\n';}
        else{cout<<sum_a-sum_b-k<<'\n';}
    }
    return 0;
}