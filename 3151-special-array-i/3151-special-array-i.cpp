// class Solution {
// public:
//     bool isArraySpecial(vector<int>& nums) {
//         bool ans=false;;
//         int ans1=1;
//         int ans2=0;

//         if (nums.size()==1)
//         return true;

//         for(int i=0;i<nums.size()-1;i++)
//         {
//             ans1=nums[i]%2;
//             ans2=nums[i+1]%2;

//             if(ans1==1 && ans2==0 || ans1==0 && ans2==1)
//             ans=true;
//             else{
//                 ans=false;
//                 break;
//             }
            

//         }
//         return ans;
//     }
// };

class Solution {
public:
    bool isArraySpecial(vector<int>& nums) {
        for (int i = 0; i < nums.size() - 1; ++i) {
            // Bitwise check: if both elements have the same parity, return false
            if ((nums[i] % 2) == (nums[i + 1] % 2)) {
                return false;
            }
        }
        return true;
    }
};