#include <stdio.h>
#include <math.h>

//function to calculate factorial of a number
int fact(int n){
    int sum=0;
    
    //return 1, if number is 0
    if(n == 0) 
        return 1 ;
        
    //calculate factorial using recursive function
    else{
        sum = sum + (n * fact(n-1)); 
    }
    return sum;
}

int main(void)
{
    int i,order;
    double x=1.0,result=1.0;
    
    //prompt user to enter the order
    printf("Enter the order: ");
    scanf("%d", &order);
    
    //create array to store value of each term
    double arr[order];
    
    //loop to calculate value of each term and store it in an array
    for(i=1; i<=order; i++){
        arr[i] = (pow(x,i)/fact(i));
        result = result + arr[i];
        
        //Display the estimated value for each term
        printf("Estimate value of e for order %d is %1.14lf\n", i, result);
    }
    
    //Display the true value
    printf("True value of e = %1.14lf\n", exp(1.0));

    return 0;
}


//As the order increases, we get better approximation with the actual value of e. since as order increases, the denominator increases (as it is a factorial) 
//and the divided value becomes musch closer to zero and hence the approximation increases.