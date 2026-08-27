# Bit Manipulation 

### XOR
```
Property --->
- X ^ X = 0
- X ^ 0 = X

- (a ^ b) = (b ^ a)
- (a^b)^c = (a^c)^b = a^b^c
- a^b = c , then a^c = b , b^c = a

Use When --->
Pairs Cancel + Odd-One-Out -> Think XOR
```
#### Problems

[LC 136 - Single Number](/Problems/Arrays/Easy/LC136_Single_Number.cpp) 
```
Every Element has Its Pair (Twice)
Only 1 Element appearing Once has No Pair
X^X (pair) becomes 0 , Single element is left as answer
```
[LC 268 - Missing Number](/Problems/Arrays/Easy/LC268_Missing_Number.cpp) 
```
I have a range [0 , n]
Original Array & Range Array - Both Array Together will make Each Element have pair , except the Missing Number
X^X (pair) becomes 0 , Single element is left as answer
```
