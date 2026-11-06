class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int n = nums.size();

        int bestPos = nums[0];
        int maxSum = nums[0];

        int bestNeg = nums[0];
        int minSum = nums[0];

        int totalSum = 0;

        for(int i=1; i<n; i++){
            bestPos = max(nums[i] , bestPos+nums[i]);
            bestNeg = min(nums[i] , bestNeg+nums[i]);

            maxSum = max(maxSum , bestPos);
            minSum = min(minSum , bestNeg);
        }
        for(int i=0; i<n; i++){
            totalSum += nums[i];
        }
        if(maxSum < 0) return maxSum; // returns maxsum if both minsum and totalsum are zero

        int circularSum = totalSum - minSum;
        return max(maxSum , circularSum);
    }
};
