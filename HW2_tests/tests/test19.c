#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('?', 91);
	if(res != 0)	{
		printf("Test 19 failed:\n");
		printf("	Test 19 output: %hi\n",res);
		printf("	Test 19 expected: 0\n");
	}
	else printf("Test 19 passed\n");
	return 0;
}