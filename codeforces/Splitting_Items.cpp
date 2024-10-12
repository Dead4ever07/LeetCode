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
        int u = items.size()-1;
        while(u-1 >=0 && k!= 0)
        {
            if(items[u]>items[u-1])
            {
                int l = items[u-1];
                items[u-1] = items[u]-items[u-1]>k ? items[u-1] + k: items[u];
                k -= (items[u-1]-l);
            }
            u -= 2;
        }
        
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
        cout<<sum_a-sum_b<<'\n';
    }
    return 0;
}