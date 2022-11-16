#include <stdio.h>

//Function to calculate next number of fibonacci series
long fibonacci(long *f1,long *f2){
    long temp;
    
    //add the 2 numbers
    temp = *f1 + *f2;
    *f2 = *f1;
    *f1 = temp;
    
    return temp;
}


int main()
{
    int N,i;
    long f, f1 =0, f2=1;
    
    //prompt user to enter a number
    printf("Enter a Number: ");
    scanf("%d", &N);
    
    //check if number is negative. If yes, exit
    if(N < 1){
        printf("please enter a positive number\n");
    }
    
    if(N >= 1){
    printf("The fibonacci series is:\n");
    //print 1st number of fibonacci series
    printf("%ld ", f1);
    
    //loop to get next numbers of fibonacci series till N
    for(i=2; i <= N; i++){
        //call fibonacci function and print the next number
        f = fibonacci(&f1,&f2);
        printf("%ld ",f);
        
        //check to enter next line after 10 numbers
        if((i)%10 ==0){
            printf("\n");
        }
    }
    }
    
    return 0;
}
