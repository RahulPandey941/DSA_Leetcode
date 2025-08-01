class Solution {
public:
    double findMedianSortedArrays(vector<int>& A, vector<int>& B) {
        vector<int> final (A.size() + B.size());
        int n = final.size()-1;
        double median ;
        merge(A.begin(),A.end(),B.begin(),B.end(),final.begin());
        if(n % 2 == 0){
            median = final[n/2];
        }else {
            median = double(final[n/2]+final[(n/2)+1])/2;
        }
        return median;
    }
};