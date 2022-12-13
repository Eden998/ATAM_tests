#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('!', 64);
	if(res != 1)	{
		printf("Test 60 failed:\n");
		printf("	Test 60 output: %hi\n",res);
		printf("	Test 60 expected: 1\n");
	}
	else printf("Test 60 passed\n");
	return 0;
}