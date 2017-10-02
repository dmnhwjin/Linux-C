#include<stdio.h>
#define a *p
#define b *q

int main(void)
{
	int x;
	int *p,*q;

	p=&x;
	q=&x;

	a=2;
	b=3;

	printf("The value is:%d\n",a+b);

	return 0;
}

