// LC 633 - Sum of Square Numbers

// Approaches

// Two Pointers (Opposite Ends) + Divisor Pair
// Failed --- Taking 0 as i (perfect square calculate too) , overflow integer (use long long) , go till root(n) (square of number greater than n will exceed n)
// Hack - Going till Square Root
// TC - O(root(N))
// SC - O(1)

// Math Calculation 
// a^2 + b^2 = c , b = root(c - a^2) , if (root(c - a^2) == (int) b) return true 
// Check for a till root(c) only
// TC - O(root(N))
// SC - O(1)

// Binary Search 
// b^2 = c - a^2
// Iterate a till root(c)
// For each a , find c - a^2 , and binary search in remaining part for b , such that b^2 = c - a^2