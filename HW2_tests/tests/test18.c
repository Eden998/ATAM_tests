#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('&', 24);
	if(res != 0)	{
		printf("Test 18 failed:\n");
		printf("	Test 18 output: %hi\n",res);
		printf("	Test 18 expected: 0\n");
	}
	else printf("Test 18 passed\n");
	return 0;
}