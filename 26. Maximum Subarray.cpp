class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int ansWer = nums[0];
        int bestAns = nums[0];
        for(int i=1; i<n; i++){
            int v1 = nums[i];
            int v2 = bestAns + nums[i];
            bestAns = max(v1,v2);
            ansWer = max(ansWer , bestAns);
        }
        return ansWer;
    }
};
