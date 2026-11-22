
class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& nums) {
        int n = nums.size();
        vector<int>answer(n);
        answer[n-1] = 0;
        stack<int>st;
        st.push(n-1);

        for(int i=n-2; i>=0; i--){
            while(!st.empty() && nums[st.top()] <= nums[i]){
                st.pop();
            }
            if(st.empty()){
                answer[i] = 0;
            }
            else{
                answer[i] = st.top() - i; 
            }
            st.push(i);
        }
        return answer;
    }
};
