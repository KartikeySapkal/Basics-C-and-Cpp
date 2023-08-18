 #include<stdio.h>
 int main()
 {
 	int s1,s2,s3;
 	printf("\t************************************");
 	printf("*\n\t* Enter first side of triangle : ");
 	scanf("%d",&s1);
	printf("*\n\t* Enter second side of triangle: ");
 	scanf("%d",&s2);
	printf("*\n\t* Enter third side of triangle : ");
 	scanf("%d",&s3);
 	printf("\n\t************************************");
 	
	if(s1==s2==s3)	
	printf("\n\t Given triangle is equilateral");
	else if(s1==s2 || s2==s3 || s1==s3)
	printf("\n\t Given triangle is isoceles");
	else if ((s1*s1)+(s2*s2)==(s3*s3) || (s2*s2)+(s3*s3)==(s1*s1) || (s1*s1)+(s3*s3)==(s2*s2)) 	
 	printf("\n\t given triangle is right angled triangle");
 	else
 	printf("\n\tgiven triangle is scalan");
 	getch();
 	return 0;
 	
 	
 	
 }
