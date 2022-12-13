#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('=', 69);
	if(res != 0)	{
		printf("Test 23 failed:\n");
		printf("	Test 23 output: %hi\n",res);
		printf("	Test 23 expected: 0\n");
	}
	else printf("Test 23 passed\n");
	return 0;
}