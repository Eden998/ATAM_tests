#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('&', 30);
	if(res != 3)	{
		printf("Test 61 failed:\n");
		printf("	Test 61 output: %hi\n",res);
		printf("	Test 61 expected: 3\n");
	}
	else printf("Test 61 passed\n");
	return 0;
}