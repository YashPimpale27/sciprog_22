#include <stdio.h>
#include <stdlib.h>
#include "magic_square.h"
#define MAX_FILE_NAME 100

//this funtion will open the input file and count number of lines in it.
int get_num_lines(char filename[MAX_FILE_NAME]){
    int ch_read, count = 0;
    FILE *fp;
    fp = fopen(filename, "r");
    while((ch_read = fgetc(fp)) != EOF){
        if(ch_read == '\n'){
            count++;
        }
    }
    printf("Number of lines is:%d\n", count);
    fclose(fp);
    return count;
}

int main()
{
    int i, j, n, flag;
    FILE *f;
    char fname[MAX_FILE_NAME];

	//opens the input file with name "matrix.txt"
    f = fopen("matrix.txt","r");
    
	//get number of lines in the file
	n = get_num_lines("matrix.txt");
    
    //allocate array for the input square
	int **magicsquare = malloc(n * sizeof(int *));
    for(i=0; i<n; i++){
        magicsquare[i] = malloc(n * sizeof(int));
    }
    
	//scanf file and store each element value in 2-d array
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            fscanf(f, "%d", &magicsquare[i][j]);
        }    
    }
    
	//call "isMagicSquare" function in "magic_square.h" header file to check if square is magic or not.
    flag = isMagicSquare(magicsquare, n);
    
	//if square is magic, above function will return 1 else 0.
    if(flag == 1){
        printf("This is Magic Square\n");
    }
    else{
        printf("This is not a Magic Square\n");
    }
    
	//free allocated memmory
    for(i=0; i<n; i++){
        free(magicsquare[i]);
    }
    free(magicsquare);
	
	//close the file operations
    fclose(f);

}