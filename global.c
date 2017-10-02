#include<stdio.h>
int add(int a,int b)
{
	return a+b;
}
int b=10;

int mul(int a)
{
	return a*b;
}
int main(void)
{
	int res1;
	int res2;
	res1=mul(1);
	printf("res1:%d,	res2:%d",res1,res2);
	printf("The global b:%d\n",b);
	return 0;

}
