#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('>', 60);
	if(res != 0)	{
		printf("Test 93 failed:\n");
		printf("	Test 93 output: %hi\n",res);
		printf("	Test 93 expected: 0\n");
	}
	else printf("Test 93 passed\n");
	return 0;
}