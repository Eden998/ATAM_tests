#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above(']', -65);
	if(res != 444)	{
		printf("Test 221 failed:\n");
		printf("	Test 221 output: %hi\n",res);
		printf("	Test 221 expected: 444\n");
	}
	else printf("Test 221 passed\n");
	return 0;
}