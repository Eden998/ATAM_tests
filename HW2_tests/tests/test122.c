#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('$', -2953614624484370762);
	if(res != 0)	{
		printf("Test 122 failed:\n");
		printf("	Test 122 output: %hi\n",res);
		printf("	Test 122 expected: 0\n");
	}
	else printf("Test 122 passed\n");
	return 0;
}