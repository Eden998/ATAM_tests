#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('{', 6676202556185252397);
	if(res != 1)	{
		printf("Test 112 failed:\n");
		printf("	Test 112 output: %hi\n",res);
		printf("	Test 112 expected: 1\n");
	}
	else printf("Test 112 passed\n");
	return 0;
}