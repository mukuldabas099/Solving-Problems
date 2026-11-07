class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n = nums.size();
        int totalSum = 0;

        vector<int>pre(n);

        for(int i=0; i<n; i++){
            totalSum += nums[i];
            pre[i] = totalSum;
        }
        return pre;
    }
};
