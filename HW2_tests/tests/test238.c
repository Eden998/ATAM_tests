#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('#', -54);
	if(res != 170)	{
		printf("Test 238 failed:\n");
		printf("	Test 238 output: %hi\n",res);
		printf("	Test 238 expected: 170\n");
	}
	else printf("Test 238 passed\n");
	return 0;
}