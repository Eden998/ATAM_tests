#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('/', -70);
	if(res != 4)	{
		printf("Test 36 failed:\n");
		printf("	Test 36 output: %hi\n",res);
		printf("	Test 36 expected: 4\n");
	}
	else printf("Test 36 passed\n");
	return 0;
}