#include<stdio.h>
typedef struct complex_t
{
    float real;
    float imaginary;
}complex_t;              // structure complex_t with two variables real and imaginary.

complex_t add(complex_t a, complex_t b);  
complex_t subtract(complex_t a, complex_t b);
complex_t Mulltiply(complex_t a, complex_t b);
complex_t division(complex_t a, complex_t b);

int main()
{
    complex_t a,b,result1, result2 , result3 , result4;

    printf("Enter the complex numbers a and b : ");

    scanf(" %f %f",&a.real,&a.imaginary);
    scanf("%f %f",&b.real,&b.imaginary);

    result1 = add(a, b);
    result2 = subtract(a, b);
    result3 = Mulltiply(a, b);
    result4 = division(a, b);

    printf(" Addition %f + %f i",result1.real, result1.imaginary);   
    printf("\nSubtraction %f + %f i",result2.real, result2.imaginary);
    printf("\nMultiplication %f + %f i",result3.real, result3.imaginary);
    printf("\nDivision %f + %f i",result4.real, result4.imaginary);
}
complex_t add(complex_t a, complex_t b)   // Addition Function
{
    complex_t c;

    c.real = a.real +b.real;
    c.imaginary = a.imaginary +b.imaginary ;
    return(c);
}

complex_t subtract(complex_t a, complex_t b)   // Subtraction Function
{
     complex_t c;

    c.real = a.real  - b.real;
    c.imaginary = a.imaginary - b.imaginary ;
    return(c);
}

complex_t Mulltiply(complex_t a, complex_t b)   // Multiplication Function
{
     complex_t c;

    c.real = a.real  * b.real;
    c.imaginary = a.imaginary * b.imaginary ;
    return(c);
}

complex_t division(complex_t a, complex_t b)   // Division Function
{
     complex_t c;

    c.real = a.real / b.real;
    c.imaginary = a.imaginary / b.imaginary ;
    return(c);
}