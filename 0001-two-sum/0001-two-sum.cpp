class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        map<int,int> ps;
        for(int i=0;i<n;i++){
            int rem = target - nums[i];
            if(ps.find(rem) != ps.end()){
                int j = ps[rem];
                return {i,j};
            }
            if(ps.find(nums[i])== ps.end()){
                ps[nums[i]]=i;
            }
        }
        return {};
    }
};