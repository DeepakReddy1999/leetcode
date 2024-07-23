class Solution {
public:
    bool squareIsWhite(string s) {
        if(s[0]=='a' || s[0]=='c' ||s[0]=='e' || s[0]=='g' ){
            int i= (int)s[1]-'0';
            if(i%2==1){
                return false;
            }else{
                return true;
            }
        }else{
            int i= (int)s[1]-'0';
            if(i%2==0){
                return false;
            }else{
                return true;
            }
        }
    }
};