class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0){
            return false;
        }
        
        string str = to_string(x);
        for(int i=0; i <str.length(); i++){
            if(i >= str.length()-1-i){
                break;
            }if(str[i] != str[str.length()-1-i]){
                return false;
            }
        }
        return true;
    }
};