#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above(',', 65);
	if(res != 85)	{
		printf("Test 273 failed:\n");
		printf("	Test 273 output: %hi\n",res);
		printf("	Test 273 expected: 85\n");
	}
	else printf("Test 273 passed\n");
	return 0;
}