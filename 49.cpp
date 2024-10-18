
vector<vector<string>> groupAnagrams(vector<string>& strs) {
    map<string, int> words_index= {};
    vector<vector<string>> result = {};
    
    for(int i = 0; i<int(strs.size()); i++)
    {
        string w = strs[i];
        sort(w.begin(),w.end());
        if(words_index.find(w)!= words_index.end())
        {
            result[words_index[w]].push_back(strs[i]);
        }else
        {
            words_index[w]=int(result.size());
            result.push_back(vector<string>(1,strs[i]));
        }
    }
    return result;
}