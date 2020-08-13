# include <stdio.h>
int main(){
	int num, sum = 1;    
	int i, n = 100;     
	for(i = 1; i <= n; ++i) {
		printf("¼Æ¦r%d: ", i);      
		scanf("%d",&num);      
		if ( num > 0 ) sum = sum * num;      
		if( i >= 4 ) break;    
		}      
		printf("Sum = %d", sum);    
return 0; } 
