#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above(')', -89);
	if(res != 5)	{
		printf("Test 8 failed:\n");
		printf("	Test 8 output: %hi\n",res);
		printf("	Test 8 expected: 5\n");
	}
	else printf("Test 8 passed\n");
	return 0;
}