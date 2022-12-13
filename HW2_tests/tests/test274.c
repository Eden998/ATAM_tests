#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above(';', -40);
	if(res != 576)	{
		printf("Test 274 failed:\n");
		printf("	Test 274 output: %hi\n",res);
		printf("	Test 274 expected: 576\n");
	}
	else printf("Test 274 passed\n");
	return 0;
}