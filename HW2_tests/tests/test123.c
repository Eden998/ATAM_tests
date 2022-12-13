#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('(', 1379039074477492209);
	if(res != 3)	{
		printf("Test 123 failed:\n");
		printf("	Test 123 output: %hi\n",res);
		printf("	Test 123 expected: 3\n");
	}
	else printf("Test 123 passed\n");
	return 0;
}