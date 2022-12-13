#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above(')', -4);
	if(res != 0)	{
		printf("Test 77 failed:\n");
		printf("	Test 77 output: %hi\n",res);
		printf("	Test 77 expected: 0\n");
	}
	else printf("Test 77 passed\n");
	return 0;
}