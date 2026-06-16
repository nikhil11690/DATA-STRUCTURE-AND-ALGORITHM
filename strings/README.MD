# C++ Strings

A collection of essential C++ string concepts, operations, and interview patterns.

## 📌 Overview

`std::string` is a dynamic sequence of characters provided by the C++ Standard Library. It offers efficient text manipulation and is widely used in Data Structures & Algorithms, Competitive Programming, and Software Development.

---

## 🚀 Basic Declaration

```cpp
string s;
string name = "Nikhil";
string str("Hello");
```

---

## 🔧 Common Operations

### Length

```cpp
s.length();
s.size();
```

### Access Characters

```cpp
s[i];
s.at(i);
```

### Append

```cpp
s += 'a';
s += "xyz";

s.push_back('a');
```

### Remove Last Character

```cpp
s.pop_back();
```

### Check Empty

```cpp
s.empty();
```

### Clear String

```cpp
s.clear();
```

---

## ✂️ Substring

```cpp
string s = "abcdef";

cout << s.substr(2, 3); // cde
```

---

## 🔍 Find

```cpp
string s = "hello";

cout << s.find("ll"); // 2
```

Returns `string::npos` if not found.

---

## ❌ Erase

```cpp
string s = "abcdef";

s.erase(2, 3);

// Result: abf
```

---

## ➕ Insert

```cpp
string s = "abcd";

s.insert(2, "XYZ");

// Result: abXYZcd
```

---

## 🔄 Reverse

```cpp
reverse(s.begin(), s.end());
```

---

## 📊 Sort

```cpp
sort(s.begin(), s.end());
```

---

## 🔠 Case Conversion

### Uppercase

```cpp
transform(s.begin(), s.end(),
          s.begin(), ::toupper);
```

### Lowercase

```cpp
transform(s.begin(), s.end(),
          s.begin(), ::tolower);
```

---

## 🔢 Conversions

### String → Integer

```cpp
int num = stoi("123");
```

### Integer → String

```cpp
string s = to_string(123);
```

---

## 🔁 Traversal

### Range-Based Loop

```cpp
for(char ch : s)
{
    cout << ch << " ";
}
```

### Index-Based Loop

```cpp
for(int i = 0; i < s.size(); i++)
{
    cout << s[i];
}
```

---

## ⏱️ Time Complexities

| Operation       | Complexity |
| --------------- | ---------- |
| Access (`s[i]`) | O(1)       |
| push_back()     | O(1)       |
| pop_back()      | O(1)       |
| size()          | O(1)       |
| empty()         | O(1)       |
| find()          | O(n)       |
| substr()        | O(k)       |
| erase()         | O(n)       |
| insert()        | O(n)       |
| reverse()       | O(n)       |
| sort()          | O(n log n) |

---

## 🎯 Interview Questions

* Reverse a String
* Valid Palindrome
* Valid Anagram
* Longest Common Prefix
* String Compression
* Minimum Window Substring
* KMP Algorithm
* Rabin Karp
* Z Algorithm
* Rolling Hash

---

## 📚 Useful Headers

```cpp
#include <string>
#include <algorithm>
```

Happy Coding! ⭐
If this repository helped you, consider giving it a star.
