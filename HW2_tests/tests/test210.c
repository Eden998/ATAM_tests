#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('&', 76);
	if(res != 131)	{
		printf("Test 210 failed:\n");
		printf("	Test 210 output: %hi\n",res);
		printf("	Test 210 expected: 131\n");
	}
	else printf("Test 210 passed\n");
	return 0;
}