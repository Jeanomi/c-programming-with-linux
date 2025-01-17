#include <stdio.h>
#include <stdlib.h>// Be sure to include any other library you may need...

char* allocateString(int); // Write your allocateString() prototype here

int main(void) {
    int lengthLight, lengthDark;
    char *strLight, *strDark;
    
    scanf("%d %d", &lengthLight, &lengthDark); 
    strLight = allocateString(lengthLight);// Write a line of code here that calls the function allocateString(). 
    
    /* The goal is to reserve space for the light setting label, therefore you 
       need to pass the number lengthLight to the function allocateString()
       Store the return value of this function call in the variable strLight. */
     
    strDark = allocateString(lengthDark);// Write a line of code here that calls the function allocateString().
    
    /* This time the goal is to reserve space in memory for the dark setting label.
       Store the return value of the function call in the variable strDark. */
   
    scanf("%s", strLight);
    scanf("%s", strDark);
    printf("Local settings: %s - %s\n", strLight, strDark);
    free(strLight);// Write a line of code here to free the memory allocated for strLight
    
    free(strDark);// Write a line of code here to free the memory allocated for strDark
    
	
    return 0;
}

char * allocateString(int numChars){
    char * ptr;// declare your variable(s) here
    
    ptr = (char *) malloc(numChars * sizeof(char));// Write a line of code here that performs the memory allocation.
    /* You should allocate space in memory for the number of characters specified 
       via the input parameter to the function and the null terminator and store the 
       address of the allocated memory in a pointer named ptr. In order to receive credit 
       for your solution you need to use sizeof(char) in this line, even if sizeof(char) 
       returns 1. */
    
    return ptr;
}

