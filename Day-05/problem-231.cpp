class Solution {
public:
    bool isPowerOfTwo(int n) {

        for (int x = 0; x<31 ; x++) {

            int ans = pow(2,x);
 
            if (ans==n) {
            return true;
            }
        }
        return false;    
    }
};