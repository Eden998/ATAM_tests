#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('*', 65);
	if(res != 3)	{
		printf("Test 16 failed:\n");
		printf("	Test 16 output: %hi\n",res);
		printf("	Test 16 expected: 3\n");
	}
	else printf("Test 16 passed\n");
	return 0;
}