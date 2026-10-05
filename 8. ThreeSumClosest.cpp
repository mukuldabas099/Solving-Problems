class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());

        int n = nums.size();
        int closest = nums[0] + nums[1] + nums[2];

        for (int i = 0; i < n - 2; i++) {

            int start = i + 1;
            int end = n - 1;

            while (start < end) {

                int sum = nums[i] + nums[start] + nums[end];

                // Update closest answer
                if (abs(target - sum) < abs(target - closest)) {
                    closest = sum;
                }

                // Exact match
                if (sum == target) {
                    return sum;
                }

                // Move pointers
                if (sum < target) {
                    start++;
                }
                else {
                    end--;
                }
            }
        }

        return closest;
    }
};
