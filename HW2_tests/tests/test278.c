#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('&', 27);
	if(res != 356)	{
		printf("Test 278 failed:\n");
		printf("	Test 278 output: %hi\n",res);
		printf("	Test 278 expected: 356\n");
	}
	else printf("Test 278 passed\n");
	return 0;
}