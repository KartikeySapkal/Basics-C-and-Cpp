 #include<stdio.h>
 #include<string.h>
 int main()
 {
 	char s1[50],s2[50];
 	printf("Enter string1: ");
 	gets(s1);
 	
 	printf("\nENter string2: ");
 	gets(s2);

	printf("Before\n");
	printf("s1=%s and s2=%s",s1,s2);
	
	strcpy(s1,"zencom");
	strcpy(s2,"programming");

 	printf("\nAfter\n");
 	printf("s1=%s and s2=%s",s1,s2);
 	
 	
 return 0;	
 }
