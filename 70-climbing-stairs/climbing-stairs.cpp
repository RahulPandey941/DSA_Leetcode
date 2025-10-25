class Solution {
public:
    int climbStairs(int n) {
        if(n<=2) return n;
        vector<int>sum(n+1);
        int result;
        int pre = 1;
        int now = 2;
        for (int i = 3; i <= n; i++) {
            result = now + pre;
            pre = now;
            now = result;
        }
    return result;
    }
};