#include <stdio.h>

int main(void)
{
    int n=5, p=3, q=4;
    double A[n][p],B[p][q],C[n][q];
    int i,j,k;
    
    //loop to storing values in matrix A
    for(i=0; i<n; i++){
        for(j=0; j< p; j++){    
            A[i][j] = i + j;
        }
    }
    
    //loop to storing values in matrix B
    for(i=0; i<p; i++){
        for(j=0; j< q; j++){    
            B[i][j] = i - j;
        }
    }
    
    //loop to calculate and store values in matrix C by matrix A * B  multiplication
    for(i=0; i<n; i++){
        for(j=0; j< q; j++){
            for(k=0; k<p; k++){
                C[i][j] = C[i][j] + (A[i][k] * B[k][j]);
            }
        }
    }
    
    //display matrix A
    printf("A = \n");
    for(i=0; i<n; i++){
        for(j=0; j< p; j++){    
            printf("%3.0f ",A[i][j]);
        }
        printf("\n");
    }
    
    //display matrix B
    printf("B = \n");
    for(i=0; i<p; i++){
        for(j=0; j< q; j++){    
            printf("%3.0f ",B[i][j]);
        }
        printf("\n");
    }
    
    //display matrix C
    printf("C = \n");
    for(i=0; i<n; i++){
        for(j=0; j< q; j++){    
            printf("%3.0f ",C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
