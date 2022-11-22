/*
  NOTE: Numbering of disc is from top to bottom. i.e uppermost disc will be 1 and so on.
*/

#include <stdio.h>

//function to print solution for moving n discs from source to destination rod.
void hanoi(int n, int source_rod, int interim_rod, int dest_rod){
    //if number of disc is 1, then move it directly from source to destination rod
	if(n == 1){
        printf("Move disc %d from rod %d to rod %d\n", n, source_rod, dest_rod);
    }
	
    else{
		//call hanoi function (recursive) with n - 1 to move from source to interim rod with destination rod as intermediary
        hanoi(n-1, source_rod, dest_rod, interim_rod);
        printf("Move disc %d from rod %d to rod %d\n", n, source_rod, dest_rod);
		//call hanoi function (recursive) with n - 1 to move from interim to destination rod with source rod as intermediary
        hanoi(n-1, interim_rod, source_rod, dest_rod);
    }
}

int main()
{
    int n;
    
	//prompt user to enter number of discs
    printf("Enter the number of discs :");
    scanf("%d", &n);
    
	//call hanoi function that will print the solution
    hanoi(n, 1, 2, 3);

    return 0;
}
