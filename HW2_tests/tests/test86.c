#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('+', 66);
	if(res != 1)	{
		printf("Test 86 failed:\n");
		printf("	Test 86 output: %hi\n",res);
		printf("	Test 86 expected: 1\n");
	}
	else printf("Test 86 passed\n");
	return 0;
}