class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int>freq;
        for(char ch : s){
            freq[ch]++;
        }

        int answer = 0;
        bool odd = false;

        for(auto it : freq){
            if(it.second%2 == 0){
                answer += it.second;
            }
            else{
                answer += it.second-1;
                odd = true;
            }
        }
        if(odd == true){
            answer++;
        }
        return answer;
    }
};
