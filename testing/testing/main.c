//
//  main.c
//  testing
//
//  Created by Phuong Nguyen on 2/12/15.
//  Copyright (c) 2015 Phuong Nguyen. All rights reserved.
//

#include <stdio.h>

void pascal(int row)
{
    int c, i, j, k;
    
    for(i=0; i < row; i++) {
        c = 1;
        for(j = 1; j <= 2 * (row - 1 - i); j++);
        for(k = 0; k <= i; k++) {
            printf("%d ", c);
            c = c * (i-k)/(k+1);
        }
        printf("\n");
    }
}

int main()
{
    int row;
    
    printf("Please enter how many levels of Pascal's Triangle you would like to see: ");
    scanf("%d", &row);
    
    pascal(row);
    
    return 0;
}