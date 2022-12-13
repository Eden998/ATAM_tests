#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('=', -24);
	if(res != 316)	{
		printf("Test 239 failed:\n");
		printf("	Test 239 output: %hi\n",res);
		printf("	Test 239 expected: 316\n");
	}
	else printf("Test 239 passed\n");
	return 0;
}