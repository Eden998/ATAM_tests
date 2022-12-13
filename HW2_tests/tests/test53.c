#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('=', -23);
	if(res != 2)	{
		printf("Test 53 failed:\n");
		printf("	Test 53 output: %hi\n",res);
		printf("	Test 53 expected: 2\n");
	}
	else printf("Test 53 passed\n");
	return 0;
}