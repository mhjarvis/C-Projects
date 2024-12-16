## Polymorphism

Polymorphism is many forms for the same concept. One example is found in overloading functions:

```c++
int addNumbers(int a, int b) { return a + b };
double addNumbers(double a, double b) {return a + b};

```

## Pointers

A pointer is a variable whose value is a address. That address can contain another variable or a function. Pointers are how polymorphism works.

- To use the data that the pointer is pointing to, you must know its type.
- Always initialize pointers otherwise they will contain garbage data.
- There will be a type error if you try to store the wrong type in a pointer (e.g. trying to store double in int).

Use Cases:

-

## Declaring, Assigning, and Accessing Pointers

Syntax:
`variable_type *pointer_name {nullptr};`

```c++
int *int_ptr {};
double *double_ptr {nullptr};           // initialize to point nowhere
char* char_ptr {nullptr};               // another way to initialize pointers
int *int_ptr {0};                       // initialize to null as well

double high_temp {100.7};
double *temp_ptr = &high_temp;          // initialize with reference/address
                                        // of high_temp

cout << *temp_ptr                       // access value pointer is pointing to
cout << &temp_ptr                       // access address of pointer
cout << temp_ptr                        // the value of temp_ptr
cout << sizeof temp_ptr                 // get size in bytes of pointer

temp_ptr = 0;                           // make pointer point nowhere
```

### Dereferencing a Pointer

Accessing the data we are pointing to is called dereferencing a pointer. This is done using the `*`.

```c++
int score {100};
int score2 {300};
int *score_ptr {&score};                // point pointer to address of score

cout << *score_ptr                      // show value in address (100)

*score_ptr = 200;
cout << *score_ptr                      // 200
cout << score                           // 200
*score_ptr = &score2;                   // also works

// doing the same as above using vectors
vector<string> stooges {"larry", "moe", "curly"};
vector<string> *p = &stooges;

cout << (*p).at(0)                      // print first item in vector
```

### Dynamic Memory Allocation

```cpp
int *int_ptr {nullptr};                 // initialize pointer to null
int_ptr = new int;                      // allocate an integer on the heap
cout << int_ptr                         // pointer now has a address reserved
cout << *int_ptr                        // garbage until initialized

delete int_ptr;                         // free the allocated storage space

int *array_ptr (nullptr);
array_ptr = new int[size];              // add array and allocate storage
delete [] array_ptr;                    // free allocated space
```

### The Relationship Between Arrays and Pointers

```c++
int scores [] {100, 75, 50};
int *p {scores};
cout << scores                          // address of scores
cout << *scores                         // value of first element
cout << p                               // address of scores
cout << *p                              // value of first element

cout << p[1]                            // 2nd value of array
cout << (p + 1)                         // address of 2nd element
cout << *(p + 1)                        // value at 2nd element
```

### Pointer Arithmetic

Pointer arithmetic only makes sense with raw arrays.

```c++
p;




```
