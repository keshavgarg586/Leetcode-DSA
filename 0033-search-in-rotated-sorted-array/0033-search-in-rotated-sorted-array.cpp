class Solution {
public:
    int findMin(vector<int>& nums) {
        int low = 0;
        int high = nums.size() - 1;

        while (low < high) {

            if (nums[low] <= nums[high])
                return low;

            int mid = low + (high - low) / 2;

            if (nums[mid] > nums[high])
                low = mid + 1;
            else
                high = mid;
        }

        return low;
    }

    int search(vector<int>& nums, int target) {

        int n = nums.size();
        int k = findMin(nums);

        int low, high;

        if (target >= nums[k] && target <= nums[n - 1]) {
            low = k;
            high = n - 1;
        } else {
            low = 0;
            high = k - 1;
        }

        while (low <= high) {

            int mid = low + (high - low) / 2;

            if (nums[mid] == target)
                return mid;

            if (nums[mid] < target)
                low = mid + 1;
            else
                high = mid - 1;
        }

        return -1;
    }
};