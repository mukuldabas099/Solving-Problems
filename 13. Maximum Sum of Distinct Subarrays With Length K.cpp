class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        int low = 0;
        int high = k-1;
        long long sum = 0 , result = 0;
        unordered_map<int,int>freq;

        for(int i = 0; i < k; i++){
            sum = sum + nums[i];
            freq[nums[i]]++;
        }
        if(freq.size() == k){
            result = sum;
        }

        while(high < n-1){
            freq[nums[low]]--;

            if(freq[nums[low]] == 0){
                freq.erase(nums[low]);
            }

            sum = sum - nums[low];
            low++;

            high++;
            sum = sum + nums[high];
            freq[nums[high]]++;

            if(freq.size() == k){
                result = max(result,sum);
            }
        }return result;
    }
};
