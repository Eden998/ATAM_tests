#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('&', 99);
	if(res != 0)	{
		printf("Test 84 failed:\n");
		printf("	Test 84 output: %hi\n",res);
		printf("	Test 84 expected: 0\n");
	}
	else printf("Test 84 passed\n");
	return 0;
}