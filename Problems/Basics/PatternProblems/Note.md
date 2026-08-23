# Patterns Theory

---

## Core Idea

Pattern problems are mainly about understanding the relationship between:

* **Rows (`i`)**
* **Columns (`j`)**
* **Input size (`n`)**
* **Spaces**
* **Characters / Stars / Numbers**

The goal is to derive a condition that tells us **what should be printed at position `(i, j)`**.

---

## Outer Loop → Rows

The **outer loop** generally controls the number of **rows**.

```cpp
for (int i = 1; i <= n; i++) {
    // Print one row
}
```

If:

```text
n = 5
```

then the outer loop runs:

```text
i = 1
i = 2
i = 3
i = 4
i = 5
```

Therefore:

> **Outer loop → Number of rows / iterations**

---

## Inner Loop → Columns

The **inner loop** generally controls what gets printed inside each row.

```cpp
for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
        // Print element
    }
}
```

Here:

> **Inner loop → Number of columns / elements in a row**

The number of columns may depend on:

* `i`
* `n`
* A fixed value
* A mathematical relationship

For example:

```text
Row 1 → 1 column
Row 2 → 2 columns
Row 3 → 3 columns
Row 4 → 4 columns
```

This suggests:

```text
columns = i
```

---

# Check for Symmetry

When solving a pattern, first check whether the pattern has **symmetry**.

Common types:

* Left-right symmetry
* Top-bottom symmetry
* Pyramid symmetry
* Diamond symmetry

For example:

```text
    *
   ***
  *****
 *******
```

This pattern has **left-right symmetry**.

Instead of treating every position independently, symmetry can help derive the relationship between:

```text
i, j, n
```

---

# Problem Types

Pattern problems can generally be classified into a few common categories.

## 1. Symmetry

Patterns where the output has some form of symmetry.

Example:

```text
   *
  ***
 *****
*******
```

Key idea:

> Find the relationship between the left and right sides of the pattern.

---

## 2. Pattern + Space + Pattern

These patterns contain multiple components in the same row.

Example:

```text
*      *
**    **
***  ***
********
```

Think of each row as:

```text
Pattern + Spaces + Pattern
```

For each row, determine separately:

```text
1. Left pattern
2. Number of spaces
3. Right pattern
```

---

## 3. Coordinate-Based Printing

Instead of thinking only in terms of rows and columns, think of every printed position as a coordinate:

```text
(i, j)
```

Then determine:

> Should something be printed at `(i, j)`?

For example:

```cpp
if (condition(i, j, n))
    cout << "*";
else
    cout << " ";
```

This approach is especially useful for:

* Borders
* Diagonals
* Squares
* Triangles
* Pyramids
* Complex shapes

---

## 4. Character / Star / Number Printing

The structure of the pattern may be the same while the thing being printed changes.

Examples:

```text
*
**
***
```

or:

```text
1
12
123
```

or:

```text
A
AB
ABC
```

The important part is first finding:

```text
Which positions should contain something?
```

Then determine:

```text
What should be printed there?
```

---

# General Trick

The most important trick in pattern problems is:

> **Find the relationship between `i`, `j`, and `n`.**

For every position in the pattern, ask:

```text
What is i?
What is j?
What is n?
```

Then derive a condition.

For example:

```text
if (j <= i)
    print("*");
else
    print(" ");
```

Here:

```text
Number of columns printed = i
```

Another example:

```text
if (i + j >= n + 1)
    print("*");
```

The pattern is determined by the relationship:

```text
i + j = n + 1
```

---

# Pattern Solving Framework

When you see a new pattern, follow this order:

```text
1. Identify number of rows
          ↓
2. Identify columns per row
          ↓
3. Check symmetry
          ↓
4. Break into spaces + patterns if required
          ↓
5. Treat every position as (i, j)
          ↓
6. Find relation between i, j and n
          ↓
7. Decide what to print
```

### Golden Rule

> **Don't memorize pattern codes. Derive the condition from the relationship between `i`, `j`, and `n`.**
