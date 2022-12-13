#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('?', 58);
	if(res != 3)	{
		printf("Test 64 failed:\n");
		printf("	Test 64 output: %hi\n",res);
		printf("	Test 64 expected: 3\n");
	}
	else printf("Test 64 passed\n");
	return 0;
}