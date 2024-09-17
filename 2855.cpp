


bool vector_compare(vector<int> v1, vector<int> v2)
{
    for(size_t i = 0; i < v1.size(); i++)
    {
        if(v1[i]!= v2[i]){return false;}
    }
    return true;
}