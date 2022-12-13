#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above(' ', 99);
	if(res != 4)	{
		printf("Test 246 failed:\n");
		printf("	Test 246 output: %hi\n",res);
		printf("	Test 246 expected: 4\n");
	}
	else printf("Test 246 passed\n");
	return 0;
}