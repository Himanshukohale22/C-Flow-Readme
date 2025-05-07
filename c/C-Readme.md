# Basic in C

```

// e = decimal after four digit

int 	2 or 4 bytes 	Stores whole numbers, without decimals 	1
float 	4 bytes 	    Stores fractional numbers, containing one or more decimals. Sufficient for storing 6-7 decimal digits 	1.99
double 	8 bytes 	    Stores fractional numbers, containing one or more decimals. Sufficient for storing 15 decimal digits 	1.99
char 	1 byte 	        Stores a single character/letter/number, or ASCII values 	'A'


%d or %i 	int 	
%f or %F 	float 	
%lf 	    double 	
%c 	        char 	
%s 	        Used for strings 

memory size 

int 	2 or 4 bytes
float 	4 bytes
double 	8 bytes
char 	1 byte

sizeof() - function of stdio.h lib is for getting size of data types.
we also can get size of array/string

array -     int numbers[5] = {10, 20, 30, 40, 50};
string -    char name[] = "John";
arrays of string -
2D array

    char fruits[4][20] = {
        "Apple",
        "Banana",
        "Mango",
        "Orange"
    };

using array of string 
using pointer 

    const char *colors[] = { "Red", "Green", "Blue", "Yellow" };

To get the right result, you need to know how type conversion works.
There are two types of conversion in C:
Sometimes, you have to convert the value of one data type to another type.
This is known as type conversion.

Implicit Conversion (automatically) - Implicit conversion is done automatically by the compiler when you assign a value of one type to another.
Explicit Conversion (manually) -    Explicit conversion is done manually by placing the type in parentheses () in front of the value.


Constant :- If you don't want others (or yourself) to change existing variable values, 
            you can use the const keyword.

const int myNum = 15; // this variable will not be changed 

C-Operators :- Operators are used to perform operations on variables and values.
Types:-
    Arithmetic operators
    Assignment operators
    Comparison operators
    Logical operators
    Bitwise operators

Arithematic Operator:-
+ 	Addition 	    Adds together two values 	            x + y 	
- 	Subtraction 	Subtracts one value from another 	    x - y 	
* 	Multi 	        Multiplies two values 	                x * y 	
/ 	Division 	    Divides one value by another 	        x / y 	
% 	Modulus 	    Returns the division remainder 	        x % y 	
++ 	Increment 	    Increases the value of a variable by 1 	++x 	
-- 	Decrement 	    Decreases the value of a variable by 1 	--x

Assignment Operator:-
= 	x = 5 	x = 5 	        - equal ot
+= 	x += 3 	x = x + 3 	    - add x+3
-= 	x -= 3 	x = x - 3 	    - sub
*= 	x *= 3 	x = x * 3 	    - mul
/= 	x /= 3 	x = x / 3 	    - div
%= 	x %= 3 	x = x % 3 	    -remainder
&= 	x &= 3 	x = x & 3 	    - AND in binary
|= 	x |= 3 	x = x | 3 	    - OR in binary
^= 	x ^= 3 	x = x ^ 3 	    - XOR in binary
>>= 	x >>= 3 	x = x >> 3 	    - greter than
<<= 	x <<= 3 	x = x << 3

Logical operator:-
&&  	AND 	x < 5 &&  x < 10 	Returns 1 if both statements are true 	
||  	OR 	    x < 5 || x < 4 	    Returns 1 if one of the statements is true 	
! 	    NOT 	!(x < 5 && x < 10) 	Reverse the result, returns 0 if the result is 1 (negation)


Boolean:

Boolean was introduced in C99
true/false = 1/0 returns

A boolean variable is declared with the bool keyword and can take the values true or false:
bool isProgrammingFun = true;
bool isFishTasty = false; 


```

# loops 

## if-else

```
if_else
if 
else
else if 
short hand if 

conditions and if statements 

    Less than: a < b
    Less than or equal to: a <= b
    Greater than: a > b
    Greater than or equal to: a >= b
    Equal to a == b
    Not Equal to: a != b

if (condition){
    //code
}

if (condition){
    //code
}else{
    //code
}

if (condition1){
    //code
}else if(condition2){
    //code 
}else{
    //code
}

short-hand if-else
 variable = (condition) ? expressionTrue : expressionFalse;

int time = 20;
if (time < 18) {
  printf("Good day.");
} else {
  printf("Good evening.");
} 

int time = 20;
(time < 18) ? printf("Good day.") : printf("Good evening."); 


```

## switch statements

