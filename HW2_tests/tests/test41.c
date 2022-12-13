#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('_', -48);
	if(res != 10)	{
		printf("Test 41 failed:\n");
		printf("	Test 41 output: %hi\n",res);
		printf("	Test 41 expected: 10\n");
	}
	else printf("Test 41 passed\n");
	return 0;
}