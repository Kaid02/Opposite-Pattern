#include<stdio.h>
int main()
{
		int i,j,a=1;
		
		
		
	for(i=5;i>0;i--)
	{
		for(j=1;j<=5;j++)
		{	
			if(j<i)
			{
			printf(" ");
		}
		else{
			
			printf("%d",a++);
		}
		
	}	
		
	a=1;
	printf("\n");
   }
	return 0;
	}		
