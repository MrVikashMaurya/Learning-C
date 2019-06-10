#include<stdio.h>
	int main()
	{
		int a[3][3],b[3][3],c[3][3],i,j,k;
	clrscr();
		printf("Enter your first Array\n");
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				scanf("%d",&a[i][j]);
			}
		}
			printf("Enter your second Array\n");
			for(i=0;i<3;i++)
			{
				for(j=0;j<3;j++)
				{
					scanf("%d",&b[i][j]);
				}
			}
	clrscr();
		printf("After inputting your first matrix\n");
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				printf("%d\t",a[i][j]);
			}
			printf("\n");
		}
			printf("\t+\n");

		printf("After inputting your second matrix\n");
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				printf("%d\t",b[i][j]);
			}
				printf("\n");
		}
			printf("\t=\n");
			printf("Here is your matrix addition\n");
			{
				for(i=0;i<3;i++)
				{
					for(j=0;j<3;j++)
					{
						c[i][j]=a[i][j]+b[i][j];
					}
				}
			}
				printf("Here is your answer\n");
				for(i=0;i<3;i++)
				{
					for(j=0;j<3;j++)
					{
						printf("%d\t",c[i][j]);
					}
						printf("\n");
				}
			getch();
	return 0;
	}