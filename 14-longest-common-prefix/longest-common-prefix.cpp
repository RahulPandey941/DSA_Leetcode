class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty()) return "";

        sort(strs.begin(), strs.end());

        string fstStr = strs.front();
        string bkStr = strs.back();

        int count = 0 ;

        while(count< fstStr.size() && count < bkStr.size() && fstStr[count] == bkStr[count])
            count++;

        return fstStr.substr(0,count);

    }
};