class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin() , nums1.end());
        sort(nums2.begin() , nums2.end());
        int n = nums1.size();
        int m = nums2.size();
        vector <int> ans;
        int i = 0 , j =0;
        int common = -1 ;
        while(i<n && j<m){
            while(i<n && nums1[i]==common)i++;
            while(j<m && nums2[j]==common)j++;
            if (i == n || j == m) break;
            if(nums1[i]>nums2[j]) j++;
            else if(nums1[i]<nums2[j]) i++;
            else{
                ans.push_back(nums1[i]);
                common = nums1[i];
                i++;
                j++;
            }
        }
        return ans; 
    }
};