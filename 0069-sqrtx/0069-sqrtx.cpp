class Solution {
public:
    int mySqrt(int x) {
        long long low = 0;
        long long high = x;

        while (low <= high) {

            long long mid = low + (high - low) / 2;
            long long lower = mid * mid;
            long long upper = (mid + 1) * (mid + 1);
            if (x == lower)
                return mid;
            else if (x > lower && x < upper)
                return mid;
            else if (x < lower)
                high = mid - 1;
            else
                low = mid + 1;
        }
        return 0;
    }
};