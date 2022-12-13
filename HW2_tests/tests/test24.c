#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('*', -3);
	if(res != 0)	{
		printf("Test 24 failed:\n");
		printf("	Test 24 output: %hi\n",res);
		printf("	Test 24 expected: 0\n");
	}
	else printf("Test 24 passed\n");
	return 0;
}