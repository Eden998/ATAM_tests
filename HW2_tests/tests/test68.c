#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('?', -89);
	if(res != 13)	{
		printf("Test 68 failed:\n");
		printf("	Test 68 output: %hi\n",res);
		printf("	Test 68 expected: 13\n");
	}
	else printf("Test 68 passed\n");
	return 0;
}