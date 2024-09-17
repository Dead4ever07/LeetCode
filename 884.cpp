#include <iostream>
#include <sstream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

vector<string> stringtovectorofwords(string s)
{
    vector<string> result;
    stringstream iss(s);
    string word;
    while(iss>>word)
    {
    result.push_back(word);
    }
    return result;
}

vector<string> uncommonFromSentences(string s1, string s2) 
    {
        vector<string> result;
        vector<string> v1= stringtovectorofwords(s1);
        vector<string> v2 = stringtovectorofwords(s2);
        for(string s : v1)
        {
            vector<string>::iterator it = find(v2.begin(), v2.end(), s);
            if(it == v2.end())
            {
                int count = 0;
                for(string str: v1)
                {
                    if(s == str)count++;
                }
                if(count<=1){result.push_back(s);}
            }
        }
        for(string s : v2)
        {
            vector<string>::iterator it = find(v1.begin(), v1.end(), s);
            if(it == v1.end())
            {
               int count = 0;
                for(string str: v2)
                {
                    if(s == str)count++;
                }
                if(count<=1){result.push_back(s);}
            }
        }
        return result;
    }


int main()
{
    string s1 = "this apple is sweet";
    string s2 = "this apple is sour";
    vector<string> result = uncommonFromSentences(s1,s2);
    for(string s:result)
    {
        cout<<'\"'<<s<<'\"'<<',';
    }
}