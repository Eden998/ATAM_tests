#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('[', -497989446768291031);
	if(res != 0)	{
		printf("Test 114 failed:\n");
		printf("	Test 114 output: %hi\n",res);
		printf("	Test 114 expected: 0\n");
	}
	else printf("Test 114 passed\n");
	return 0;
}