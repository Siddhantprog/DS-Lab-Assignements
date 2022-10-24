#include <stdio.h>
 
int main()
{
	int i, j;
	for(i=0;i<=6;i++)
	{
		for(j=0;j<=20;j++)
	
			if(i%2==0||i%2==1&&j%2==0)
			printf("*");
			else
			printf("0");
			printf("\n");

 }
}