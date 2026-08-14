class Solution {
public:
    int arrangeCoins(int n) {
        int count = 0;
        int k = n;
        int i = 1;

        while (k <= n) {

            k = k - i;
            i++;

            if (k >= 0)
                count++;
            else
                return count;
        }
        return 0;
    }
};