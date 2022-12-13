#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('*', -75);
	if(res != 11)	{
		printf("Test 56 failed:\n");
		printf("	Test 56 output: %hi\n",res);
		printf("	Test 56 expected: 11\n");
	}
	else printf("Test 56 passed\n");
	return 0;
}