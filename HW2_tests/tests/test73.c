#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('{', 12);
	if(res != 2)	{
		printf("Test 73 failed:\n");
		printf("	Test 73 output: %hi\n",res);
		printf("	Test 73 expected: 2\n");
	}
	else printf("Test 73 passed\n");
	return 0;
}