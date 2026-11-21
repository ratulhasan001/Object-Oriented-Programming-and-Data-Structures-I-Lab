# Object-Oriented Programming and Data Structures I Lab

C++ programs from two sessional (lab) courses taken in 2023 for the B.Sc. in Computer Science and Engineering at BAUET: Object-Oriented Programming ([`oop/`](oop)) and Data Structures and Algorithms I ([`dsa/`](dsa)). The OOP folder has one file per weekly lab session. Each file is named with the session number and its main topic (`NN_topic.cpp`), and the sessions cover classes, constructors, friend functions, inheritance, operator overloading, templates and exception handling. The DSA folder implements the basic data structures (linked lists, stack, queue, binary search tree) and the classic sorting algorithms by hand, and also keeps the weekly lab-session and practice files.

## Contents

### [oop/](oop) – Object-Oriented Programming lab

Many session files hold several short exercises one after another. Earlier exercises are usually commented out, and only the last one is active. The table lists the exercise that compiles, followed by the commented-out ones.

| File | Session date | Topics and exercises |
|---|---|---|
| [01_classes_and_objects.cpp](oop/01_classes_and_objects.cpp) | 13 Jul 2023 | Classes and objects; member functions defined inside and outside the class (`item`, `find_mx_min`). *Contains two `main` functions, so split the file before compiling.* |
| [02_student_and_employee_classes.cpp](oop/02_student_and_employee_classes.cpp) | 20 Jul 2023 | `Student` objects with input and print methods; `Employee` salary calculation with `getInfo` / `AddSal` / `addWork`. *Contains two `main` functions, so split the file before compiling.* |
| [03_constructors.cpp](oop/03_constructors.cpp) | 27 Jul 2023 | Constructors: parameterised, overloaded and default (`Sum`, `Rectangle`, `AddAmount`, commented out); active: a `find_large` class that prints the larger of two numbers. |
| [04_friend_functions.cpp](oop/04_friend_functions.cpp) | 3 Aug 2023 | Friend functions: complex-number addition, mean of two private members, minimum of two values. *All exercises are commented out, so there is nothing to run.* |
| [05_arrays_of_objects_and_single_inheritance.cpp](oop/05_arrays_of_objects_and_single_inheritance.cpp) | 10 Aug 2023 | Arrays of objects, time addition (h/m/s), single inheritance (`Rectangle` → `Block`, commented out); active: time addition through a friend function. |
| [06_copy_constructors.cpp](oop/06_copy_constructors.cpp) | 17 Aug 2023 | Copy constructors, `Rectangle` area and perimeter, `Library` book list (commented out); active: a `BankAccount` with a parameterised and a copy constructor, deposit and withdraw. |
| [07_inheritance_types.cpp](oop/07_inheritance_types.cpp) | 24 Aug 2023 | Multilevel, hierarchical and multiple inheritance (`shape`, `Book` → `fiction` / `NonFiction`, commented out); active: `BlueWhale` inheriting from both `Mammals` and `MarineAnimanls`. |
| [08_operator_overloading.cpp](oop/08_operator_overloading.cpp) | 14 Sep 2023 | Operator overloading with member and friend `operator+` / `operator-` (`Cents`, `Complex`). |
| [09_function_templates.cpp](oop/09_function_templates.cpp) | 21 Sep 2023 | Function templates with one and with several type parameters; prefix and postfix `operator++` overloading (commented out). |
| [10_virtual_functions.cpp](oop/10_virtual_functions.cpp) | 5 Oct 2023 | Ambiguity resolution in multiple inheritance, function overriding, virtual base classes, virtual functions (commented out); active: a `Vehicle` → `Car` / `Bike` → `Audi` / `Ford` / `Bajaj` / `TVS` hierarchy with an overridden virtual `display()`. |
| [11_exception_handling.cpp](oop/11_exception_handling.cpp) | 12 Oct 2023 | Exception handling with `try` / `throw` / `catch`, including typed catches and `catch(...)`; STL `vector` operations (commented out). |

### [dsa/](dsa) – Data Structures and Algorithms I lab

