#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('@', -46);
	if(res != 215)	{
		printf("Test 212 failed:\n");
		printf("	Test 212 output: %hi\n",res);
		printf("	Test 212 expected: 215\n");
	}
	else printf("Test 212 passed\n");
	return 0;
}