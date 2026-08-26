# Insights 

### Cyclic Sort vs Inplace Negation 
```
For All Problems Solved with Inplace Negation can Also be solved with Cyclic Sort but Vice versa not Possible

Cyclic Sort Sorts Elements and Disrupts the Original Sequence (indexing) of the Array
Inplace Negation Changes the signs of the Original Array but Maintains the Original Order (Signs can be recovered again)

Cyclic Sort applicable to array with negative numbers too with use of offset , but Inplace negation is not

Inplace Negation Performs No Swaps , while Cyclic Sort Performs Swapping.

Cyclic Sort Is used For Sorting as well.

```

---

### Counting Sort 
```
Sort Array without Comparisons/Swaps
Frequency Array + Retrieval in Sorted Manner 

Use When --->
- If Solution requires Sorting
- Range is Small
- Values are/convertible in Valid Range (Offset)
- Go for COUNTING SORT Over sort()

TC - O(N + K) , SC - O(K)
```
#### Problems 

[LC 268 - Missing Number]() - Range is Small/Known & Range means Sorted ---> Hints Counting Sort        
[LC 448 - Find All Numbers disappeared in An Array]() - Range is Small/Known & Range means Sorted ---> Hints Counting Sort        


---

### Cyclic Sort 
```
An In Place Sorting Technique that repeatedly puts each number at its correct index using its value
Value -> Correct Index -> Swap Until Correct
Sorts in TC = O(N) , SC = O(1)


Use When --->
Given numbers from Range (1 to N) or (0 to N) ---> Use Cyclic Sort 
```
#### Problems 

[LC 268 - Missing Number]() - range from [0 , n]    
[LC 448 - Find All Numbers disappeared in An Array]() - Range from [1 , n]     

---

### Inplace Negation
```
An In Place Sorting Technique that repeatedly puts each number at its correct index using its value
Value -> Correct Index -> Swap Until Correct
Sorts in TC = O(N) , SC = O(1)


Use When --->
Given numbers from Range (1 to N) or (0 to N) ---> Use Cyclic Sort 
```
#### Problems 

[LC 268 - Missing Number]() - Range from [0 , n]     
[LC 448 - Find All Numbers disappeared in An Array]() - Range Given - [1  ,n]    




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

[LC 268 - Missing Number]() - Complete Range ^ Given Range Leaves Element with No Pair (Missing) (X^X=0)

---















