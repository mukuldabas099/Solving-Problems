class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int low = 0, high = 0;
        int result = 0;
        unordered_map<char,int>freq;

        while(high < n){
            freq[s[high]]++;
            
            while(freq.size() < high-low+1){
                freq[s[low]]--;
                if(freq[s[low]] == 0){
                    freq.erase(s[low]);
                }
                low++;
            }
            int length = high-low+1;
            result = max(result,length);
            high++;
        }return result;
    }
};
