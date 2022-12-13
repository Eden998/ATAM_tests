#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above(';', -52);
	if(res != 9)	{
		printf("Test 49 failed:\n");
		printf("	Test 49 output: %hi\n",res);
		printf("	Test 49 expected: 9\n");
	}
	else printf("Test 49 passed\n");
	return 0;
}