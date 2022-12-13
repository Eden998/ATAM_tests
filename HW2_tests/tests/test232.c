#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above(')', -82);
	if(res != 801)	{
		printf("Test 232 failed:\n");
		printf("	Test 232 output: %hi\n",res);
		printf("	Test 232 expected: 801\n");
	}
	else printf("Test 232 passed\n");
	return 0;
}