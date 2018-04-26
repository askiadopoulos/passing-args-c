 
/* Call by Reference
 * 
 * In call by reference, original value is changed or modified because we pass
 * reference (address). Here, address of the value is passed in the function,
 * so actual and formal arguments shares the same address space.
 * Hence, any value changed inside the function, is reflected inside as well as
 * outside the function. */

/* library input */
#include <stdio.h>

/* function header */
void call_byRef(int *a, int *b, int *c)
{
    /* local variable(s) definition */
    int temp;
    
    /* swapping values between a and b */
    temp = *a;
    *a = *b;
    *b = temp;
    /* decrease value of c */
    *c -= 200;
}
