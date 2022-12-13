#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('%', 52);
	if(res != 2)	{
		printf("Test 47 failed:\n");
		printf("	Test 47 output: %hi\n",res);
		printf("	Test 47 expected: 2\n");
	}
	else printf("Test 47 passed\n");
	return 0;
}