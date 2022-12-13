#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('[', 65);
	if(res != 24)	{
		printf("Test 284 failed:\n");
		printf("	Test 284 output: %hi\n",res);
		printf("	Test 284 expected: 24\n");
	}
	else printf("Test 284 passed\n");
	return 0;
}