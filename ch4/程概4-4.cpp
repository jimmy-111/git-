#include <stdio.h> 
#define PI 3.1415

int main(void)
{
    int r;    
	printf("請輸入半徑值 ==> \n");    
	scanf("%d", &r);
	printf("圓周長的值是: %lf\n",  2*PI*r);   
  	return 0;
  		
}
