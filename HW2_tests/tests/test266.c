#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('(', 13);
	if(res != 271)	{
		printf("Test 266 failed:\n");
		printf("	Test 266 output: %hi\n",res);
		printf("	Test 266 expected: 271\n");
	}
	else printf("Test 266 passed\n");
	return 0;
}