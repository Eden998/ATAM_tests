#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('^', -28);
	if(res != 6)	{
		printf("Test 72 failed:\n");
		printf("	Test 72 output: %hi\n",res);
		printf("	Test 72 expected: 6\n");
	}
	else printf("Test 72 passed\n");
	return 0;
}