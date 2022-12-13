#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above(' ', 1405718610103313577);
	if(res != 6)	{
		printf("Test 162 failed:\n");
		printf("	Test 162 output: %hi\n",res);
		printf("	Test 162 expected: 6\n");
	}
	else printf("Test 162 passed\n");
	return 0;
}