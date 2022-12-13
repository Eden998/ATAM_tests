#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('+', -6077765706874678266);
	if(res != 12)	{
		printf("Test 109 failed:\n");
		printf("	Test 109 output: %hi\n",res);
		printf("	Test 109 expected: 12\n");
	}
	else printf("Test 109 passed\n");
	return 0;
}