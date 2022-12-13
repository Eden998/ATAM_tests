#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('(', 6462198242506242026);
	if(res != 2)	{
		printf("Test 187 failed:\n");
		printf("	Test 187 output: %hi\n",res);
		printf("	Test 187 expected: 2\n");
	}
	else printf("Test 187 passed\n");
	return 0;
}