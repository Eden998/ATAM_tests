#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('}', -59);
	if(res != 1)	{
		printf("Test 17 failed:\n");
		printf("	Test 17 output: %hi\n",res);
		printf("	Test 17 expected: 1\n");
	}
	else printf("Test 17 passed\n");
	return 0;
}