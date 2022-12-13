#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('%', -5877678943198018503);
	if(res != 5)	{
		printf("Test 160 failed:\n");
		printf("	Test 160 output: %hi\n",res);
		printf("	Test 160 expected: 5\n");
	}
	else printf("Test 160 passed\n");
	return 0;
}