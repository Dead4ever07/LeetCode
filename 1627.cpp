#include <vector>
using namespace std;





class Line
{
public:
    Line(int n1, int n2): x(n1), y(n2)
    {       
    }
    get_x() //acessor to x
    {
        return x;
    }
    get_y() // acessor to y
    {
        return y;
    }

private:
    int x;
    int y;



};


class Graph
{
public:
    Graph(){}
    add_line(Line l)
    {
        this->lines.push_back(l);
    }
    check_conection(int c1, int c2)
    {
        for(size_t i = 0; i< this->lines.size(); i++)
        {
            if(this->lines[i].get_x() == c1)
            {
                if(this->lines[i].get_y == c2)
                {
                    return true
                }else
                {
                    check_conection(this->lines[i].get_y, c2);
                    return false;
                }
            }else if(this->lines[i].get_y() == c1)
            {
                if(this->lines[i].get_x == c2)
                {
                    return true
                }else
                {
                    check_conection(this->lines[i].get_x, c2);
                    return false;
                }
            }

        }
    }

private:

    vector<Line> lines;


};



vector<bool> areConnected(int n, int threshold, vector<vector<int>>& queries) {
            vector<bool> result;
    for(int i = 0; i<queries.size(); i++)
    {
        bool q_res = false;
        for(int c = 1; c<max(queries[i][0],queries[i][1]);c++)
        {
            if(queries[i][0]%c == 0  && queries[i][1]%c == 0 && c>threshold)
            {
                Line linha = Line(queries[i][0], queries[i][1]);
            }
        }
        for(vector<int> c : queries)
        {
            result.push_back(check_conection(c[0],c[1]));
        }
        
    }
}