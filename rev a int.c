#include <stdio.h>

int main(void) {
	int num,rem=0,rv=0;
	scanf("%d",&num);
	while(num!=0)
	{
		rem=num%10;
		rv=rv*10+rem;
		num/=10;
	}
	printf("%d",rv);
	// your code goes here
	return 0;
}

