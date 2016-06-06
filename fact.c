#include <stdio.h>

int main(void) {
	int i=1,f=1,num;
	scanf("%d",&num);
	while(i<=num)
	{
		f=f*i;
		i++;
	}
	printf("%d",f);
	// your code goes here
	return 0;
}
