// Time Complexity : O(log(n))
// Space Complexity : O(1)
// Did this code successfully run on Leetcode : Yes
// Any problem you faced while coding this : No


// Your code here along with comments explaining your approach
/*Find target and check if its first occurrence and also check if its last occurrence*/
class Solution {
public:
    int firstBinarySearch(int l, int h,vector<int>& nums, int target){
        while(l<=h){
            int m = l+(h-l)/2;

            if(nums[m]==target){
                if(m==0 ||nums[m-1]!=nums[m]){
                    return m;
                }
                else{
                    h = m-1;
                }
                
            }
            else if(nums[m]< target){
                l = m+1;
            }
            else {
                h = m-1;
            }
        }
        return 1111;
    }
    int lastBinarySearch(int l, int h,vector<int>& nums, int target){
        int n = nums.size();
        while(l<=h){
            int m = l+(h-l)/2;

            if(nums[m]==target){
                if(m==n-1 ||nums[m+1]!=nums[m]){
                    return m;
                }
                else{
                    l = m+1;
                }
                
            }
            else if(nums[m]< target){
                l = m+1;
            }
            else {
                h = m-1;
            }
        
        }
        return 1111;
    }
    
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;
        int n = nums.size();
        int l=0;
        int h = n-1;
        int first=-1, last=-1;
        while(l<=h){
            int m = l+(h-l)/2;

            if(nums[m]==target){
                first = firstBinarySearch(0,m,nums,target);
                last =lastBinarySearch(m,n-1,nums,target);
                break;
            }
            else if(nums[m]< target){
                l = m+1;
            }
            else {
                h = m-1;
            }
        
        }
        ans.push_back(first);
        ans.push_back(last);
        return ans;
    }
    
};