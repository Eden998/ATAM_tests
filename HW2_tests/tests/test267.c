#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('#', -59);
	if(res != 766)	{
		printf("Test 267 failed:\n");
		printf("	Test 267 output: %hi\n",res);
		printf("	Test 267 expected: 766\n");
	}
	else printf("Test 267 passed\n");
	return 0;
}