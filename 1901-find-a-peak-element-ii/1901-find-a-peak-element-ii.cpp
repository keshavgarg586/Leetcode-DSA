class Solution {
public:
    int findMaxElement(vector<vector<int>>& mat, int n, int m, int mid) {
        int maxVal = -1;
        int index = -1;
        for (int i = 0; i < n; i++) {

            if (mat[i][mid] > maxVal) {
                maxVal = mat[i][mid];
                index = i;
            }
        }
        return index;
    }

    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();

        int low = 0;
        int high = m - 1;

        while (low <= high) {
            int left = -1;
            int right = -1;
            int mid = low + (high - low) / 2;
            int row = findMaxElement(mat, n, m, mid);

            if (mid + 1 < m)
                right = mat[row][mid + 1];
            else
                right = -1;

            if (mid - 1 >= 0)
                left = mat[row][mid - 1];
            else
                left = -1;

            if (mat[row][mid] > right && mat[row][mid] > left)
                return {row, mid};

            else if (mat[row][mid] < left)
                high = mid - 1;
            else
                low = mid + 1;
        }
        return {-1, -1};
    }
};