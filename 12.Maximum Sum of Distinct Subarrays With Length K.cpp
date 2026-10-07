class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        int n = nums.size();

        unordered_map<int, int> freq;
        long long sum = 0;
        long long ans = 0;

        for (int i = 0; i < n; i++) {

            // Add current element
            sum += nums[i];
            freq[nums[i]]++;

            // If window becomes bigger than k
            if (i >= k) {
                sum -= nums[i - k];

                freq[nums[i - k]]--;

                if (freq[nums[i - k]] == 0) {
                    freq.erase(nums[i - k]);
                }
            }

            // Window size is k
            // and all elements are different
            if (i >= k - 1 && freq.size() == k) {
                ans = max(ans, sum);
            }
        }

        return ans;
    }
};
