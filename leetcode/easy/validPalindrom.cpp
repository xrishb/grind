class Solution {
public:
    bool isPalindrome(std::string s) {
        s = tolowerString(s);

        int lastIndex = s.size() - 1;
        std::string s2(lastIndex + 1, ' '); 

        s.erase(std::remove_if(s.begin(), s.end(), ::isspace), s.end());

        for (int i = 0; i <= lastIndex; i++) {
            for (int j = lastIndex, k = 0; j >= 0; j--, k++) {
                s2[k] = s[j];
            }
        }

        int result = strcmp(s.c_str(), s2.c_str());
        return result == 0;
    }

private:
    std::string tolowerString(const std::string& s) {
        std::string result = s;
        for (char& c : result) {
            c = std::tolower(c);
        }
        return result;
    }
};