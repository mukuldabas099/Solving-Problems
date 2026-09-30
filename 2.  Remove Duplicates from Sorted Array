class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();

        if(n==0){
            return 0;
        }

        int start = 0;
        int next = 1;
        int unique_no = 1;

        while(next<n){
            if(nums[start] == nums[next]){
                next++;
            }else{
                nums[start+1] = nums[next];
                start++;
                next++;
                unique_no++;
            }
        }
        return unique_no;
    }
};
