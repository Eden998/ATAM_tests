#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('*', 89);
	if(res != 1)	{
		printf("Test 87 failed:\n");
		printf("	Test 87 output: %hi\n",res);
		printf("	Test 87 expected: 1\n");
	}
	else printf("Test 87 passed\n");
	return 0;
}