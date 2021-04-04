#include<stdio.h>
int main()
{
    int number = 5, num = 3;
 /* Suppose the address of number is 100 */
int *ptr = &number, *ptr2 = &num;
int newAddress; //= ptr + 3;
int *new = *ptr - *ptr2;
//printf("%d",ptr);
printf("%d",*new);
}