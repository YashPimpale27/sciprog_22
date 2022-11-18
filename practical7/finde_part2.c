#include <stdio.h>
#include <stdlib.h>

//function to allocate array of input size
int *allocatearray(int length){
    int *ap;
    ap = (int *) malloc((length) * sizeof(int));
    
    return ap;
}

//function to fill the array with value as 1
void fillwithones(int *arr, int length){
    int i;
    for(i=0; i<length; i++){
        arr[i] = 1;
    }
}

//function to print each value of the array
void printarray(int *arr, int length){
    int i;
    for(i=0; i<length; i++){
        printf("a[%d] = %d\n",i,arr[i]);
    }
}

//function to free allocated memory
void free_all_mem(int *array){
    free(array);
}

int main()
{
    int length, *ar;
    
    //prompt user to enter the size of array
    printf("Enter the size of array: ");
    scanf("%d",&length);
    
    int arr[length];
    
    //call function to allocate array ot input size
    ar = allocatearray(length);
    
    //call function to fill the array with value 1
    fillwithones(ar, length);
    
    //call function to print all the values of array
    printarray(ar, length);
    
    //call function to free memory
    free_all_mem(ar);

    return 0;
}
