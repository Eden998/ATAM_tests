#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('^', -10);
	if(res != 5)	{
		printf("Test 48 failed:\n");
		printf("	Test 48 output: %hi\n",res);
		printf("	Test 48 expected: 5\n");
	}
	else printf("Test 48 passed\n");
	return 0;
}