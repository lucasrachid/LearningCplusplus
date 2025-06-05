#include <iostream>
#include <string>
using namespace std;

int main()
{
    int valueInteger = 10;

    // To decide which one, float or double to use, it will depends that precision that you need. 
    float valueFloat = 10.0;
    double valueDouble = 10.333333;

    cout << "Integer Value: " << to_string(valueInteger) << endl;
    cout << "Float Value: " << to_string(valueFloat) << endl;
    cout << "Double Value: " << to_string(valueDouble) << endl;

    char character = 'A';
    string manyCharacters = "Raxas";

    bool isValid = true; // false

    return 0;
}

/*
    1. Fundamental (Built-in) Types
    Boolean:

    bool – true or false

    Integer Types:

    int – standard integer

    short – smaller than int

    long – larger than int

    long long – even larger

    unsigned int – only positive values

    unsigned short, unsigned long, unsigned long long – unsigned versions

    Floating-Point Types:

    float – single precision (approx. 7 decimal digits)

    double – double precision (approx. 15 decimal digits)

    long double – extended precision (compiler-dependent)

    Character Types:

    char – single character (1 byte)

    wchar_t – wide character

    char16_t – UTF-16 character

    char32_t – UTF-32 character

    Void:

    void – absence of type (used for functions that return nothing or generic pointers)

    2. Derived Types
    Pointers – store memory addresses (int*, float*)

    References – aliases for variables (int&)

    Arrays – fixed-size sequences of elements (int arr[5])

    Functions – function types and function pointers

    3. User-Defined Types
    Structures (struct) – group variables under one type

    Classes (class) – like struct but support encapsulation, OOP

    Unions (union) – multiple variables sharing the same memory space

    Enumerations (enum) – named constants (enum Color { Red, Green, Blue };)

    4. Type Modifiers
    signed – explicitly signed (usually default for int)

    unsigned – non-negative values only

    short / long – adjust size range of numeric types

    const – makes a variable read-only

    static – retains value between function calls or limits scope

    volatile – prevents compiler optimizations (used for hardware/multithreading)

    mutable – allows modification of members even if the object is const
*/