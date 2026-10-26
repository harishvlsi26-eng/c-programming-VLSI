#include<stdio.h>
struct student
{
	int rollno;
	char name[50];
	char attendance;
};
	int main()
		{
			struct student s[50];
			FILE *fp;
			int n, i;
			int present=0,absent=0;
			printf("=========REAL-TIME ATTENDANCE SYSTEM======\n");
			printf("enter the number of students:");
			scanf("%d",&n);
			printf("\n enter student details:\n");
			for(i=0;i<n;i++)
			{
				printf("\nstudents %d\n",i+i);
				printf("roll number:\n");
				scanf("%d",&s[i].rollno);
				printf("name:");
				scanf("%s",s[i].name);
				printf("attandance (P/A):");
				scanf("%c",&s[i].attendance);
				if(s[i].attendance =='p' || s[i].attendance =='p')
				{
					present++;
				}
				else
				{
					absent++;
				}
			}
			fp=fopen("attendance.txt", "w");
			if(fp==NULL)
			{
				printf("Unable to open file.");
				return 0;
			}
	fprintf(fp, "===== ATTENDANCE REPORT =====\n");
	fprintf(fp,"roll no\tname\tattendance\n");
	for(i= 0; i<n; i++)
	{
		fprintf(fp,"%d\t%s\t%c\n",s[i].rollno,s[i].name,s[i].attendance);
	}
	fprintf(fp,"\npresent=%d\n",present);
	fprintf(fp,"\nabsent=%d\n",absent);
	fclose(fp);
	printf("\n=======ATTENDANCE REPORT======\n");
	printf("roll no\tname\tattendence\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t%s\t%c\n",s[i].rollno,s[i].name,s[i].attendance);
	}
	printf("\nTotal present=%d",present);
	printf("\ntotal absent=%d\n",absent);
	printf("\n\nattendance saved successfully.");
	return 0;
}