| File | What it does |
|---|---|
| [singly_linked_list.cpp](dsa/singly_linked_list.cpp) | Singly linked list with a menu: insert at head, tail or position; delete by value; print; count. Insertion at head or tail is O(1); search and delete are O(n). |
| [doubly_linked_list.cpp](dsa/doubly_linked_list.cpp) | Doubly linked list with a menu: insert at head, tail or after a value; delete head, tail or a value; print with prev/next pointers; count. |
| [circular_linked_list.cpp](dsa/circular_linked_list.cpp) | Circular singly linked list (tail points back to head) with the same menu operations. |
| [stack.cpp](dsa/stack.cpp) | Bounded stack (capacity 5) built on `std::list`, with overflow and underflow checks. |
| [queue.cpp](dsa/queue.cpp) | Bounded FIFO queue (capacity 5) built on `std::list`, with overflow and underflow checks. |
| [parenthesis_balance.cpp](dsa/parenthesis_balance.cpp) | Balanced-bracket check for `()[]{}` using a stack, O(n). |
| [postfix_evaluation.cpp](dsa/postfix_evaluation.cpp) | Evaluates a postfix expression with single-digit operands and `+ - * /`, using a stack. |
| [tower_of_hanoi.cpp](dsa/tower_of_hanoi.cpp) | Recursive Tower of Hanoi for 3 disks; prints all 2ⁿ − 1 moves. |
| [adjacency_matrix.cpp](dsa/adjacency_matrix.cpp) | Builds and prints the adjacency matrix of an undirected graph whose vertices are labelled `A`, `B`, `C`, … |
| [sort_bubble.cpp](dsa/sort_bubble.cpp) | Bubble sort, O(n²). |
| [sort_selection.cpp](dsa/sort_selection.cpp) | Selection sort, O(n²). |
| [sort_insertion.cpp](dsa/sort_insertion.cpp) | Insertion sort, O(n²) worst case, O(n) on sorted input. |
| [sort_merge.cpp](dsa/sort_merge.cpp) | Merge sort, O(n log n) time with O(n) extra space. |
| [sort_quick.cpp](dsa/sort_quick.cpp) | Quick sort with Lomuto partition, O(n log n) on average and O(n²) in the worst case. |
| [binary_search_tree.cpp](dsa/binary_search_tree.cpp) | Binary search tree with recursive insertion and inorder traversal (prints the keys in sorted order). |

#### [dsa/lab-sessions/](dsa/lab-sessions) – weekly session files

These are the files written during individual lab sessions. Sessions 4–6 (the linked lists) are already covered by the topic files above.

| File | What it does |
|---|---|
| [01_array_insert_delete_update.cpp](dsa/lab-sessions/01_array_insert_delete_update.cpp) | Inserts an element at a given position in an array; the deletion and update exercises are commented out. |
| [02_linear_and_binary_search.cpp](dsa/lab-sessions/02_linear_and_binary_search.cpp) | Linear search and binary search over an array, with a helper that sorts the array first. |
| [03_sorting_and_linked_list.cpp](dsa/lab-sessions/03_sorting_and_linked_list.cpp) | Bubble, selection and insertion sort, plus a singly linked list (insert at head, tail or position; delete; print) read from input until `-1`. |
| [07_array_stack_and_postfix.cpp](dsa/lab-sessions/07_array_stack_and_postfix.cpp) | An array-based stack (commented out) and an active postfix-expression evaluator. |
| [11_lab_final_adjacency_matrix.cpp](dsa/lab-sessions/11_lab_final_adjacency_matrix.cpp) | The lab-final topic list as comments, and an adjacency matrix for a graph with lettered vertices. |

#### [dsa/practice/](dsa/practice) – practice files

Scratch files used while preparing; most of their content is earlier versions kept as comments.

| File | What it does |
|---|---|
| [queue_practice.cpp](dsa/practice/queue_practice.cpp) | A circular array queue (commented out) and an active bounded queue built on `std::list`. |
| [stack_queue_postfix_practice.cpp](dsa/practice/stack_queue_postfix_practice.cpp) | Stack and queue classes and Tower of Hanoi (commented out), and an active postfix evaluator. |
| [hanoi_merge_quick_sort_practice.cpp](dsa/practice/hanoi_merge_quick_sort_practice.cpp) | Tower of Hanoi and two merge sort versions (commented out), and an active quick sort demo on a fixed array. |

## Build and run

You need a GCC toolchain, because the programs include `<bits/stdc++.h>`. On macOS, use Homebrew's `g++-<version>`, since Apple clang does not ship this header.

```bash
g++ -std=c++17 -O2 dsa/sort_merge.cpp -o sort_merge
echo "5  4 1 5 2 3" | ./sort_merge
```

The linked-list, stack and queue programs are interactive and read menu choices from standard input. Of the OOP files, `01` and `02` contain two programs each and `04` is entirely commented out; all the other files build as they are.

## Author

Ratul Hasan · [ratulhasan.dev](https://ratulhasan.dev)
