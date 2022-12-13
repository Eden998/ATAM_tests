#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('[', 71);
	if(res != 1)	{
		printf("Test 88 failed:\n");
		printf("	Test 88 output: %hi\n",res);
		printf("	Test 88 expected: 1\n");
	}
	else printf("Test 88 passed\n");
	return 0;
}