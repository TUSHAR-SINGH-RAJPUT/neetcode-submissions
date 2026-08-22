class Solution {
   public:
    bool isPalindrome(string s) {
        for (char& c : s) {
            c = tolower(c);
        }

        int len = s.length();
        int left = 0;
        int right = len - 1;
        while (left < right) {
            if (!isalnum(s[right])) {
                right--;
                continue;
            }
            if (!isalnum(s[left])) {
                left++;
                continue;
            }
            if (s[left] != s[right]) {
                cout << s[left] << " " << s[right] << endl;
                return false;
            }
            right--;
            left++;
        }
        return true;
    }
};
