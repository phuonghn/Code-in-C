//
//  main.c
//  pascal
//
//  Created by Phuong Nguyen on 2/11/15.
//  Copyright (c) 2015 Phuong Nguyen. All rights reserved.
//
#include <stdio.h>

int main()
{
    //initializing 2 arrays of size 28 and some arbitrary variables for the 'for loops'
    int array[28], temp[28], i, k, l, row;
    
    //ask user for the levels of Pascal's Triangle
    printf("Please enter how many levels of Pascal's Triangle you would like to see: ");
    scanf("%d", &row);
    
    //set the initial positions of the two arrays to 1 because that's where we start
    temp[0] = 1;
    array[0] = 1;
    
    /*row has to be more than 0 in order to print something
      the first row is special because it only has 1 so just print 1 */
    if (row > 0){
        printf("1\n");
        
        for (i = 1; i < row; i++){
  
            for (k = 1; k < row; k++){
            
               array[k] = temp[k - 1] + temp[k];
                printf("<<<%d>>> [[[%d]]] {{{%d}}}" ,array[k], k, i);
                
            }
            
            printf("*********%d********",i);
        
            array[i] = 1;
            
            for (l = 0; l <= i; l++){
                printf("%d ", array[l]);
                temp[l] = array[l];
            }
            printf("\n");
        }
        
 }
    return 0;
}