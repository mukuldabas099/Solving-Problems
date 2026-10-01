class Solution {
public:
    bool isPalindrome(int x) {
       if(x < 0){
        return false;
       }
       
       int arr[10] = {};
       int index = 0;

       while(x > 0){
        int num = x % 10;
        x = x/10;
        arr[index] = num;
        index++;
       }

       
       int start = 0;
       int end = index - 1;
       bool isPalindrome = true;

       while(start < end){
        if(arr[start] != arr[end]){
            isPalindrome = false;
            break;
        }
        start++;
        end--;
       }
       return isPalindrome;
    }
};
