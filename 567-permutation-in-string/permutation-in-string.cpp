class Solution {
public:
    bool isSame(int part[] ,int main[]){
        for(int i =0 ; i <26 ; i++){
            if(part[i] != main[i] ) return false;
        }
        return true;
    }
    bool checkInclusion(string s1, string s2) {
        if(s1.length()>s2.length()) return false;

        int part[26] = {0};

        int len = s1.length();
        for(int i = 0 ; i< len ; i++){
             part[s1[i]-'a']++;
        }
        
        for(int i = 0 ; i <= s2.size()-len; i++){
            
            int Main[26] = {0};

            for(int j = i ; j < i+len ; j++){
                Main[s2[j]-'a']++;
            }

            if(isSame(part , Main)){
                return true;
            }  
        }
        return false;
    }
};