#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('?', 61);
	if(res != 186)	{
		printf("Test 294 failed:\n");
		printf("	Test 294 output: %hi\n",res);
		printf("	Test 294 expected: 186\n");
	}
	else printf("Test 294 passed\n");
	return 0;
}