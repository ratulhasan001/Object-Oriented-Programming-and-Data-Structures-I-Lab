# oop-data-structures-lab

C++ programs from two sessional (lab) courses taken in 2023 for the B.Sc. in Computer Science and Engineering at BAUET: Object-Oriented Programming ([`oop/`](oop)) and Data Structures and Algorithms I ([`DSA/`](DSA)). The OOP folder has one file per weekly lab session. Each file is named with the session number and date (`NN_Lab_DD_MM_YY.cpp`) and covers classes, constructors, friend functions, inheritance, operator overloading, templates and exception handling. The DSA folder implements the basic data structures (linked lists, stack, queue) and the classic sorting algorithms by hand.

## Contents

### [oop/](oop) – Object-Oriented Programming lab

Many session files hold several short exercises one after another. Earlier exercises are usually commented out, and only the last one is active. The table lists the exercise that compiles, followed by the commented-out ones.

| File | Session date | Topics and exercises |
|---|---|---|
| [01_Lab_13_07_23.cpp](oop/01_Lab_13_07_23.cpp) | 13 Jul 2023 | Classes and objects; member functions defined inside and outside the class (`item`, `find_mx_min`). *Contains two `main` functions, so split the file before compiling.* |
| [02_Lab_20_07_23.cpp](oop/02_Lab_20_07_23.cpp) | 20 Jul 2023 | `Student` objects with input and print methods; `Employee` salary calculation with `getInfo` / `AddSal` / `addWork`. *Contains two `main` functions, so split the file before compiling.* |
| [03_Lab_27_07_23.cpp](oop/03_Lab_27_07_23.cpp) | 27 Jul 2023 | Constructors: parameterised, overloaded and default (`Sum`, `Rectangle`, `AddAmount`, commented out); active: a `find_large` class that prints the larger of two numbers. |
| [04_Lab_03_08_23.cpp](oop/04_Lab_03_08_23.cpp) | 3 Aug 2023 | Friend functions: complex-number addition, mean of two private members, minimum of two values. *All exercises are commented out, so there is nothing to run.* |
| [05_Lab_10_08_23.cpp](oop/05_Lab_10_08_23.cpp) | 10 Aug 2023 | Arrays of objects, time addition (h/m/s), single inheritance (`Rectangle` → `Block`, commented out); active: time addition through a friend function. |
| [06_Lab_17_08_23.cpp](oop/06_Lab_17_08_23.cpp) | 17 Aug 2023 | Copy constructors, `Rectangle` area and perimeter, `Library` book list (commented out); active: a `BankAccount` with a parameterised and a copy constructor, deposit and withdraw. |
| [07_Lab_24_08_23.cpp](oop/07_Lab_24_08_23.cpp) | 24 Aug 2023 | Multilevel, hierarchical and multiple inheritance (`shape`, `Book` → `fiction` / `NonFiction`, commented out); active: `BlueWhale` inheriting from both `Mammals` and `MarineAnimanls`. |
| [08_Lab_14_09_23.cpp](oop/08_Lab_14_09_23.cpp) | 14 Sep 2023 | Operator overloading with member and friend `operator+` / `operator-` (`Cents`, `Complex`). |
| [09_Lab_21_09_23.cpp](oop/09_Lab_21_09_23.cpp) | 21 Sep 2023 | Function templates with one and with several type parameters; prefix and postfix `operator++` overloading (commented out). |
| [10_Lab_05_10_23.cpp](oop/10_Lab_05_10_23.cpp) | 5 Oct 2023 | Ambiguity resolution in multiple inheritance, function overriding, virtual base classes, virtual functions (commented out); active: a `Vehicle` → `Car` / `Bike` → `Audi` / `Ford` / `Bajaj` / `TVS` hierarchy with an overridden virtual `display()`. |
| [11_Lab_12_10_23.cpp](oop/11_Lab_12_10_23.cpp) | 12 Oct 2023 | Exception handling with `try` / `throw` / `catch`, including typed catches and `catch(...)`; STL `vector` operations (commented out). |

### [DSA/](DSA) – Data Structures and Algorithms I lab

| File | What it does |
|---|---|
| [single_linked_list.cpp](DSA/single_linked_list.cpp) | Singly linked list with a menu: insert at head, tail or position; delete by value; print; count. Insertion at head or tail is O(1); search and delete are O(n). |
| [double_linked_list.cpp](DSA/double_linked_list.cpp) | Doubly linked list with a menu: insert at head, tail or after a value; delete head, tail or a value; print with prev/next pointers; count. |
| [circular_linked_list.cpp](DSA/circular_linked_list.cpp) | Circular singly linked list (tail points back to head) with the same menu operations. |
| [stack.cpp](DSA/stack.cpp) | Bounded stack (capacity 5) built on `std::list`, with overflow and underflow checks. |
| [queue.cpp](DSA/queue.cpp) | Bounded FIFO queue (capacity 5) built on `std::list`, with overflow and underflow checks. |
| [parenthesis_balance.cpp](DSA/parenthesis_balance.cpp) | Balanced-bracket check for `()[]{}` using a stack, O(n). |
| [postfix.cpp](DSA/postfix.cpp) | Evaluates a postfix expression with single-digit operands and `+ - * /`, using a stack. |
| [tower_of_hanoi.cpp](DSA/tower_of_hanoi.cpp) | Recursive Tower of Hanoi for 3 disks; prints all 2ⁿ − 1 moves. |
| [adjacency_matrix.cpp](DSA/adjacency_matrix.cpp) | Builds and prints the adjacency matrix of an undirected graph whose vertices are labelled `A`, `B`, `C`, … |
| [sort_bubble.cpp](DSA/sort_bubble.cpp) | Bubble sort, O(n²). |
| [sort_selection.cpp](DSA/sort_selection.cpp) | Selection sort, O(n²). |
| [sort_insertion.cpp](DSA/sort_insertion.cpp) | Insertion sort, O(n²) worst case, O(n) on sorted input. |
| [sort_merge.cpp](DSA/sort_merge.cpp) | Merge sort, O(n log n) time with O(n) extra space. |
| [sort_quick.cpp](DSA/sort_quick.cpp) | Quick sort with Lomuto partition, O(n log n) on average and O(n²) in the worst case. |

## Build and run

You need a GCC toolchain, because the programs include `<bits/stdc++.h>`. On macOS, use Homebrew's `g++-<version>`, since Apple clang does not ship this header.

```bash
g++ -std=c++17 -O2 DSA/sort_merge.cpp -o sort_merge
echo "5  4 1 5 2 3" | ./sort_merge
```

The linked-list, stack and queue programs are interactive and read menu choices from standard input. Of the OOP files, `01` and `02` contain two programs each and `04` is entirely commented out; all the other files build as they are.

## Author

Ratul Hasan · [ratulhasan.dev](https://ratulhasan.dev)
