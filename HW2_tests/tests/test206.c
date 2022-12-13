#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('#', -16);
	if(res != 436)	{
		printf("Test 206 failed:\n");
		printf("	Test 206 output: %hi\n",res);
		printf("	Test 206 expected: 436\n");
	}
	else printf("Test 206 passed\n");
	return 0;
}