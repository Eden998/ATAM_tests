#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('{', 45);
	if(res != 2)	{
		printf("Test 95 failed:\n");
		printf("	Test 95 output: %hi\n",res);
		printf("	Test 95 expected: 2\n");
	}
	else printf("Test 95 passed\n");
	return 0;
}