class Solution {
   public:
    bool isAnagram(string s, string t) {
        // int lenS = s.length();
        // int lenT = t.length();
        // if (lenS != lenT) return false;
        // map<int, int> mpp1, mpp2;
        // int i = 0;
        //  while (i < lenT) {
        //     mpp1[s[i] - 'a']++;
        //     mpp2[t[i] -'a']++;
        //     i++;
        // }
        // i=0;
        // while (i < 26) {
        //     if (mpp1[i] == mpp2[i]) {
        //         i++;
        //         continue;
        //     }
        //     return false;
        // }
        // return true;

                sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        if(s==t)return true;
        return false;
    }
};
