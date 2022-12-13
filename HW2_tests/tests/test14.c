#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above(';', -36);
	if(res != 15)	{
		printf("Test 14 failed:\n");
		printf("	Test 14 output: %hi\n",res);
		printf("	Test 14 expected: 15\n");
	}
	else printf("Test 14 passed\n");
	return 0;
}