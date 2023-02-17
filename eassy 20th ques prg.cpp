#include<stdio.h>
int main()
{
	int Python,Cprogramming,Mathematics,Physics,per,sum=366;
	printf("Enter four subject marks:\n");
	scanf("%d%d%d%d",&Python,&Cprogramming,&Mathematics,&Physics);
	per=((Python+Cprogramming+Mathematics+Physics)/400)*100;
	
	printf("\n");
	if(per>75)
	printf("Grade is Distinction");
	else if (75>per>=60)
	printf("Grade is First Division");
	else if (60>per>=50)
	printf("Grade is Second Division");
	else if (50>per>=40)
	printf("Grade is Third Division");
	else 
	printf("Grade is Fail");
	
	return 0;
}
