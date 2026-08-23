# Math

## Number Theory

### Divisor Pair

```
Core - If 'i' divides 'n' , then 'n/i' is also a divisor

Divisors always comes in Pair , hence look till √n only.

Edge Case - If 'n' is Perfect Square , the Pair is same divisor , so don't count twice.

Trigger - Find Factors/Divisors

TC - O(√n)

```

### Problems

[Prime Number](/Problems/Basics/Basic_Math/Prime.cpp)  
[Find All Divisors](/Problems/Basics/Basic_Math/FindDivisors.cpp)

---

### Digit Extraction

```
Core - Extract and process digits one by one using % 10 and / 10
- digit = n%10
- n /=10

Trigger - Need to Process Digits of a Number ?

TC - O(k) = O(logN)

Application ---> Reversal of Integer
- reversed = reversed * 10 + n%10

```

### Problems

[Armstrong Number](/Problems/Basics/Basic_Math/Armstrong.cpp)  
[Count Digits of A Number](/Problems/Basics/Basic_Math/CountDigits.cpp)  
[LC - 7 - Reverse the Number ](/Problems/Basics/Basic_Math/LC7_ReverseNumber.cpp)  
[LC - 9 - Palindrome Number](/Problems/Basics/Basic_Math/LC9_PalindromeNumber.cpp)

---

### GCD / Euclidean Algorithm

```
GCD(a , b) = GCD(b , a%b)

'a' must be the greater number initially
Keep Doing till 'b' becomes 0

Trigger - Need GCD / LCM

TC - O(log(min(a , b)))

LCM(a , b) = (a x b)/GCD(a , b)

```

### Problems

[LC - 1979 - Find Greatest Common Divisor of Array](/Problems/Basics/Basic_Math/LC1979_GCD.cppp)

---
