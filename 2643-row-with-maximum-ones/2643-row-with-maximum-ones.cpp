class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int max = 0;
        int count = 0;
        int index = 0;

        for (int i = 0; i < mat.size(); i++) {
            count=0;
            for (int j = 0; j < mat[i].size(); j++) {
                if (mat[i][j] == 1) {
                    count++;
                }
            }
            if (max < count) {
                index = i;
                max = count;
            }
        }
        return {index, max};
    }
    
};