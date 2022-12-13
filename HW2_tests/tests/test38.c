#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('>', 45);
	if(res != 4)	{
		printf("Test 38 failed:\n");
		printf("	Test 38 output: %hi\n",res);
		printf("	Test 38 expected: 4\n");
	}
	else printf("Test 38 passed\n");
	return 0;
}