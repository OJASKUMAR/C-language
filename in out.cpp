#include <stdio.h>      // Including header file to run printf() function.
int main()
{
    float f; 
	char chr;
    printf("Enter a number and a character:\n ");
     // %f format string is used in case of floats
    scanf("%f%c",&f,&chr);
    printf("Value = %f\n", f);
    
       
    printf("You entered %c.\n",chr); 
    printf("ASCII value of %c is %d.\n", chr, chr);  
	return 0;
}

