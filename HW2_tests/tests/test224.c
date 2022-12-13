#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('$', -23);
	if(res != 43)	{
		printf("Test 224 failed:\n");
		printf("	Test 224 output: %hi\n",res);
		printf("	Test 224 expected: 43\n");
	}
	else printf("Test 224 passed\n");
	return 0;
}