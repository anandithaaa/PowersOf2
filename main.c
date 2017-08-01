// This program prints the first 32 powers of 2 in both decimal and binary.
// author: ananditha raghunath

//include header file standard io
#include <stdio.h>
//declaring function to be specified later
int decimalToBinary(int n);

int main (void) {
    int power = 1;
    //this is the counter
    int i = 0;
    
    //handles special case of i = 0
    if (i == 0) {
     printf("%12d %12d   1", i, power); 
     printf("\n");
    }
    
    //handles all other cases
    for (i = 1 ;  i < 33; i++) {
        power = power *  2;
        printf("%12d %12d   ", i,  power);
        //calls function decimalToBinary
        printf("%d\n", decimalToBinary(power));
    }

}
//This function converts decimal number "quotient" into a binary representation
// that is stored in an array.
//The funtion prints the array in reverse order
//always returns 0
int decimalToBinary(int quotient) {
//BinaryNumber holds the binary representation
//i is a counter, j is another counter.
int numberInBinary[60];
int i = 1;
int j;
if (quotient == 1) {
    printf("1");
}
else {
	//while the quotient isn't 0, modulate the quotient by 2 and store result in array
    while( quotient != 0){
         numberInBinary[i++]= quotient % 2;
         quotient = quotient / 2;
    }
    //print the array in reverse
    for(j = i - 1; j > 1; j--) {
         printf("%d",numberInBinary[j]);
    }
}
return 0;
}
