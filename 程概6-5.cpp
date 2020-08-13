#include <stdio.h> 
int main() 
{    
int months;    
printf("½Ð¿é¤J¤ë¥÷¡]1~12¡^=> ");    
scanf("%d", &months);    
if (months <= 2) 
{       
printf("¥V©u\n");    
} 
else if ( months <= 5) 
{          
printf("¬K©u\n");    
}    
else if (months <= 8) 
{             
printf("®L©u\n");         
}         
else if (months <= 11) 
{             
printf("¬î©u\n");         
}         
else if (months >= 12) 
{             
printf("¥V©u\n");         
}    
return 0; 
} 
