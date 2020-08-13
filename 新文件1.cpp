#include <stdio.h>

int main()
{
	float h;
	int g;
	float BMI;
	
	printf("請輸入空白分隔的身高與體重值==> \n");
	scanf("%f %d",&h,&g);
	h=h/100;
	BMI=g/(h*h);
	
	printf("BMI值是:%f\n",BMI);
	
	return 0;
}
