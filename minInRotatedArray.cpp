// Time Complexity : O(log(n))
// Space Complexity : O(1)
// Did this code successfully run on Leetcode : Yes
// Any problem you faced while coding this : No


// Your code here along with comments explaining your approach
/*Find target and checking neighboring elements*/
class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int l=0;
        int h = n-1;
        //if array is sorted, min will be at l=0
        while(l<=h){
            if(nums[l]<=nums[h]){
            return nums[l];
        }
            int m = l+(h-l)/2;
            if((m==l ||nums[m]<nums[m-1]) && (m==h ||nums[m]<nums[m+1])){
                return nums[m];
            }
            else if(nums[l]<=nums[m]){
                l = m+1;
            }
            else {
                h = m-1;
            }
        }
        return 11111;
    }
};