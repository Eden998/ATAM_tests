#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('}', 45);
	if(res != 242)	{
		printf("Test 291 failed:\n");
		printf("	Test 291 output: %hi\n",res);
		printf("	Test 291 expected: 242\n");
	}
	else printf("Test 291 passed\n");
	return 0;
}