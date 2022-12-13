#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above(']', 61);
	if(res != 96)	{
		printf("Test 227 failed:\n");
		printf("	Test 227 output: %hi\n",res);
		printf("	Test 227 expected: 96\n");
	}
	else printf("Test 227 passed\n");
	return 0;
}