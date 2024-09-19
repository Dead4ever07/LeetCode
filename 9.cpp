bool isPalindrome(int x) {
    string s = to_string(x);
    string s_r = s
    reverse(s.begin(), s.end());
    return s_r == s;
    }