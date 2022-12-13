#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('>', -43);
	if(res != 5)	{
		printf("Test 76 failed:\n");
		printf("	Test 76 output: %hi\n",res);
		printf("	Test 76 expected: 5\n");
	}
	else printf("Test 76 passed\n");
	return 0;
}