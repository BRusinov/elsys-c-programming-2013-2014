#include<stdio.h>

int main()
{

	int mat[4][4],i,j;

	for(i=0;i<4;i++)
	{
	  for(j=0;j<4;j++)
	  {
		  scanf("%d",&mat[j][i]);
	  } 
	}
	for(i=0;i<4;i++)
	{
	  for(j=0;j<4;j++)
		{
		  printf("%d",mat[i][j]);
	  	}
	printf("\n");
	}

	return 0;
}
	
