#include <stdio.h>
#include <math.h>

int main(void)
{
    float a = 0.0,b = 60.0,multi_result,total_result,b_rad,i_rad,multi_rad;
    float tan_sum;
    int i,N = 12;
    
    //convert pi/3 to radians
    b_rad = (M_PI * b)/180.0;
    
    //get 2*tan(x) for 11 equidistant points between a to b
    for (i=5; i < 60; i=i+5){
        i_rad = (M_PI * i)/180.0;
        tan_sum = tan_sum + 2*tan(i_rad);
    }
    
    //calculate b-a/2N in degree
    multi_result = (b - a)/(2*N);
	
    //convert b-a/2N to radians
    multi_rad = (M_PI * multi_result)/180.0;
    
	//add tan(x0) and tan(x12) to tan_sum
    tan_sum = tan(a) + tan_sum + tan(b_rad);
	
    //calculate the final result
    total_result = multi_rad * tan_sum;
	
	//print the result
    printf("Approximated = %f\nExact = %f\n",total_result,log(2.0));


    return 0;
}
