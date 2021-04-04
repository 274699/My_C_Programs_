#include<stdio.h>
typedef struct complex_t
{
    float real;
    float imaginary;
}complex_t;              // structure complex_t with two variables real and imaginary.

complex_t add(complex_t a, complex_t b);  // definition of function

int main()
{
    complex_t a,b,result;

    printf("Enter the complex numbers a and b : ");
    scanf(" %f %f",&a.real,&a.imaginary);
    scanf("%f %f",&b.real,&b.imaginary);
    result = add(a, b);
    printf("%f + %f i",result.real, result.imaginary);   
}
complex_t add(complex_t a, complex_t b)   //
{
     complex_t c;

    c.real = a.real +b.real;
    c.imaginary = a.imaginary +b.imaginary ;
    return(c);
}