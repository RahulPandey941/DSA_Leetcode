class Solution {
public:
    string removeOccurrences(string s, string part) {
        bool erased = true;
        int pos;
        int n = s.size();
        int size = part.size();
        while (erased){
            pos = s.find(part);
            if(pos<n && pos>-1){
                s.erase(pos,size);
                n -= size;
            }
            else{
                erased = false ;
            }
        }
        return s;
        
    }
};