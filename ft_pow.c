double myPow(double x, int n) {
    
    if (x == 1 || n == 0) return 1; 
    

    double result = 1; 

    long long exp = n; 
    
   
    if (exp < 0) {
        x = 1 / x; 
        exp = -exp; 
    }

    while (exp > 0) {
        // If exp is odd, multiply the result by x.
        if (exp % 2 == 1) {
            result *= x;
        }
        x *= x; // Square x.
        exp /= 2; // Halve the exponent.
    }

    return result;
}
