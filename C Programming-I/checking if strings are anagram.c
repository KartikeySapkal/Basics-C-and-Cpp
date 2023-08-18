#include<stdio.h>
#include<string.h>
int main()
{
	char name1[50],name2[50],temp;
	int a,b,i,j;
	
	printf("\nEnter name1=");
	gets(name1);
	printf("\nEnter name2=");
	gets(name2);
	
	a=strlen(name1);
	b=strlen(name2);
	
	
	if(a==b)
	{
		printf("Given strings has equal length");

		for(i=0;i<a-1;i++)
		{
			for(j=i+1;j<a;j++)
			{
				if(name1[j]<name1[i])
				{
					temp=name1[j];
					name1[j]=name1[i];
					name1[i]=temp;
				}
			}	
		}
				for(i=0;i<a-1;i++)
			{
				for(j=i+1;j<a;j++)
				{
					if(name2[j]<name2[i])
					{
						temp=name2[j];
						name2[j]=name2[i];
						name2[i]=temp;
					}
				}	
			}
		
			printf("\nsorted string is as follows\n");
			printf(" string 1 %s\n",name1);
printf("string 2 %s\n",name2);

	}
	
	else
	printf("\n\nGiven strings are not anagram");
	
	
	if(strcmp(name1,name2)==0)
	printf("\n\nANAGRAM");
	else
	printf("\n\nNOT ANAGRAM");
	
	
	
	return 0;
	
}
