#include <stdio.h> 


double BMI(double W, double H) {     
	return W/(H * H); } 
int main() {    
double weight =0, height = 0;
scanf("%lf",&weight);
scanf("%lf",&height);    
printf("BMI = %lf\n", BMI(weight, height));    
return 0; } 




