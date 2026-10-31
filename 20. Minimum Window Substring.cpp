class Solution {
public:
    string minWindow(string s, string t) {
        vector<int>freq(128,0);
        for(char ch : t){
            freq[ch]++;
        }
        int left = 0 , right = 0;
        int minLen = INT_MAX;
        int start = 0;
        int n = s.size();
        int count = t.size();
        
        while(right < n){
            if(freq[s[right]] > 0){
                count--;
            }
            freq[s[right]]--;
            while(count == 0){
                if(right-left+1 < minLen){
                    minLen = right-left+1;
                    start = left;
                }
                freq[s[left]]++;
                if(freq[s[left]] > 0){
                   count++;
                }
                left++;
            }
            right++;
        }
        return minLen == INT_MAX ? "" : s.substr(start,minLen);
    }
};
