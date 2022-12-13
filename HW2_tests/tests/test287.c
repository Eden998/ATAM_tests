#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('=', -95);
	if(res != 245)	{
		printf("Test 287 failed:\n");
		printf("	Test 287 output: %hi\n",res);
		printf("	Test 287 expected: 245\n");
	}
	else printf("Test 287 passed\n");
	return 0;
}