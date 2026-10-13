#include <stdio.h>
int main()
{
	int a[50],b[10][10];
	int n,rows,cols;
	int i,j,sum1,sum2;
	sum1=0;
	printf("enter the first element of 1d array");
	scanf("%d",&n);
	printf("enter %d element:\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n1D Array element:\n");
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
		sum1=sum1+a[i];
	}
	printf("\n sum of 1d array=%d",sum1);
	printf("\n\nenter the number of row in 2d array:");
	scanf("%d",&rows);
	printf("Enter the number of column in 2D array:");
	scanf("%d",&cols);
	printf("Enter the element of 2d array:\n");
	for(i=0;i<rows;i++)
	{
		for(j=0 ;j<cols;j++)
		{
		 scanf("%d",&b[i][j]);
		}
	}
	printf("\n2d array element:\n");
	for(i=0;i<cols;i++)
	{
	 for(j=0;j<cols;j++)
	  {
		 printf("%d\t",b[i][j]);
		 sum2=sum2+b[i][j];
	   }
		printf("\n");
	}
	printf("sum of 2d array=%d",sum2);
	return 0;
}