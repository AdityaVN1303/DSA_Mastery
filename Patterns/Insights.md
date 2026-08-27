# Insights

### Cyclic Sort vs Inplace Negation

```
For All Problems Solved with Inplace Negation can Also be solved with Cyclic Sort but Vice versa not Possible

Cyclic Sort - Sorts Elements and Disrupts the Original Sequence (indexing) of the Array
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
---

### Cyclic Sort

```
An In Place Sorting Technique that repeatedly puts each number at its correct index using its value
Value -> Correct Index -> Swap Until Correct
Sorts in TC = O(N) , SC = O(1)

- If Numbers go out of range , ignore them

Use When --->
Given numbers from Range (1 to N) or (0 to N) ---> Use Cyclic Sort
```
---

### Inplace Negation

```
An In Place Sorting Technique that repeatedly puts each number at its correct index using its value
Value -> Correct Index -> Swap Until Correct
Sorts in TC = O(N) , SC = O(1)


Use When --->
Standard Usage: Only applicable directly when all input elements are strictly positive ([1, n]).
(Pre-processing): Can only be used on mixed/negative inputs if you first overwrite/sanitize all negative values and zeros with dummy values (n + 1) in a separate linear pass.
Default Choice: If an input contains negatives and you don't want to Pre-process, use Cyclic Sort instead.
```   

---

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
---

## Hashing

```
If the answer depends on something seen earlier , go for hashing
```

### Hashset

```
Usage Type --->
- Ordered Set - O(logn)
- Unordered Set - O(n) , worst - O(n^2)

Variations --->
- Check Existence
- Duplicate Detection
- Unique Elements
- Consecutive Sequence

```
---

### Hashmap / Array Hash

```
Usage Type --->
- Hash Array (Small Known Range)
- Ordered Map - O(logn)
- Unordered Map - - O(n) , worst - O(n^2)

Variations --->
- Frequency Hashing
- Check Presence + Extra Info

```

---


### Math Patterns 
```
Multiplicity Difference -
(Requires Hashset for Storing Unique Elements)
If Every Number appears K times except One Number which appears M Times (K > M), then :
x = (k*(Sum of all Unique Elements) - (Sum of All Elements))/(k-m)
Trigger ---> Find Unique/Outlier Element & Fixed Repetition is given for Each

```  
--- 
