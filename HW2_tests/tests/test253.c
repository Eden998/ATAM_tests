#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('#', 39);
	if(res != 103)	{
		printf("Test 253 failed:\n");
		printf("	Test 253 output: %hi\n",res);
		printf("	Test 253 expected: 103\n");
	}
	else printf("Test 253 passed\n");
	return 0;
}