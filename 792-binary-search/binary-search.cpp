class Solution {
public:
    int search(vector<int>& nums, int target) {
        int st = 0;
        int end = nums.size()-1;
        while(st<= end){
            int i = st+(end-st)/2;
            if(nums[i] == target){
                return i;
            }
            else if(nums[i] < target){
                st = i+1;
            }
            else{
                end = i-1;
            }
        }
        return -1;
    }
};