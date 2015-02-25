//
//  main.c
//  mat_add
//
//  Created by Phuong Nguyen on 2/10/15.
//  Copyright (c) 2015 Phuong Nguyen. All rights reserved.
//

#include <stdio.h>

void addMatrix(int i, int row, int j, int column, int matA[][100],
               int matB[][100], int matC[][100]){
    
    //scans the number into Matrix A
    for (i = 0; i < row; i = i + 1){
        for (j = 0; j < column; j = j + 1){
            scanf("%d", &matA[i][j]);
        }
    }
    
    //scans the number into Matrix B
    for (i = 0; i < row; i = i + 1){
        for (j = 0; j < column; j = j + 1){
            scanf("%d", &matB[i][j]);
        }
    }
    
    /*loops through Matrices A & B, adds the numbers, and scans the
     number into Matrix C */
    for (i = 0; i < row; i = i + 1){
        for (j = 0; j < column; j = j + 1){
            matC[i][j] = matA[i][j] + matB[i][j];
        }
        printf("\n");
    }
}

int main(){
    int matA[100][100];
    int matB[100][100];
    int matC[100][100];
    int row, column;
    int i = 0;
    int j = 0;
    
    printf("Please enter the number of rows: ");
    scanf("%d", &row);
    
    printf("Please enter the number of columns: ");
    scanf("%d", &column);
    
    printf("Enter Matrix A\n");
    printf("Enter Matrix B\n");
    
    printf("A + B =\n");
    addMatrix(i, row, j, column, matA, matB, matC);
    printf("%d ", matC[i][j]);
    
    return 0;
}