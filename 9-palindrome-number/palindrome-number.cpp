class Solution {
public:
    bool isPalindrome(int x) {
        string forwards = to_string(x);
        string backwards = string(forwards.rbegin(), forwards.rend());
        return forwards == backwards;
    }
};