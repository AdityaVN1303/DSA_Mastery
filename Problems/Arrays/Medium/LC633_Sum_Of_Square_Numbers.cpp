// LC 633 - Sum of Square Numbers

// Approaches

// Two Pointers (Opposite Ends) + Divisor Pair
// Failed --- Taking 0 as i (perfect square calculate too) , overflow integer (use long long) , go till root(n) (square of number greater than n will exceed n)
// Hack - Going till Square Root
// TC - O(root(N))
// SC - O(1)
bool judgeSquareSum(int c) {
        int i=0; 
        int j = sqrt(c);
        
        while(i <= j){
            long long calc = 1LL * i*i + j*j;
            if(calc == c) return true;
            else if(calc > c) --j;
            else ++i;
        }
        
        return false;
    }

// Math Calculation 
// a^2 + b^2 = c , b = root(c - a^2) , if (root(c - a^2) == (int) b) return true 
// Check for a till root(c) only
// TC - O(root(N))
// SC - O(1)
bool judgeSquareSum(int c) {
        for(long long a = 0; a*a <= c; ++a){
            double b = sqrt(c - a*a);
            if(b == (int)b) return true;
        }
        return false;
    }
