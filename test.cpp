#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

class Test
{
    public:
    Test(int* n1): n1_(n1){}
    void print()
    {
        cout<<n1_<<' '<<n1_<<'\n';
    }



    private:
    int* n1_;

};







int main()
{
   /* vector<int> v;
    int n1 = 20;
    v.push_back(n1);
    cout<< &n1<<' '<<&v[0]<<'\n';
    Test t(&n1);
    t.print();*/

    /*
    int n = -121;
    string s;
    s = to_string(n);
    cout<<s;*/
    string s("1000");
    string t("102");

    bool b = (s<t);
    cout<<b;
}