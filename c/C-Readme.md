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
Sometimes, you have to convert the value of one data type to another type. This is known as type conversion.

    Implicit Conversion (automatically) - Implicit conversion is done automatically by the compiler when you assign a value of one type to another.
    Explicit Conversion (manually) -    Explicit conversion is done manually by placing the type in parentheses () in front of the value.


Constant :- If you don't want others (or yourself) to change existing variable values, you can use the const keyword.
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
Break: You have already seen the break statement used in an earlier chapter of this tutorial. It was used to "jump out" of a switch statement.
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

continue: The continue statement breaks one iteration (in the loop), if a specified condition occurs, and continues with the next iteration in the loop.

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

```