#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('<', 43);
	if(res != 169)	{
		printf("Test 283 failed:\n");
		printf("	Test 283 output: %hi\n",res);
		printf("	Test 283 expected: 169\n");
	}
	else printf("Test 283 passed\n");
	return 0;
}