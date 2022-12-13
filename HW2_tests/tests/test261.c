#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('?', -13);
	if(res != 73)	{
		printf("Test 261 failed:\n");
		printf("	Test 261 output: %hi\n",res);
		printf("	Test 261 expected: 73\n");
	}
	else printf("Test 261 passed\n");
	return 0;
}