#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above(',', -6974459668419353898);
	if(res != 3)	{
		printf("Test 110 failed:\n");
		printf("	Test 110 output: %hi\n",res);
		printf("	Test 110 expected: 3\n");
	}
	else printf("Test 110 passed\n");
	return 0;
}