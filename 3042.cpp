    int countPrefixSuffixPairs(vector<string>& words) {
        int result = 0;
        for(int i = 0; i<words.size() ;i++)
        {
            for(int c = i+1; c<words.size(); c++)
            {
                int size = words[i].size();
                if(size<=words[c].size())
                {    if(words[c].substr(0,size) == words[i] && words[c].substr(words[c].size()-size)== words[i])
                    {
                        result++;
                    }
                }
            }
        }
        return result;
    }