#include<stdio.h>
int main()
{
	struct student
	{
		int roll;
		char name[10];
		int mark;
	}s1;
	struct student*p;
	p=&s1;
	printf("enter student details\n");
	scanf("%d",&p->roll);
	scanf("%S",p->name);
	scanf("%d",&p->mark);
	  
	 printf("roll: %d\n",p->roll);
	 printf("name: %S\n",p->name);
	 printf("mark: %d",p->mark);
	  return 0; 
}
