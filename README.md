# Candy-Store CC

This C++ program reads multiple test cases and performs a simple calculation based on two integers `x` and `y`. Let’s go through it step by step:

---

### 🔷 **Header & Namespace**

```cpp
#include <bits/stdc++.h>
using namespace std;
```

* Includes **all standard C++ libraries** (common in competitive programming).
* Uses the **standard namespace** so you can write `cin`, `cout` directly.

---

### 🔷 **Main Function**

```cpp
int main() {
    int t;
    cin >> t;
```

* Reads the number of **test cases** `t`.

---

### 🔁 **Processing Each Test Case**

```cpp
while (t--) {
    int x, y;
    cin >> x >> y;
```

* For each test case, reads two integers `x` and `y`.

---

### 🔎 **Conditional Logic**

```cpp
if(x > y){
    cout << y * 1 << endl;
}
```

* If `x` is greater than `y`, print `y * 1`, i.e., just the value of `y`.

#### 📌 Example:

If `x = 5`, `y = 3` → output is `3`.

---

### 🧮 **Else Case**

```cpp
else {
    int a = x * 1 + abs(x - y) * 2;
    cout << a << endl;
}
```

* If `x ≤ y`, calculate:

  * `x * 1`: the cost for the first `x` units.
  * `abs(x - y) * 2`: the cost for the extra units beyond `x`, charged at **double rate**.
* Then print the total `a`.

#### 📌 Example:

If `x = 3`, `y = 5`:

* Cost = `3*1 + (5-3)*2 = 3 + 4 = 7`

---

### 🧠 **What This Code Simulates**

It's like a **billing or cost calculation** system:

* If you want to consume more than `x` units (like a basic quota), extra usage is charged at a **higher rate**.

---
This C++ program reads several test cases. For each one, it takes two numbers, `x` and `y`. If `x` is greater than `y`, it just prints the value of `y`.

If `x` is less than or equal to `y`, it calculates a cost: the first `x` items cost 1 each, and the extra items (`y - x`) cost 2 each. Then it prints the total cost.


