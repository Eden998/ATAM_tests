#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('#', 13);
	if(res != 6)	{
		printf("Test 15 failed:\n");
		printf("	Test 15 output: %hi\n",res);
		printf("	Test 15 expected: 6\n");
	}
	else printf("Test 15 passed\n");
	return 0;
}