```
Instead of writing many if..else statements, you can use the switch statement.
The switch statement selects one of many code blocks to be executed:

switch (expression) {
  case x:
    // code block
    break;
  case y:
    // code block
    break;
  default:
    // code block
}

This is how it works:
    The switch expression is evaluated once
    The value of the expression is compared with the values of each case
    If there is a match, the associated block of code is executed
    The break statement breaks out of the switch block and stops the execution
    The default statement is optional, and specifies some code to run if there is no case match

eg :

int day = 4;

switch (day) {
  case 1:
    printf("Monday");
    break;
  case 2:
    printf("Tuesday");
    break;
  case 3:
    printf("Wednesday");
    break;
  case 4:
    printf("Thursday");
    break;
  case 5:
    printf("Friday");
    break;
  case 6:
    printf("Saturday");
    break;
  case 7:
    printf("Sunday");
    break;
}

result is Thursday


When C reaches a break keyword, it breaks out of the switch block.
The default keyword specifies some code to run if there is no case match:

break and default 

The default keyword specifies some code to run if there is no case match:

int day = 4;

switch (day) {
  case 6:
    printf("Today is Saturday");
    break;
  case 7:
    printf("Today is Sunday");
    break;
  default:
    printf("Looking forward to the Weekend");
}

```
##  while loop 

```
while(condition){
    //code
}

do/while

do {

} while (condition)

eg: 

int i = 0;

do {
  printf("%d\n", i);
  i++;
}
while (i < 5);



```

## for-loop

```
for loop:-

for (expression 1; expression 2; expression 3) {
  // code block to be executed
}

//Expression 1 is executed (one time) before the execution of the code block.
//Expression 2 defines the condition for executing the code block.
//Expression 3 is executed (every time) after the code block has been executed.

for (int i = 0; i < 5; i++) {
  printf("%d\n", i);
}

Nested loop:-It is also possible to place a loop inside another loop. This is called a nested loop.
i
nt i, j;

// Outer loop
for (i = 1; i <= 2; ++i) {
  printf("Outer: %d\n", i);  // Executes 2 times

  // Inner loop
  for (j = 1; j <= 3; ++j) {
    printf(" Inner: %d\n", j);  // Executes 6 times (2 * 3)
  }
}


```

## Break-continue
### Break-continue for for-loop
```
Break: You have already seen the break statement used in an earlier chapter of this tutorial. 
It was used to "jump out" of a switch statement.
The break statement can also be used to jump out of a loop.

eg1:
int i;

for (i = 0; i < 10; i++) {
  if (i == 4) {
    break;
  }
  printf("%d\n", i);
}
output: 0 1 2 3

continue: The continue statement breaks one iteration (in the loop), 
if a specified condition occurs, and continues with the next iteration in the loop.

int i;

for (i = 0; i < 10; i++) {
  if (i == 4) {
    continue;
  }
  printf("%d\n", i);
}

output: 0 1 2 3 4 5 6 7 8 9 
```

### Break-continue for while-loop

```
int i = 0;

while (i < 10) {
  if (i == 4) {
    break;
  }
  printf("%d\n", i);
  i++;
} 

//////////////////////// 


int i = 0;

while (i < 10) {
  if (i == 4) {
    i++;
    continue;
  }
  printf("%d\n", i);
  i++;
} 

```

# arrays

```
 int myNumbers[] = {25, 50, 75, 100};

 2D array (Multidimentional array)

 int matrix[][] = {{1, 4, 2},{3, 6, 8}};


```

# String

```
Strings are used for storing text/characters.
Unlike many other programming languages, C does not have a String type to easily create string variables.
Instead, you must use the char type and create an array of characters to make a string in C:

char greetings[] = "Hello World!";
printf("%s", greetings);

In the examples above, we used a "string literal" to create a string variable. 
This is the easiest way to create a string in C.
You should also note that you can create a string with a set of characters.
This example will produce the same result as the example in the beginning of this page:

char greetings[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '!', '\0'};
printf("%s", greetings);

Strings - Special Characters
\' 	' 	Single quote
\" 	" 	Double quote
\\ 	\ 	Backslash

\n 	New Line 	
\t 	Tab 	
\0 	Null

 #include <string.h>
 strlen()

 In the Strings chapter, we used sizeof to get the size of a string/array. 
 Note that sizeof and strlen behaves differently, as sizeof also includes the \0 character when counting:

Concatenate Strings

char str1[20] = "Hello ";
char str2[] = "World!";

// Concatenate str2 to str1 (result is stored in str1)
strcat(str1, str2);

// Print str1
printf("%s", str1);

Copy Strings

char str1[20] = "Hello World!";
char str2[20];

// Copy str1 to str2
strcpy(str2, str1);

// Print str2
printf("%s", str2);

Compare Strings

char str1[] = "Hello";
char str2[] = "Hello";
char str3[] = "Hi";

// Compare str1 and str2, and print the result
printf("%d\n", strcmp(str1, str2));  // Returns 0 (the strings are equal)

// Compare str1 and str3, and print the result
printf("%d\n", strcmp(str1, str3));  // Returns -4 (the strings are not equal)



```

# C User Input

```
You have already learned that printf() is used to output values in C.

To get user input, you can use the scanf() function:
```

# C Memory Address

