#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above(' ', -16);
	if(res != 7)	{
		printf("Test 65 failed:\n");
		printf("	Test 65 output: %hi\n",res);
		printf("	Test 65 expected: 7\n");
	}
	else printf("Test 65 passed\n");
	return 0;
}