#include<stdio.h>
int findhcf(int a, int b) { 
    if (b==0) //this is euclid's method
    return a ; 
    else 
    return findhcf(b, a % b);
}
int main () {
    int num1, num2 ;
    printf ("enter two numbees; "); 
    scanf ("%d %d", &num1, &num2) ;
    printf ("HCF of %d and %d is %d\n", num1, num2, findhcf(num1, num2)) ;
 
    return 0;
}