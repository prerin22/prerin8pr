//  the length of a string using a Pointer.
#include<stdio.h>

void main(){
	char a[50];
	int *length;
	printf("Enter string :");
	gets(a);
	length= &a; 
	
	printf("The size of the string %d", strlen(a));
		
}
