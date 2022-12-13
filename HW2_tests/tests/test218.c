#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('>', -7);
	if(res != 377)	{
		printf("Test 218 failed:\n");
		printf("	Test 218 output: %hi\n",res);
		printf("	Test 218 expected: 377\n");
	}
	else printf("Test 218 passed\n");
	return 0;
}