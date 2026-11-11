class Solution {
public:
    int findMaxLength(vector<int>& nums) {
       int n = nums.size();
       unordered_map<int,int>freq;
       int result = 0;
       int zeros = 0;
       int ones = 0;
       for(int i=0; i<n; i++){

        if(nums[i] == 0){
            zeros++;
        }else{
            ones++;
        }

        int diff = zeros - ones;
        if(diff == 0){
            result = max(result , i+1);
            continue;
        }

        if(freq.find(diff) == freq.end()){
            freq[diff] = i;
        }else{
            int idx = freq[diff];
            int len = i - idx;
            result = max(result , len);
        }
       }
       return result;
    }
};
