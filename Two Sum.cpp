class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int st = 0 , ed = st + 1;
        vector<int>ans;
        while(st <= ed){
            if(nums[st] + nums[ed] == target){
                ans.push_back(st),ans.push_back(ed);
                return ans;
            }
            else{
                ed++;
                if(ed == nums.size()){
                    st+=1;
                    ed = st + 1;
                }
            }
        }
        return ans;
    }
};