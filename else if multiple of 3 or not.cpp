//write a c program to display YES iif it is multiple of 3 and should be an odd number otherwise display NO
#include<stdio.h>
int main()
{
	int n;
	printf("enter a number:");
	scanf("%d",&n);
	if(n%3==0 && n%2!=0)
	printf("YES\n");
	else
	printf("NO\n");
	return 0;
}
