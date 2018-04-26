/* 
 * File:   main.c
 * Author: a.skiadopoulos
 *
 * Created on 23 Φεβρουαρίου 2018, 11:19 πμ
 */ 
  
/* Call by Value and Call by Reference in C language
 * 
 * If a function take any arguments, it must declare variables that accept the
 * values as a arguments. These variables are called the formal parameters of
 * the function.
 * There are two ways to pass value or data to function which is given below;
 * -Call by Value
 * -Call by Reference */

/* function(s) declaration */
void call_byVal(int a, int b, int c);
void call_byRef(int *a, int *b, int *c);

/* library input */
#include <stdio.h>
#include <conio.h>

/* main method */
int main() {
    //int argc, char** argv
    /* local variable(s) definition */
    int num1 = 100, num2 = 200, num3 = 500;
    char ch;
    
    /* printout header */
    printf("\n --- Functions Call by Value & Call by Reference ---\n\n");
    
    /* Call by Value */
    printf("\n- Values before Call by Value: {%d, %d, %d}\n", num1, num2, num3);
    call_byVal(num1, num2, num3);
    printf("\n- Values after Call by Value: {%d, %d, %d}\n", num1, num2, num3);
    
    /* Call by Reference */
    printf("\n- Values before Call by Reference: {%d, %d, %d}\n", num1, num2, num3);
    call_byRef(&num1, &num2, &num3);
    printf("\n- Values after Call by Reference: {%d, %d, %d}\n", num1, num2, num3);

    printf("\n\nNOTICE: Function with different calling methods tries to SWAP values between\n"
            "        the first two numbers as well as REDUCE the value of the third number.\n");
    
    printf("\n\n");
    /* loop used for checking a specific ASCII character */
    do
    {
       printf("\nPress [Esc] key to exit...");
       ch = getch();
    } while(ch != 27);//27 is the ASCII code for ESC key
    
    printf("\n\n");
    return 0;
}
/*
 * function getch();
 * Is used to catch a single character from the keyboard (not showed on screen)
 * and returns the corresponding ASCII value (typically integer value).
 */
