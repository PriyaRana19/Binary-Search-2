// Time Complexity : O(log(n))
// Space Complexity : O(1)
// Did this code successfully run on Leetcode : Yes
// Any problem you faced while coding this : No


// Your code here along with comments explaining your approach
/*Find target and check if its greater than its neighbors*/
class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        int l =0; 
        int h = n-1;

        while(l<=h){
            int m = l+(h-l)/2;
            //we can make m==l and m ==h to check lower and higher bounds only in selected search space
            if((m==0 || nums[m]>nums[m-1]) && (m == n-1 || nums[m]> nums[m+1])){
                return m;
            }

            else if(m < n-1 && nums[m] <nums[m+1]){
                l = m+1;
            }
            else{
                h = m-1;
            }
        }
        return -1;
    }
};