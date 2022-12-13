#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('?', 30);
	if(res != 303)	{
		printf("Test 201 failed:\n");
		printf("	Test 201 output: %hi\n",res);
		printf("	Test 201 expected: 303\n");
	}
	else printf("Test 201 passed\n");
	return 0;
}