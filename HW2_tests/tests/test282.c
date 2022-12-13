#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('@', -45);
	if(res != 683)	{
		printf("Test 282 failed:\n");
		printf("	Test 282 output: %hi\n",res);
		printf("	Test 282 expected: 683\n");
	}
	else printf("Test 282 passed\n");
	return 0;
}