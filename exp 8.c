#include<stdio.h>
#include<stdlib.h>
/*call by valus*/
int addByValue(int a, int b)
{
int res;
res=a+b;
return res;
}
/*call by reference*/
void swapbyreference(int*a,int*b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
int main()
{
	int a, b, res;
	int*ptr;
	int*arr;
	int n, i, sum;
	printf("Enter the first number:");
	scanf("%d",&a);
	printf("Enter the second number:");
	scanf("%d",&b);
	/* print demonstration*/
	ptr=&a;
	printf("/n ponter demonstration:");
	printf("/n value of a= %d",*ptr);
	printf("/n address of a=%p",(void*)ptr);
	/*call by valuse*/
	res=addByValue(a,b);
	printf("\n\ncallby value:");
	printf("\nsum=%d",res);
	/*call by reference*/
	swapbyreference(&a,&b);
	printf("\n\ncall by reference:");
	printf("\n\nafter swapping, first number=%d",a);
	printf("\after swapping, second number=%d",b);
	/* Dynamic memory allocation*/
	printf("\n\ndynamic memory allocation");
	printf("\nenter the number of elements:");
	scanf("%d",&n);
	arr=(int*)malloc(n*sizeof(int));
	if(arr==NULL)
	{
		printf("enter %d elements:\n",n);
		return 0;
	}
	printf("enter%d elements:\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	sum=0;
	for(i=0;i<n;i++)

{
	sum=sum+arr[i];
}
printf("sum of dynamically allocated array=%d",sum);
free(arr);
return 0;
}