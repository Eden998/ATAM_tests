#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('!', -2452750084915505518);
	if(res != 14)	{
		printf("Test 190 failed:\n");
		printf("	Test 190 output: %hi\n",res);
		printf("	Test 190 expected: 14\n");
	}
	else printf("Test 190 passed\n");
	return 0;
}