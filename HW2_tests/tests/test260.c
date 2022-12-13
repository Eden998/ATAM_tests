#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('}', 42);
	if(res != 242)	{
		printf("Test 260 failed:\n");
		printf("	Test 260 output: %hi\n",res);
		printf("	Test 260 expected: 242\n");
	}
	else printf("Test 260 passed\n");
	return 0;
}