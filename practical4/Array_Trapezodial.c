#include <stdio.h>
#include <math.h>

//Function to convert degree to radian
float deg_to_rad(float x){
    float rad = (M_PI * x)/180.0;
    return rad;
}

float cal_tan(float a, float b, int N, float tan_arr[N + 1]){
    
    int i;
    float sum=0.0,total_result=0.0,multi_result=0.0;
    
    //get sum of 1st and last step
    sum = tan_arr[0] + tan_arr[N];
    
    //sum all tan(x) step except for 1st and last step.
    for(i=1; i < N; i++){
        sum = sum + 2*tan_arr[i];
    }
    
    //calculate b-a/2N in radian
    multi_result = deg_to_rad((b - a)/(2*N));
	
    //calculate the final result
    total_result = multi_result * sum;
    
    return total_result;
}

int main(void)
{
    int i,N;
    float total_result=0.0,a = 0.0,b =60.0;
    float step=1;
    
	//prompt user to enter number of points
    printf("Enter the number of points: ");
    scanf("%d",&N);
    
	//calculate step size based on number of points
    step = (b - a)/N;
    
    float i_rad[N + 1];
    float tan_arr[N + 1];
    
	//calculate tan(x) for each step and store it in an array
    for(i=0; i <= N; i++){
        i_rad[i] = deg_to_rad(i*step);
        tan_arr[i] = tan(i_rad[i]);
    }
    
    //call cal_tan (calculate tan) function for getting final value
	total_result = cal_tan(a,b,N,tan_arr);
	
	//print the result
    printf("Area = %f\n",total_result);
	printf("Actual value = %f\n",logf(2));

    return 0;
}