#include<stdio.h>
int main(){
	int age=25;
	int *p=&age;
	int **pp=&p;
	printf("%d ,%d ,%d\n",age,*p,**pp);
	(*p)++;
	printf("%d ,%d\n",age,**pp);
	**pp+=10;
	printf("%d ,%d ,%d",age,*p,**pp);
	return 0;
}