#include<stdio.h>
int main()
{
	int p, r, t, int_amt, ch;
	printf("input principle, rate of intrest & time to find simple intrest: \n");
	scanf("%d%d%d",&p,&r,&t);
	int_amt=(p*r*t)/100;
	printf("simple intrest=%d", int_amt);
	printf("Is customer senior citizen?:\n");
	printf("press 1 for yes, 0 for no:");
	scanf("%d", &ch);
	getch();
	return ;
}
