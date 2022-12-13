#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('^', -8286814004179785213);
	if(res != 1)	{
		printf("Test 136 failed:\n");
		printf("	Test 136 output: %hi\n",res);
		printf("	Test 136 expected: 1\n");
	}
	else printf("Test 136 passed\n");
	return 0;
}