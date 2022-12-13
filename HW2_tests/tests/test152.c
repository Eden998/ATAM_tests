#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('[', -5029286286128672446);
	if(res != 11)	{
		printf("Test 152 failed:\n");
		printf("	Test 152 output: %hi\n",res);
		printf("	Test 152 expected: 11\n");
	}
	else printf("Test 152 passed\n");
	return 0;
}