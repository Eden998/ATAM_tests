#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above(' ', -6711365184509427355);
	if(res != 10)	{
		printf("Test 194 failed:\n");
		printf("	Test 194 output: %hi\n",res);
		printf("	Test 194 expected: 10\n");
	}
	else printf("Test 194 passed\n");
	return 0;
}