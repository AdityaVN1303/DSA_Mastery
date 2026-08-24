# Sorting

### Divide + Merge - Merge Sort 
```
Pattern -> 
Sort Left -> Sort Right -> Merge

Trigger -> 
Recursively Divide an Array 
Merge 2 Sorted Arrays 

```

---

### Lomuto Partition 
```
Pattern -> 
Pivot = Last 
Use Fast & Slow Pointers -> To Put Pivot To Final Position

Template 
---
i=low-1
j = low -> high-1
if(arr[j] <= pivot) {
i++;
swap(i , j);
}
swap(i+1 , high)
---

Trigger -> 
Need Simple Partition Where Pivot Ends in its final Position 

```

---

### Hoare Partition 
```
Pattern -> 
Pivot = First
Use Opposite End Pointers -> Moves Inward -> Swaps Wrong Side Elements

Template 
---
arr[i] < pivot -> i++
arr[j] > pivot -> j--
otherwise -> swap
---

Trigger -> 
Need Fewer Swaps Or Better Handling of Duplicates  
```

---

### Insertion Sort Pattern 
```
Put Current element in Correct Position in Sorted Array 

Pattern -> 
Take Current -> Shift Larger Elements to right -> Insert Current 

Template 
---
key = arr[i]
j = i-1
while(j >= 0 && arr[j] > key){
  arr[j+1] = arr[j]
  j--
}
arr[j+1] = key
---

Trigger -> 
Need to Insert Elements in Nearly Sorted Array 
```

---









