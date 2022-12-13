#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('[', -6643073349968334991);
	if(res != 11)	{
		printf("Test 124 failed:\n");
		printf("	Test 124 output: %hi\n",res);
		printf("	Test 124 expected: 11\n");
	}
	else printf("Test 124 passed\n");
	return 0;
}