#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above(',', -84);
	if(res != 745)	{
		printf("Test 292 failed:\n");
		printf("	Test 292 output: %hi\n",res);
		printf("	Test 292 expected: 745\n");
	}
	else printf("Test 292 passed\n");
	return 0;
}