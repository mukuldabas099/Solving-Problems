class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int minend = nums[0];
        int maxend = nums[0];
        int answer = nums[0];
        for(int i=1; i<n; i++){
            int v1 = nums[i];
            int v2 = nums[i]*minend;
            int v3 = nums[i]*maxend;

            maxend = max(v1,max(v2,v3));
            minend = min(v1,min(v2,v3));
            answer = max(answer,maxend);
        }
        return answer;
    }
};
