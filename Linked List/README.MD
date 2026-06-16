# Linked List in C++

A complete guide to Linked Lists for Data Structures & Algorithms interviews and competitive programming.

---

# 📌 What is a Linked List?

A Linked List is a linear data structure where elements are stored in **nodes**.

Each node contains:

* Data
* Address of the next node

Unlike arrays, linked lists do not require contiguous memory allocation.

---

# 🏗️ Node Structure

```cpp
class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};
```

---

# 📊 Linked List vs Array

| Feature             | Array      | Linked List    |
| ------------------- | ---------- | -------------- |
| Memory              | Contiguous | Non-contiguous |
| Access              | O(1)       | O(n)           |
| Insert at Beginning | O(n)       | O(1)           |
| Delete at Beginning | O(n)       | O(1)           |
| Dynamic Size        | No         | Yes            |

---

# 🚀 Traversal

```cpp
void print(Node* head) {
    Node* temp = head;

    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
```

### Time Complexity

```text
O(n)
```

---

# ➕ Insertion at Beginning

```cpp
void insertAtHead(Node* &head, int val) {
    Node* newNode = new Node(val);

    newNode->next = head;
    head = newNode;
}
```

### Complexity

```text
Time: O(1)
Space: O(1)
```

---

# ➕ Insertion at End

```cpp
void insertAtTail(Node* &head, int val) {
    Node* newNode = new Node(val);

    if(head == NULL) {
        head = newNode;
        return;
    }

    Node* temp = head;

    while(temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = newNode;
}
```

### Complexity

```text
O(n)
```

---

# ➕ Insertion at Position

```cpp
void insertAtPosition(Node* &head,
                      int pos,
                      int val) {

    if(pos == 1) {
        insertAtHead(head, val);
        return;
    }

    Node* temp = head;

    for(int i = 1; i < pos - 1; i++) {
        temp = temp->next;
    }

    Node* newNode = new Node(val);

    newNode->next = temp->next;
    temp->next = newNode;
}
```

---

# ❌ Delete Head

```cpp
void deleteHead(Node* &head) {
    if(head == NULL) return;

    Node* temp = head;

    head = head->next;

    delete temp;
}
```

### Complexity

```text
O(1)
```

---

# ❌ Delete Tail

```cpp
void deleteTail(Node* &head) {

    if(head == NULL) return;

    if(head->next == NULL) {
        delete head;
        head = NULL;
        return;
    }

    Node* temp = head;

    while(temp->next->next != NULL) {
        temp = temp->next;
    }

    delete temp->next;

    temp->next = NULL;
}
```

### Complexity

```text
O(n)
```

---

# 🔄 Reverse Linked List

### Iterative Approach

```cpp
Node* reverse(Node* head) {

    Node* prev = NULL;
    Node* curr = head;

    while(curr != NULL) {

        Node* nextNode = curr->next;

        curr->next = prev;

        prev = curr;
        curr = nextNode;
    }

    return prev;
}
```

### Complexity

```text
Time: O(n)
Space: O(1)
```

---

# 🐢 Floyd Cycle Detection

Detect loop in Linked List.

```cpp
bool hasCycle(Node* head) {

    Node* slow = head;
    Node* fast = head;

    while(fast && fast->next) {

        slow = slow->next;
        fast = fast->next->next;

        if(slow == fast)
            return true;
    }

    return false;
}
```

### Complexity

```text
Time: O(n)
Space: O(1)
```

---

# 🧩 Find Middle Node

```cpp
Node* middle(Node* head) {

    Node* slow = head;
    Node* fast = head;

    while(fast && fast->next) {

        slow = slow->next;
        fast = fast->next->next;
    }

    return slow;
}
```

---

# 🔗 Merge Two Sorted Lists

```cpp
Node* merge(Node* l1, Node* l2) {

    Node dummy(-1);

    Node* tail = &dummy;

    while(l1 && l2) {

        if(l1->data < l2->data) {
            tail->next = l1;
            l1 = l1->next;
        }
        else {
            tail->next = l2;
            l2 = l2->next;
        }

        tail = tail->next;
    }

    tail->next = l1 ? l1 : l2;

    return dummy.next;
}
```

---

# 🔄 Types of Linked List

## Singly Linked List

```text
1 -> 2 -> 3 -> NULL
```

---

## Doubly Linked List

```text
NULL <- 1 <-> 2 <-> 3 -> NULL
```

Node Structure:

```cpp
class Node {
public:
    int data;

    Node* prev;
    Node* next;
};
```

---

## Circular Linked List

```text
1 -> 2 -> 3
^         |
|_________|
```

Last node points back to first node.

---

# 📈 Complexity Table

| Operation   | Singly LL |
| ----------- | --------- |
| Access      | O(n)      |
| Search      | O(n)      |
| Insert Head | O(1)      |
| Insert Tail | O(n)      |
| Delete Head | O(1)      |
| Delete Tail | O(n)      |
| Reverse     | O(n)      |

---

# 🎯 Most Asked Interview Questions

### Easy

* Reverse Linked List
* Find Middle Node
* Delete Node
* Detect Cycle
* Remove Duplicates

### Medium

* Merge Two Sorted Lists
* Palindrome Linked List
* Odd Even Linked List
* Intersection of Two Lists
* Remove Nth Node From End

### Hard

* Reverse Nodes in K Groups
* Copy List with Random Pointer
* Flatten Multilevel Linked List
* LRU Cache
* Merge K Sorted Lists

---

# 🧠 Important Patterns

### Slow & Fast Pointer

Used in:

* Cycle Detection
* Middle Node
* Palindrome Linked List

### Dummy Node

Used in:

* Merge Lists
* Delete Nodes
* Partition Lists

### In-place Reversal

Used in:

* Reverse Linked List
* Reverse K Group
* Palindrome Linked List

---

# 🚀 Key Takeaways

* Linked Lists provide dynamic memory allocation.
* Insertion/Deletion at head is O(1).
* Random access is O(n).
* Master:

  * Reverse LL
  * Cycle Detection
  * Middle Node
  * Merge Lists
  * Fast & Slow Pointer

These concepts cover 80%+ Linked List interview questions.

⭐ If this repository helped you, consider giving it a star.
