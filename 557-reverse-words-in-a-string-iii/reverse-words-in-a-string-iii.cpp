class Solution {
public:
    string reverseWords(string s) {
        size_t start = 0;
        for (size_t i = 0; i <= s.size(); i++) {
        if (i == s.size() || s[i] == ' ') {
            reverse(s.begin() + start, s.begin() + i);
            start = i + 1;
        }
    }
    return s;
    }
};