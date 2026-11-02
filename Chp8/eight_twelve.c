/*Implement a function that performes the transpose function*/

#include <stdio.h>

// Global Variables
int     nRows,nCols;
float   value;


// Functional Prototypes
void populateMatrix(int nRows, int nCols, float arr[nRows][nCols]);
void printMatrix(int nRows, int nCols, float arr[nRows][nCols]);
void transposeMatrix(int nRows, int nCols, float arr_alpha[nRows][nCols], arr_beta[nRows][nCols]);



int main(void){

    printf("Number of rows?:");
    scanf("%i",&nRows);

    printf("Number of columns?:");
    scanf("%i",&nCols);

    float matrix_a[nRows][nCols];
    float matrix_b[nCols][nRows];

    populateMatrix(nRows,nCols, matrix_a);

    printMatrix(nRows,nCols, matrix_a);

    

    return 0;
}






// Helper Functions
void populateMatrix(int nRows, int nCols,float arr[nRows][nCols]){


    int index_i, index_j;
    

    printf("Please be prepared to enter %i entries.\n", nRows * nCols);


    for(index_i = 0; index_i < nRows; ++index_i)
        for(index_j = 0; index_j < nCols; ++index_j)
    {
                printf("matrix[%i,%i] = ",index_i,index_j);
                scanf("%f",&value);
                arr[index_i][index_j] = value;
    }

}


void printMatrix(int nRows, int nCols, float arr[nRows][nCols]){

    int index_i, index_j;
    
    for(index_i = 0;index_i < nRows;++index_i)
    {
        for(index_j = 0;index_j < nCols;++index_j)
            printf("%5f ",arr[index_i][index_j]);
    printf("\n");
    }
}