#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above(':', 88);
	if(res != 1)	{
		printf("Test 289 failed:\n");
		printf("	Test 289 output: %hi\n",res);
		printf("	Test 289 expected: 1\n");
	}
	else printf("Test 289 passed\n");
	return 0;
}