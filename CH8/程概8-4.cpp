#include <stdio.h> 
float rateExchange(float amount, float rate) {
    return amount / rate; } 
int main() {    
	float amount , rate = 33.33;
	scanf("%f",&amount);    
	printf("%f´«¦¨¬üª÷ = %f\n",amount,rateExchange(amount, rate));    
	return 0; } 
