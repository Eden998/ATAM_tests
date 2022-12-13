#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above(')', 41);
	if(res != 6)	{
		printf("Test 57 failed:\n");
		printf("	Test 57 output: %hi\n",res);
		printf("	Test 57 expected: 6\n");
	}
	else printf("Test 57 passed\n");
	return 0;
}