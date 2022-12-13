#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('}', 43);
	if(res != 1)	{
		printf("Test 42 failed:\n");
		printf("	Test 42 output: %hi\n",res);
		printf("	Test 42 expected: 1\n");
	}
	else printf("Test 42 passed\n");
	return 0;
}