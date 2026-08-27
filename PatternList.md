# Patterns 

## Sorting 
```
Cyclic Sort >> Counting Sort >> Sort
```

### Sort Function
```
Perform Sorting to Unlock ->
- Linear Scan (Single Pass)
- Binary Search
- Two Pointers
- Sliding Window
```

### Counting Sort
```
Use When --->
- If Solution requires Sorting
- Range is Small
- Values are/convertible in Valid Range (Offset)
- Go for COUNTING SORT Over sort()
```

### Cyclic Sort
```
- Range Given [0 , n] or [1 , n]
- Ignores Numbers out of Range
- Sorts in TC - O(N) and SC - O(1)
```

## Hashing 
```
If the answer depends on something seen earlier , go for hashing
Enhances TC - O(N) but Degrades SC - O(N)

Hashmap - Need Extra Information about the Elements
Hashset - Only Need to Know Whether Something Exists 
```
```
Frequency Counting - Use Hashmap
Check Existence - Use Hashset

```

## Math 

### Formula Patterns 
```
Multiplicity Difference -
(Requires Hashset for Storing Unique Elements)
If Every Number appears K times except One Number which appears M Times (K > M), then :
x = (k*(Sum of all Unique Elements) - (Sum of All Elements))/(k-m)
Trigger ---> Find Unique/Outlier Element & Fixed Repetition is given for Each

```

## Bit Manipulation 
```
XOR -
Property --->
- X ^ X = 0
- X ^ 0 = X
```

