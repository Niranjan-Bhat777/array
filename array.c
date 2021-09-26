#include<stdio.h>
void main()
{
	int i,j,n,a[3][3],sum=0;
	int *p=&a;
	printf("Enter the elements of the 3*3 array\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("a[%d][%d]:",i,j);
			scanf("%d",&a[i][j]);
			printf("\n");
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",*((p+i*3)+j));
		}
		printf("\n");
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(i==j)
			{
				sum+=a[i][i];
			}
		}
	}
	printf("Sum of diagonal elements = %d",sum);
}
