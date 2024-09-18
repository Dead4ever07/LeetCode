class Solution {
public:
    
static int num_size(int num)
{
    int c = 0;
    while(num!= 0)
    {
        num = num/10;
        c++;
    }
    return c;
}


static bool compare_interval(int a, int b)
{
    int n1 = a;
    int n2 = b;
    int n1_s = num_size(n1)-1;
    int n2_s = num_size(n2)-1;
    while(true)
    {
        

        cout<<n1<<' '<<n2<<' '<<n1_s<<' '<<n2_s<<'\n';
        cout<<int(n1/pow(10,n1_s))<<' '<<int(n2/pow(10,n2_s))<<' '<<"caracter comp"<<'\n';
        cout<<'\n';
        
        if(n1_s == -1  )
        {
            cout<<"im here"<<'\n';
            if(int(n1/pow(10,n1_s))/10 < int(n2/pow(10,num_size(n1)-1)))
            {
                return false;
            }
            return true;
            return false;
        }else if(n2_s == -1)
        {
            cout<<"im there"<<'\n';
            if(int(n1/pow(10,n1_s))/10 < int(n2/pow(10,num_size(n1)-1)))
            {
                return false;
            }
            return true;
        }
        
        else if(int(n1/pow(10,n1_s)) != int(n2/pow(10,n2_s)))
        {
            return int(n1/pow(10,n1_s)) > int(n2/pow(10,n2_s));
        }
        n1_s--;
        n2_s--;
    }
}

string largestNumber(vector<int>& nums) 
{
   
    ostringstream oss;
    sort(nums.begin(), nums.end(),compare_interval);
    for(int c : nums)
    {
        oss<<c;
    }
    return oss.str();
        };



};