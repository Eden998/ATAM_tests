#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above(']', 9);
	if(res != 1)	{
		printf("Test 13 failed:\n");
		printf("	Test 13 output: %hi\n",res);
		printf("	Test 13 expected: 1\n");
	}
	else printf("Test 13 passed\n");
	return 0;
}