#include <stdio.h>

int main() {

    int a=8;
    float b =7.333; 

    printf( "%8.4f\n",b ) ; 

    //8.4f means , 8 character space, with 4 decimal accuracies, 
    //b is printed 

    printf("%-18.4f this" ,b) ; //first write float then space
    printf("%18.4f this" , b) ; //fist space then float



    return 0; 
}
 
// %c -character
// %d -integer 
// %f -float 
// %l - long
// %lf - double
// %Lf - long double  

//#Escape_Sequence: \n > single character
//composed of 2 or more char. with backslash
