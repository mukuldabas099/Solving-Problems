class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int n = nums.size();

        int maxSum = nums[0];
        int minSum = nums[0];

        int bestPos = nums[0];
        int bestNeg = nums[0];

        for(int i=1; i<n; i++){
            bestPos = max(nums[i] , bestPos+nums[i]);
            bestNeg = min(nums[i] , bestNeg+nums[i]);

            maxSum = max(maxSum , bestPos);
            minSum = min(minSum , bestNeg);
        }
        return max(maxSum , abs(minSum));
    }
};
