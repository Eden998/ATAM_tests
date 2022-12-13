#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('^', -55);
	if(res != 214)	{
		printf("Test 251 failed:\n");
		printf("	Test 251 output: %hi\n",res);
		printf("	Test 251 expected: 214\n");
	}
	else printf("Test 251 passed\n");
	return 0;
}