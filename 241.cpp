

class Operation
{
    public:
    Operation(int* n1, char simbol, int* n2 ): n1_(n1), n2_(n2), simbol_(simbol)
    {
    }
    void acessor_n1(int* n1_new)
    {
        n1_ = n1_new;
    }
    void acessor_n2(int* n2_new)
    {
        n2_ = n2_new;
    }
//aaa
    private:
        char simbol_;
        int* n1_;
        int* n2_;    
};



void recursive_func(string expression, vector<int>& v)
{





}



vector<int> diffWaysToCompute(string expression) {
        vector<Operation> v_op;
        int n1,n2;
        char simbol;
        istringstream iss(expression);
        iss>>n1;
        while(iss.eof())
        {
            iss>>simbol;
            iss>>n2
            Operation op(&n1, simbol, &n2);
            v_op.push_back(op);
        }
    }