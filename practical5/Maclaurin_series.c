#include <stdio.h>
#include <math.h>

//Function to calculate Maclaurin series using formula
double artanh1(double x, double delta){
    
    int i=0;
    double pow_val;
    double sum = 0;
    
	//calculate value till power value is greater than equal to delta
    do {
        pow_val = pow(x,(2*i + 1))/(2*i + 1);
        sum = sum + pow_val;
        i = i + 1;
    } while(fabs(pow_val) >= delta);
    
    return sum;
}

//Function to calculate Maclaurin series using natural logarithms
double artanh2(double x){
    double sum=0.0;
    sum = (log(1 + x) - log(1- x))/2;
    
    return sum;
}

int main(void)
{
    int i=0,N = 1000;
    double delta;
    double x=-0.9;
    
	//prompt user to enter a positive number
    printf("Enter a positive number: ");
    scanf("%lf",&delta);
    
	//define array for storing values
    double app_val[N],log_val[N];
    
	//run loop for x from -0.9 to 0.9 with step of 0.01
    while(x<=0.9 && i<N){
		
		//call "artanh1" function to calculate Maclaurin series using formula and store it in array
        app_val[i] = artanh1(x,delta);
		
		//call "artanh2" function to calculate Maclaurin series natural logarithms and store it in array
        log_val[i] = artanh2(x);
		
		//Print difference between approximated and logarithmic value for each step of x
        printf("The difference at x = %lf is %lf\n",x,fabs(app_val[i] - log_val[i]));
		
		//Increment x by 0.01
        x = x + 0.01;
		
		//Increment i by 1
        i = i + 1;
    }
    
    return 0;
}
