#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above(';', 42);
	if(res != 69)	{
		printf("Test 214 failed:\n");
		printf("	Test 214 output: %hi\n",res);
		printf("	Test 214 expected: 69\n");
	}
	else printf("Test 214 passed\n");
	return 0;
}