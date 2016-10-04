#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int n;
	//srand((int)time(NULL));
	scanf("%d",&n);
	while(n--)
	{
		printf("%d\n", (rand()%6)+1);
	}
}