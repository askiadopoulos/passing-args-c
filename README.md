# passing-args-c
Passing Arguments to Functions in C

Description: This is a simple project written in C language that demonstrates how we can pass arguments to a function using different methods such as Call by Value and Call by Reference.

If a function takes any arguments, we must declare variables that accept the values we want to pass as arguments. These variables are called the formal parameters of the function.

C language has two methods to pass value or data to a function:
 - Call by Value
 - Call by Reference

Call by Value meaning: In call by value, original value can not be changed or modified. For example, when you passed value to the function, it is locally stored by the function parameter in stack memory location. If you change the value of function parameter, it is changed for the current function only but it not change the value of variable inside the caller method such as main().

Call by Reference meaning: In call by reference, original value is changed or modified because we pass reference (address). Here, address of the value is passed in the function, so actual and formal arguments shares the same address space. Hence, any value changed inside the function, is reflected inside as well as outside the function.
