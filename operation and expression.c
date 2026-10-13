#include<stdio.h>
int main()
{
	int a,b,res,choice;
	printf("------- BITWISE OPERATION-----\n");
	printf("enter the first number:");
	scanf("%d",&a);
	printf("enter the second number:");
	scanf("%d",&b);
	printf("\n----MENU----\n");
	printf("1.addition\n");
	printf("2.subraction\n");
	printf("3.multipication\n");
	printf("4.division\n");
	printf("5.modulus\n");
	printf("enter your choice:");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			res=a+b;
			printf("result=%d",res);
			break;
		
		case 2:
			res=a-b;
			printf("result=%d",res);
			break;
			
		case 3:
			res=a*b;
			printf("result=%d",res);
			break;
			
		case 4:
			res=~a;
			printf("Bitwise NOT result=%d",res);
			break;
			
		case 5:
			res=a<<b;
			printf("left shift result=%d",res);
			break;
			
		case 6:
			res=a>>b;
			printf("right shift result=%d",res);
			break;
			
		case 7:
			if(b!=0)
			{
				res=a/b;
				printf("result=%d",res);
			}
			else
			{
				printf("divisible is not possible:");
			}
			break;
		default:
				printf("invalid choice.");
	}
	return 0;
}