#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('|', 4233712186120470004);
	if(res != 10)	{
		printf("Test 107 failed:\n");
		printf("	Test 107 output: %hi\n",res);
		printf("	Test 107 expected: 10\n");
	}
	else printf("Test 107 passed\n");
	return 0;
}