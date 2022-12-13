#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above(';', 50);
	if(res != 0)	{
		printf("Test 11 failed:\n");
		printf("	Test 11 output: %hi\n",res);
		printf("	Test 11 expected: 0\n");
	}
	else printf("Test 11 passed\n");
	return 0;
}