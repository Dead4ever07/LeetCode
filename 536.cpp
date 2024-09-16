#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
using namespace std;


int findMinDifference(vector<string>& timePoints) 
    {
        vector<int> timelist;
    for(string time_s : timePoints)
    {
        stringstream s(time_s);
        int h, m, n;
        char c;
        s>>h>>c>>m;
        n = h*60+m;
        timelist.push_back(n);
    }
    sort(timelist.begin(), timelist.end());
    int last_time = -2880;
    int distance = 9999;
    int d  = 0;
    for(int c: timelist)
    {   
        d = c-last_time;
        last_time = c;
        if(d<distance)
        {
            distance = d;
        }
        
        cout<<d<<"    "<<distance<<"   "<<c<<"   "<<last_time<<'\n';
    }
        int distance_last_first = timelist.front()+1440-timelist.back();
        if(distance_last_first<distance){distance = distance_last_first;}
        return distance;
    }
int main()
{
    vector<string> input = {"23:59","00:00"};
    int result = findMinDifference(input);

    cout<<result;
}