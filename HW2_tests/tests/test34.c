#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('@', 6);
	if(res != 2)	{
		printf("Test 34 failed:\n");
		printf("	Test 34 output: %hi\n",res);
		printf("	Test 34 expected: 2\n");
	}
	else printf("Test 34 passed\n");
	return 0;
}