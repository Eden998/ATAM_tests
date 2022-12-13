#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('_', -36);
	if(res != 13)	{
		printf("Test 51 failed:\n");
		printf("	Test 51 output: %hi\n",res);
		printf("	Test 51 expected: 13\n");
	}
	else printf("Test 51 passed\n");
	return 0;
}