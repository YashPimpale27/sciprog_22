#include <stdio.h>

//function to get GCD using Iterative method
int GCD_iterative(int a, int b){
    int temp;
    //This loop will get mod of a and b till b is not equal to zero
    do {
        temp = b;
        b = a%b;
        a = temp;
    } while(b != 0);
    return a;
}

//function to get GCD using Recursive method
int GCD_recursive(int a, int b){
    int temp;
    //This will get gcd till b is not equal to zero
    if(b != 0){
        temp = b;
        b = a%b;
        a = temp;
        return GCD_recursive(a,b);
    }
    else{
        return a;
    }
}

int main()
{
    int a,b;
    int gcd_ite,gcd_rec;
    
    //prompt user to enter 2 integers
    printf("Please enter 2 positive integers :");
    scanf("%d %d", &a, &b);
    
    //call iterative GCD function
    gcd_ite = GCD_iterative(a,b);
    
    //call recursive GCD function
    gcd_rec = GCD_recursive(a,b);
    
    //print the output of both the functions
    printf("Iterative GCD of %d and %d is = %d\n", a, b, gcd_ite);
    printf("Recursive GCD of %d and %d is = %d", a, b, gcd_rec);

    return 0;
}
