


vector<int> lexicalOrder(int n) {
    vector<string> s;
    vector<int> r;
    for(int i = 1; i<=n ; i++)
    {
        s.push_back(to_string(i));
    }
    s.sort();
    for(string c : s)
    {
        r.push_back(stoi(c));
    }
    return r;
    }