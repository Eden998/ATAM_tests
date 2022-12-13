#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above(',', 97);
	if(res != 9)	{
		printf("Test 220 failed:\n");
		printf("	Test 220 output: %hi\n",res);
		printf("	Test 220 expected: 9\n");
	}
	else printf("Test 220 passed\n");
	return 0;
}