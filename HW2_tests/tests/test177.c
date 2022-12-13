#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('*', -3962052506247966129);
	if(res != 7)	{
		printf("Test 177 failed:\n");
		printf("	Test 177 output: %hi\n",res);
		printf("	Test 177 expected: 7\n");
	}
	else printf("Test 177 passed\n");
	return 0;
}