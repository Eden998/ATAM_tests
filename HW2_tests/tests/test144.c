#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above(':', -3354888915451484437);
	if(res != 15)	{
		printf("Test 144 failed:\n");
		printf("	Test 144 output: %hi\n",res);
		printf("	Test 144 expected: 15\n");
	}
	else printf("Test 144 passed\n");
	return 0;
}