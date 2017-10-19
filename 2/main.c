#include <stdio.h>
int main(void)
{
	int temp;
	int first = 1, second = 2, result = 2;
	for(;second < 4000000;)
	{
	temp = first + second;
	first = second;
	second = temp;
	if(second % 2 == 0)
	result += second;
	}
	printf("%d", result);
	return 0;
}

