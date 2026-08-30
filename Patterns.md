# Patterns

```
Sorting + Linear Scan
Sorting + Pointers

Opposite End Pointers
Fast & Slow Pointers
Merge using Two Pointers

Cyclic Sort

Cyclic Replacement

Doubling - Cyclic Traversal

Hashing - With Set , Map
Hashing + Prefix Sum

Sliding Window - 
Fixed 
Variable 


```

### Useful STL Functions

```
unique() ---> Compacts Consecutive Duplicates (Requires Sorted Array)
auto it = unique(itr1 , itr2);

count() ---> Gives Count of Element in Vector
int x = count(itr1 , itr2 , val)

ans.erase() ---> Erases Range
auto itr = ans.erase(itr1 , itr2);

remove() ---> moves all Elements not equal to given value to start
auto itr = remove(itr1 , itr2 , val);

accumulate() ---> Provides Sum for Given Range
int sum = accumulate(itr1 , itr2 , initialVal);

max/min Element ---> Returns max/min Element in range
int val = *max_element(itr1 , itr2) / *min_element(itr1 , itr2)

rotate() ---> Rotates Array so that middle element becomes first
rotate(firstItr , middleItr , lastItr)

reverse() ---> Reverses the Range
reverse(itr1 , itr2)

Set Operations ---> (Requires 2 Sorted Arrays)
set_union(itr1 , itr2 , itr1 , itr2 , back_inserter(ans)) ---> A or B
set_intersection(itr1 , itr2 , itr1 , itr2 , back_inserter(ans)) ---> A AND B
set_differnece(itr1 , itr2 , itr1 , itr2 , back_inserter(ans)) ---> A But NOT B
set_symmetric_difference(itr1 , itr2 , itr1 , itr2 , back_inserter(ans)) ---> Present in A or B But NOT in BOTH
```
