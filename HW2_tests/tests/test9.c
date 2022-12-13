#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('$', 78);
	if(res != 0)	{
		printf("Test 9 failed:\n");
		printf("	Test 9 output: %hi\n",res);
		printf("	Test 9 expected: 0\n");
	}
	else printf("Test 9 passed\n");
	return 0;
}