#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('*', 34);
	if(res != 6)	{
		printf("Test 94 failed:\n");
		printf("	Test 94 output: %hi\n",res);
		printf("	Test 94 expected: 6\n");
	}
	else printf("Test 94 passed\n");
	return 0;
}