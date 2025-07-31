class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int size = m+n-1 ;
        int p1 = m-1 ;
        int p2 = n-1 ;
        for(int i = size ; i>=0 ; i--){
            if(p1 < 0){
                nums1[i] = nums2[p2] ;
                p2-- ;
            }
            else if(p2 < 0){
                nums1[i] = nums1[p1] ;
                p1--;
            }
            else {
                nums1[i] = max(nums1[p1] , nums2[p2]) ;
                nums1[p1] > nums2[p2] ? p1-- : p2-- ;
            }
        }
        
    }
};