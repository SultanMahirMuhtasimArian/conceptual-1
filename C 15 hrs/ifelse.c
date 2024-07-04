#include <stdio.h>
#include <math.h>
int main() {

    printf("Name: Sultan Mahir Muhtasim Arian \nID:2202105") ;

    float a,b,c ;

    printf( "Enter the value of side a: ")  ;
    scanf( "%f" , &a) ;

     printf( "Enter the value of side b: ")  ;
    scanf( "%f" , &b) ;

     printf( "Enter the value of side a: ")  ;
    scanf( "%f" , &c) ;


    float s=(a+b+c)/2  ;

    float Area = sqrt (s*(s-a)*(s-b)*(s-c)) ;

    printf ("The area of the triangle is: %.4f ", Area);








    return 0; 
}