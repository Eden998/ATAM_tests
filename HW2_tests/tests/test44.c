#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('$', 3);
	if(res != 13)	{
		printf("Test 44 failed:\n");
		printf("	Test 44 output: %hi\n",res);
		printf("	Test 44 expected: 13\n");
	}
	else printf("Test 44 passed\n");
	return 0;
}