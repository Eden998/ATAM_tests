#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('#', 30);
	if(res != 5)	{
		printf("Test 29 failed:\n");
		printf("	Test 29 output: %hi\n",res);
		printf("	Test 29 expected: 5\n");
	}
	else printf("Test 29 passed\n");
	return 0;
}