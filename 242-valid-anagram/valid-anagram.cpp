class Solution {
public:
    bool isAnagram(string s, string t) {

        int n = s.size();
        if(n != t.size()) return false;

        vector <int> scount(26) ;
        vector <int> tcount(26) ;

        for(int i=0 ; i<n ; i++){
            scount[s[i] - 'a']++;
            tcount[t[i] - 'a']++;
        }
        for(int i=0 ; i<26 ; i++){
            if(scount[i] != tcount[i]) return false;
        }
        return true;
    }
};