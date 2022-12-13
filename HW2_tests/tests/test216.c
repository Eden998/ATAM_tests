#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('^', 64);
	if(res != 168)	{
		printf("Test 216 failed:\n");
		printf("	Test 216 output: %hi\n",res);
		printf("	Test 216 expected: 168\n");
	}
	else printf("Test 216 passed\n");
	return 0;
}