#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above(':', -51);
	if(res != 7)	{
		printf("Test 63 failed:\n");
		printf("	Test 63 output: %hi\n",res);
		printf("	Test 63 expected: 7\n");
	}
	else printf("Test 63 passed\n");
	return 0;
}