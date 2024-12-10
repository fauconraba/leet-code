class Solution {
public:
   long long check(int x)
    {  
       long long y=0;
        while( x > 9 ){
           y = ( y+ (x % 10) )  * 10 ;
           x/=10;
        }
      y += x;
        return y;
    }
    bool isPalindrome(int x) {
        if(x < 0)
        {
            return false;
        }
        else if( x < 10)
        {
            return true;
        }
        else if( x > 9){
            if (check(x) == x){
                return true;
            }
            else {
                return false;
            }
        }
        return false;
    }

};
