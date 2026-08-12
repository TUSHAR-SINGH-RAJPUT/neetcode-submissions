class Solution {
   public:
    bool isAnagram(string s, string t) {
        int lenS = s.length();
        int lenT = t.length();
        if (lenS != lenT) return false;
        map<int, int> mpp1, mpp2;
        // for (int i = 0; i < lenS; i++) {
        //     mpp1[s[i] - 'a ']++;
        //     mpp2[t[i] - 'a ']++;
        // }
        int i = 0;
         while (i < lenT) {
            mpp1[s[i] - 'a']++;
            mpp2[t[i] -'a']++;
            i++;
        }
        i=0;
        while (i < 26) {
            if (mpp1[i] == mpp2[i]) {
                i++;
                continue;
            }
            return false;
        }
        return true;
    }
};
