 
/* Call by Value
 * 
 * In call by value, original value can not be changed or modified.
 * In call by value, when you passed value to the function it is locally stored
 * by the function parameter in stack memory location. If you change the value
 * of function parameter, it is changed for the current function only but it not
 * change the value of variable inside the caller method such as main(). */

/* library input */
#include <stdio.h>

/* function header */
void call_byVal(int a, int b, int c)
{
    /* local variable(s) definition */
    int temp;
    
    /* swapping values between a and b */
    temp = a;
    a = b;
    b = temp;
    /* decrease value of c */
    c -= 200;
}