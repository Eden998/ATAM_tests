#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('^', -11);
	if(res != 1)	{
		printf("Test 80 failed:\n");
		printf("	Test 80 output: %hi\n",res);
		printf("	Test 80 expected: 1\n");
	}
	else printf("Test 80 passed\n");
	return 0;
}