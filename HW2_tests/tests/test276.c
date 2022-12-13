#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('@', 36);
	if(res != 155)	{
		printf("Test 276 failed:\n");
		printf("	Test 276 output: %hi\n",res);
		printf("	Test 276 expected: 155\n");
	}
	else printf("Test 276 passed\n");
	return 0;
}