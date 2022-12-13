#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('(', 97);
	if(res != 19)	{
		printf("Test 256 failed:\n");
		printf("	Test 256 output: %hi\n",res);
		printf("	Test 256 expected: 19\n");
	}
	else printf("Test 256 passed\n");
	return 0;
}