class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result;
        for(int x : nums1){
            int index = 0;
            while(nums2[index] != x){
                index++;
            }
            int answer = -1;
            for(int j = index + 1; j<nums2.size(); j++){
                if(nums2[j] > x){
                    answer = nums2[j];
                    break;
                }
            }
            result.push_back(answer);
        }
        return result;
    }
};