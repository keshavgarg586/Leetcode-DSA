class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int count = 0;
        int no = 1;
        int i = 0;

        while (count < k) {
            if (i < arr.size() && arr[i] == no) {
                i++; 
            } else {
                count++; 
                if (count == k) return no;
            }
            no++;
        }
        return no;
    }
};