```
When a variable is created in C, a memory address is assigned to the variable.
The memory address is the location of where the variable is stored on the computer.
When we assign a value to the variable, it is stored in this memory address.
To access it, use the reference operator (&), and the result represents where the variable is stored:

int myAge = 43;
printf("%p", &myAge); // Outputs 0x7ffe5367e044

You should also note that &myAge is often called a "pointer". 
A pointer basically stores the memory address of a variable as its value. 
To print pointer values, we use the %p format specifier.


```

# C pointers

```
we can get the memory address of a variable with the reference operator &

A pointer is a variable that stores the memory address of another variable as its value. 

int myAge = 43;     // An int variable
int* ptr = &myAge;  // A pointer variable, with the name ptr, that stores the address of myAge



// Output the value of myAge (43)
printf("%d\n", myAge);

// Output the memory address of myAge (0x7ffe5367e044)
printf("%p\n", &myAge);

// Output the memory address of myAge with the pointer (0x7ffe5367e044)
printf("%p\n", ptr);

Create a pointer variable with the name ptr, that points to an int variable (myAge). 
Note that the type of the pointer has to match the type of the variable you're working with (int in our example).
Use the & operator to store the memory address of the myAge variable, and assign it to the pointer.
Now, ptr holds the value of myAge's memory address.


Dereference:-
In the example above, we used the pointer variable to get the memory address of a variable 
(used together with the & reference operator).
You can also get the value of the variable the pointer points to, by using the * operator (the dereference operator):


int myAge = 43;     // Variable declaration
int* ptr = &myAge;  // Pointer declaration

// Reference: Output the memory address of myAge with the pointer (0x7ffe5367e044)
printf("%p\n", ptr);

// Dereference: Output the value of myAge with the pointer (43)
printf("%d\n", *ptr);


Good To Know: There are two ways to declare pointer variables in C:
int* myNum;
int *myNum;


```

# C Pointers and Arrays

```
int myNumbers[4] = {25, 50, 75, 100};
int i;

for (i = 0; i < 4; i++) {
  printf("%d\n", myNumbers[i]);   // will give the numbers
  printf("%p\n", &myNumbers[i]);  // address 

}


int myNumbers[4] = {25, 50, 75, 100};

// Get the memory address of the myNumbers array
printf("%p\n", myNumbers);

// Get the memory address of the first array element
printf("%p\n", &myNumbers[0]);


 Since myNumbers is a pointer to the first element in myNumbers, you can use the * operator to access it:

int myNumbers[4] = {25, 50, 75, 100};

// Get the value of the first element in myNumbers
printf("%d", *myNumbers);
```

# function in C

```
A function consist of two parts:

    Declaration: the function's name, return type, and parameters (if any)
    Definition: the body of the function (code to be executed)
void myFunction() { // declaration
  // the body of the function (definition)
}

s
parameters and arguments

when we set any vaiable in function it's parameter 
when we call function with set variable it's argument

void MyFunction(char name[]){
  printf("%c\n",name);
}

int main(){
  MyFunction(Himanshu);
  return 0;
}

Variable scope 
  * local variable
  * global variable


Recursion in C

Recursion is the technique of making a function call itself. 
This technique provides a way to break complicated problems 
down into simple problems which are easier to solve.


```

### note basic : -

The void keyword, used in the previous examples, indicates that the function should not return a value. 
If you want the function to return a value, you can use a data type (such as int or float, etc.) instead of void, 
and use the return keyword inside the function:

# Files in c

```


```
# Structure in C 

```
Structures (also called structs) are a way to group several related variables into one place. 
Each variable in the structure is known as a member of the structure.
Unlike an array, a structure can contain many different data types (int, float, char, etc.)


// Create a structure called myStructure
struct myStructure {
  int myNum;
  char myLetter;
};

int main() {
  // Create a structure variable of myStructure called s1
  struct myStructure s1;

  // Assign values to members of s1
  s1.myNum = 13;
  s1.myLetter = 'B';

  // Print values
  printf("My number: %d\n", s1.myNum);
  printf("My letter: %c\n", s1.myLetter);

  return 0;
} 



string doest not act same as other variables in struct it need some special treatment
strcpy

struct myStructure {
  int myNum;
  char myLetter;
  char myString[30]; // String
};

int main() {
  struct myStructure s1;

  // Assign a value to the string using the strcpy function
  strcpy(s1.myString, "Some text");

  // Print the value
  printf("My string: %s", s1.myString);

  return 0;
} 

```

# Enums in C

```
An enum is a special type that represents a group of constants (unchangeable values).
Enum is short for "enumerations", which means "specifically listed".

enum Level {
  LOW,
  MEDIUM,
  HIGH
};
  
int main() {
  // Create an enum variable and assign a value to it
  enum Level myVar = MEDIUM;
 
  // Print the enum variable
  printf("%d", myVar);
  
  return 0;
}

```

# C Memory

```

```

