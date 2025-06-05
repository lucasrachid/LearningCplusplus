#include <iostream>
#include <string>

using namespace std;

int main()
{
    // Concatenete things

    int age = 20;

    cout << "Your age is: " + to_string(age) << endl;
    cout << "Your age is: " << age << endl;

    string name;

    cout << "Your name: ";
    
    // Use Cin with >> operator, to type an input
    cin >> name;

    cout << "Congragulations " << name;

    return 0;
}

/*
=====================
 C++ Operators Summary
=====================

--- Arithmetic Operators ---
+   : Addition (a + b)
-   : Subtraction (a - b)
*   : Multiplication (a * b)
/   : Division (a / b)
%   : Modulus (a % b)

--- Assignment Operators ---
=    : Assign (a = b)
+=   : Add and assign (a += b)
-=   : Subtract and assign (a -= b)
*=   : Multiply and assign (a *= b)
/=   : Divide and assign (a /= b)
%=   : Modulus and assign (a %= b)
<<=  : Left shift and assign (a <<= b)
>>=  : Right shift and assign (a >>= b)
&=   : Bitwise AND and assign (a &= b)
^=   : Bitwise XOR and assign (a ^= b)
|=   : Bitwise OR and assign (a |= b)

--- Increment / Decrement ---
++   : Increment (++a or a++)
--   : Decrement (--a or a--)

--- Comparison Operators ---
==   : Equal to (a == b)
!=   : Not equal to (a != b)
<    : Less than (a < b)
>    : Greater than (a > b)
<=   : Less than or equal to (a <= b)
>=   : Greater than or equal to (a >= b)

--- Logical Operators ---
&&   : Logical AND (a && b)
||   : Logical OR (a || b)
!    : Logical NOT (!a)

--- Bitwise Operators ---
&    : Bitwise AND (a & b)
|    : Bitwise OR (a | b)
^    : Bitwise XOR (a ^ b)
~    : Bitwise NOT (~a)
<<   : Left shift (a << b)
>>   : Right shift (a >> b)

--- Ternary Operator ---
?:   : Ternary conditional (cond ? a : b)

--- Pointer / Address Operators ---
*    : Dereference (*ptr)
&    : Address-of (&var)

--- Member Access Operators ---
.     : Access member (obj.x)
->    : Access member via pointer (ptr->x)
::*   : Pointer to member (&Class::x)
.*    : Access member via instance pointer (obj.*ptr)
->*   : Access member via pointer to member (ptr->*ptr)

--- Miscellaneous Operators ---
sizeof   : Size of type or object (sizeof(int))
typeid   : Type info (typeid(obj))
new      : Allocate memory (new int)
delete   : Free memory (delete ptr)
new[]    : Allocate array (new int[10])
delete[] : Free array (delete[] ptr)
()       : Function call (func())
[]       : Array subscript (arr[0])
,        : Comma (sequence of expressions) (a = (b = 3, b+2))

--- Non-overloadable Operators ---
::      : Scope resolution
.       : Member access
.*      : Pointer-to-member access
?:      : Ternary
sizeof  : Sizeof
typeid  : Type info
alignof : Alignment requirement

*/