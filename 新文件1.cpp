#include <stdio.h>

int main()
{
	float h;
	int g;
	float BMI;
	
	printf("�п�J�ťդ��j�������P�魫��==> \n");
	scanf("%f %d",&h,&g);
	h=h/100;
	BMI=g/(h*h);
	
	printf("BMI�ȬO:%f\n",BMI);
	
	return 0;
}
