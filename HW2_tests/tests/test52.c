#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above(';', 100);
	if(res != 0)	{
		printf("Test 52 failed:\n");
		printf("	Test 52 output: %hi\n",res);
		printf("	Test 52 expected: 0\n");
	}
	else printf("Test 52 passed\n");
	return 0;
}