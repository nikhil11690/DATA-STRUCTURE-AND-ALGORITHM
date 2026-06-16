# Object-Oriented Programming (OOP) in C++

A comprehensive guide to Object-Oriented Programming concepts in C++ with syntax, examples, and interview-focused notes.

---

# 📌 What is OOP?

Object-Oriented Programming (OOP) is a programming paradigm based on **Objects** and **Classes** that helps in writing reusable, scalable, and maintainable code.

### Benefits

* Code Reusability
* Modularity
* Security
* Scalability
* Easy Maintenance

---

# 🏗️ Class and Object

A **Class** is a blueprint for creating objects.

An **Object** is an instance of a class.

```cpp
class Student {
public:
    string name;
    int age;
};

int main() {
    Student s1;

    s1.name = "Nikhil";
    s1.age = 21;
}
```

---

# 🔐 Access Modifiers

| Modifier  | Access                                |
| --------- | ------------------------------------- |
| public    | Accessible everywhere                 |
| private   | Accessible only inside class          |
| protected | Accessible in class and derived class |

```cpp
class Student {
private:
    int age;

public:
    string name;
};
```

---

# 🎯 Constructor

A constructor is automatically called when an object is created.

```cpp
class Student {
public:
    string name;

    Student() {
        cout << "Constructor Called";
    }
};
```

### Parameterized Constructor

```cpp
class Student {
public:
    string name;

    Student(string n) {
        name = n;
    }
};
```

---

# 🧹 Destructor

Called automatically when an object is destroyed.

```cpp
class Student {
public:
    ~Student() {
        cout << "Destructor Called";
    }
};
```

---

# 📦 Encapsulation

Binding data and functions together while restricting direct access.

```cpp
class BankAccount {
private:
    double balance;

public:
    void setBalance(double b) {
        balance = b;
    }

    double getBalance() {
        return balance;
    }
};
```

---

# 🎭 Abstraction

Hiding implementation details and exposing only necessary functionality.

```cpp
class Car {
public:
    void startCar() {
        cout << "Car Started";
    }
};
```

User only knows how to use the function, not how it works internally.

---

# 👨‍👦 Inheritance

Allows one class to acquire properties and methods of another class.

```cpp
class Animal {
public:
    void eat() {
        cout << "Eating";
    }
};

class Dog : public Animal {
};
```

```cpp
Dog d;
d.eat();
```

---

# Types of Inheritance

### Single Inheritance

```cpp
A -> B
```

### Multilevel Inheritance

```cpp
A -> B -> C
```

### Multiple Inheritance

```cpp
A + B -> C
```

### Hierarchical Inheritance

```cpp
      A
     / \
    B   C
```

### Hybrid Inheritance

Combination of multiple inheritance types.

---

# 🔄 Polymorphism

Same interface, different behavior.

---

## Compile-Time Polymorphism

### Function Overloading

```cpp
class Math {
public:
    int add(int a, int b) {
        return a + b;
    }

    int add(int a, int b, int c) {
        return a + b + c;
    }
};
```

### Operator Overloading

```cpp
class Complex {
public:
    int real, imag;

    Complex operator+(Complex obj) {
        Complex temp;

        temp.real = real + obj.real;
        temp.imag = imag + obj.imag;

        return temp;
    }
};
```

---

## Run-Time Polymorphism

### Function Overriding

```cpp
class Animal {
public:
    virtual void sound() {
        cout << "Animal Sound";
    }
};

class Dog : public Animal {
public:
    void sound() override {
        cout << "Bark";
    }
};
```

---

# ⭐ Virtual Functions

Used to achieve Runtime Polymorphism.

```cpp
Animal* ptr = new Dog();

ptr->sound();
```

Output:

```text
Bark
```

---

# 🧩 Abstract Class

Contains at least one pure virtual function.

```cpp
class Shape {
public:
    virtual void draw() = 0;
};
```

Cannot create objects of abstract classes.

```cpp
Shape s; // Error
```

---

# 🔗 Friend Function

Can access private members of a class.

```cpp
class Test {
private:
    int x = 10;

    friend void display(Test);
};

void display(Test t) {
    cout << t.x;
}
```

---

# 📋 Static Members

Shared among all objects.

```cpp
class Student {
public:
    static int count;
};

int Student::count = 0;
```

---

# 🧠 this Pointer

Refers to current object.

```cpp
class Student {
public:
    int age;

    void setAge(int age) {
        this->age = age;
    }
};
```

---

# 🚨 Deep Copy vs Shallow Copy

### Shallow Copy

Copies memory addresses.

### Deep Copy

Creates new memory and copies values.

```cpp
Student(const Student &obj) {
    age = obj.age;
}
```

---

# 📚 SOLID Principles

### S — Single Responsibility Principle

One class should have only one reason to change.

### O — Open/Closed Principle

Open for extension, closed for modification.

### L — Liskov Substitution Principle

Derived class should replace base class without issues.

### I — Interface Segregation Principle

Do not force clients to implement unused methods.

### D — Dependency Inversion Principle

Depend on abstractions, not concrete implementations.

---

# 🎯 Most Asked Interview Topics

* Class vs Object
* Constructor vs Destructor
* Encapsulation
* Abstraction
* Inheritance Types
* Function Overloading vs Overriding
* Virtual Functions
* Abstract Class vs Interface
* Deep Copy vs Shallow Copy
* Friend Function
* Static Keyword
* this Pointer
* Diamond Problem
* Virtual Destructor
* SOLID Principles

---

# 🚀 OOP Pillars

1. Encapsulation
2. Abstraction
3. Inheritance
4. Polymorphism

Master these four concepts and you'll be able to solve most OOP interview questions confidently.

⭐ If this repository helped you, consider giving it a star.
