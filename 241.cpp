

class Operation
{
    public:
    Operation(int* n1, char simbol, int* n2 ): n1_(n1), n2_(n2), simbol_(simbol)
    {
    }

    private:
        char simbol_;
        int* n1_;
        int* n2_;    
};



vector<int> diffWaysToCompute(string expression) {
        vector<int> nums;
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