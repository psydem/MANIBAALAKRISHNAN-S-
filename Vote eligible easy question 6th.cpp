#include<stdio.h>
int main()
{
	int age;
	printf("Enter the age");
	scanf("%d",&age);
	if(age>=18)
	printf("eligible");
	else
	{
	printf("not eligible to vote now");
	printf("has to wait %d years",18);
    }
	return 0;
}
