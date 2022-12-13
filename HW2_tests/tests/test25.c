#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above(';', -12);
	if(res != 0)	{
		printf("Test 25 failed:\n");
		printf("	Test 25 output: %hi\n",res);
		printf("	Test 25 expected: 0\n");
	}
	else printf("Test 25 passed\n");
	return 0;
}