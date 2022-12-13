#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('{', -19);
	if(res != 256)	{
		printf("Test 237 failed:\n");
		printf("	Test 237 output: %hi\n",res);
		printf("	Test 237 expected: 256\n");
	}
	else printf("Test 237 passed\n");
	return 0;
}