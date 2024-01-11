// This 'C' program finds the second largest number in and prints it.
/*
 Example output:
    Enter the array size: 4
    Enter the array elements: 40 41 42 43
 --------------------------------------------
    The second largest element in this array is : 42.
    ! ! ! PROGRAM ENDS ! ! !
 
 */
//Created by Mehmet Akif Duran, 11 Jan 2024.

#include <stdio.h>
#include <stdlib.h>
#define ARRAY_SIZE 10000

int main(void){ //beginnig of the main function
    
    //variable decleration(s).
    
    int userSize;
    int userArray[ARRAY_SIZE], counter,count;
    int temp;
    
    
    //Executable statement(s).
    
    
    printf("Enter the array size : \n"); //getting array size from the user.
        scanf("%d",&userSize);
    
    printf("Enter the array elements : \n"); //getting the array elements.
    
    for(counter=0 ; counter<userSize ; counter++)
        scanf("%d",&userArray[counter]);
    
    //We will sort the array from the smallest to largest, so we can find the second largest element.
    
    for(counter=0 ;counter<userSize; counter++ ){
        
        for(count = 0 ; count<userSize-1 ; count++){
            if(userArray[count]>userArray[count+1])
            {
                temp = userArray[count];
                userArray[count] = userArray[count+1];
                userArray[count+1] = temp;
            }
        }
        
    }
    
        printf("---------------------\n");
        printf("The second largest number in this array is: %d \n", userArray[userSize-2]);
    printf(" ! ! ! THE PROGRAM ENDS ! ! !\n");

    
    return 0;
} //end of the main funciton
