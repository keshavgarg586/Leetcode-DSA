class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int count=0;

        for(int i=0;i<grid.size();i++){

            int low=0;
            int high=grid[0].size()-1;

            while(low<=high){
                int mid=low+(high-low)/2;

                if(grid[i][mid]>=0)
                low=mid+1;
                else
                high=mid-1;
            }
            if(low<grid[0].size())
            count=(grid[0].size()-low)+count;
        }
        return count;

    }
};