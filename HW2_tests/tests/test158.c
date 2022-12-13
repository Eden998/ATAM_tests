#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('@', -7682582022407106641);
	if(res != 13)	{
		printf("Test 158 failed:\n");
		printf("	Test 158 output: %hi\n",res);
		printf("	Test 158 expected: 13\n");
	}
	else printf("Test 158 passed\n");
	return 0;
}