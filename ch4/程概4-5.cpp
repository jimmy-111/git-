#include <stdio.h>

int main()
{
	float H;
	
	int W;
 
	double BMI;
		    
	printf("請輸入空白分隔的身高和體重值==>\n ");
	scanf("%f %d", &H, &W);   
	H=H/100;
	printf("BMI 值是: %lf\n",BMI=W/(H*H)); 
	
	return 0;
}
