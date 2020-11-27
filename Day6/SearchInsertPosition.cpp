class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int start=0;
        int end=nums.size()-1;
        int mid;
        while(start<=end){
            mid=(start+end)/2;
            if(nums[mid]==target){
                return mid;
             }
            if(target<nums[mid]){
                end=mid-1;
            }
            if(target>nums[mid]){
                start=mid+1;
            }
        }
        
        if(nums[mid]<target){
            return mid+1;
        }
        else if(nums[mid]>target){
            return mid;
        }
        return -1;
    }
};
