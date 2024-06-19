#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <unistd.h>

/* more headers goes there */
/* betty style doc for function main goes there */
/**
*main - Entry point
*
*Return: Always 0 (Success)
*/
int main(void) 
{
    const char message[] = "_putchar\n";
    write(1, message, sizeof(message) - 1); 
    
    // sizeof(message) includes the null terminator, so we subtract 1
    
    return (0);
}