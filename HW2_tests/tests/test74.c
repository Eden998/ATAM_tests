#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('%', -57);
	if(res != 7)	{
		printf("Test 74 failed:\n");
		printf("	Test 74 output: %hi\n",res);
		printf("	Test 74 expected: 7\n");
	}
	else printf("Test 74 passed\n");
	return 0;
}