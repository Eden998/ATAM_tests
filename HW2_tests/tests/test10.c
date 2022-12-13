#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('=', 74);
	if(res != 0)	{
		printf("Test 10 failed:\n");
		printf("	Test 10 output: %hi\n",res);
		printf("	Test 10 expected: 0\n");
	}
	else printf("Test 10 passed\n");
	return 0;
}