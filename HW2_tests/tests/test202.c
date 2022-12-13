#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('?', -23);
	if(res != 34)	{
		printf("Test 202 failed:\n");
		printf("	Test 202 output: %hi\n",res);
		printf("	Test 202 expected: 34\n");
	}
	else printf("Test 202 passed\n");
	return 0;
}