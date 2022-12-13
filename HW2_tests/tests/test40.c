#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('=', -25);
	if(res != 13)	{
		printf("Test 40 failed:\n");
		printf("	Test 40 output: %hi\n",res);
		printf("	Test 40 expected: 13\n");
	}
	else printf("Test 40 passed\n");
	return 0;
}