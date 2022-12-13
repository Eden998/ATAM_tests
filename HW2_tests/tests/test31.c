#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above(' ', 25);
	if(res != 2)	{
		printf("Test 31 failed:\n");
		printf("	Test 31 output: %hi\n",res);
		printf("	Test 31 expected: 2\n");
	}
	else printf("Test 31 passed\n");
	return 0;
}