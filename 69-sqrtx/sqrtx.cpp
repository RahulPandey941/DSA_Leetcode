class Solution {
public:
    int mySqrt(int x) {
        if (x == 0 || x == 1) return x;

        int st = 1, end = x / 2;
        int ans = 0;

        while (st <= end) {
            long long int mid = st + (end - st) / 2;
            long long int square = mid * mid;

            if (square == x) return mid;
            else if (square < x) {
                ans = mid;    
                st = mid + 1;
            } else {
                end = mid - 1;
            }
        }

        return ans;
    }
};
