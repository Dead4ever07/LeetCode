    bool isAnagram(string s, string t) {
        if(s.size()!= t.size()){return false;}
        map<char, int> words = {};
        for(int i = 0; i<int(s.size()); i++)
        {
            words[s[i]]++;
        }
        for(int i = 0; i<int(t.size());i++)
        {
            words[t[i]]--;
        }
        for(map<char,int>::iterator it= words.begin(); it!= words.end(); it++)
        {
            if(it->second!= 0){return false;}
        }
        return true;
    }