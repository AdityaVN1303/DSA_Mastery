# Fundamentals

## Time & Space Complexity

### Time & Space Complexity

```
TC = No. of Times the Work Executes x Work Per Execution

SC = Maximum Memory Used at Any Point

Rules ->
- Remove Constant Terms
- Take Maximum
- Consider the Worst Case Always
```

### TC When Counting No. of Digits

```
No. of Digits = log10(N) + 1
K = log10(N)

If Processing Each Digit Once :
Hence TC = O(K) = O(logN)
```

---

## Recursion

### Finding TC of Recursion

```
TC = No. Of Levels x Calls Per Level x Work Done Per Call

Levels = Depth
No. of Levels = How many recursive steps does it take for n to reach the base case?

```

### Finding SC of Recursion

```
SC = Maximum Recursion Depth(Level) of ACTIVE Recursive Calls x Space Used by Each Call

```

## MATH

### logn(N) Meaning

```
log2(N) = How many times you divide N by 2 to reach 1

log10(N) = How many times you divide N by 10 to reach 1
```

### Calculate No. of Digits

```
No. of Digits = floor(log10(abs(N))) + 1
```
