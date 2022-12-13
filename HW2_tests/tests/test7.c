#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('<', -61);
	if(res != 15)	{
		printf("Test 7 failed:\n");
		printf("	Test 7 output: %hi\n",res);
		printf("	Test 7 expected: 15\n");
	}
	else printf("Test 7 passed\n");
	return 0;
}