#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('}', 86);
	if(res != 0)	{
		printf("Test 28 failed:\n");
		printf("	Test 28 output: %hi\n",res);
		printf("	Test 28 expected: 0\n");
	}
	else printf("Test 28 passed\n");
	return 0;
}