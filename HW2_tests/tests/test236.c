#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('|', 8);
	if(res != 439)	{
		printf("Test 236 failed:\n");
		printf("	Test 236 output: %hi\n",res);
		printf("	Test 236 expected: 439\n");
	}
	else printf("Test 236 passed\n");
	return 0;
}