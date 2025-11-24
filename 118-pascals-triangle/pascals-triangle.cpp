class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector <vector<int>> ans;
        ans.push_back({1});

        for(int i = 1 ; i<numRows ; i++){
            vector<int> temp(i+1,1);
            vector<int>pre = ans[i-1];
            for(int j = 1 ; j<i ; j++){
                int val = pre[j-1]+pre[j];
                temp[j] = val;
            }
            ans.push_back(temp);
        }
        return ans;
    }
};