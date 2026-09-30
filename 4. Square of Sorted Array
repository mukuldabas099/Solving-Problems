class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> arr(n);

        int i = 0;
        int j = n - 1;
        int next = n - 1;

        while (i <= j) {
            if (abs(nums[i]) > abs(nums[j])) {
                arr[next] = nums[i] * nums[i];
                i++;
            } else {
                arr[next] = nums[j] * nums[j];
                j--;
            }

            next--;
        }

        return arr;
    }
};
