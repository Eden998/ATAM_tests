#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above(']', -68);
	if(res != 1)	{
		printf("Test 96 failed:\n");
		printf("	Test 96 output: %hi\n",res);
		printf("	Test 96 expected: 1\n");
	}
	else printf("Test 96 passed\n");
	return 0;
}