 #include<stdio.h>
 #include<string.h>
 int main()
 {
 	int len;
 	char a[50];
 	printf("ENter string: ");
 	gets(a);
 	
 	len=strlen(a);
 	printf("Length of given string is: %d",len);
 	
 	
 	return 0;
 }
