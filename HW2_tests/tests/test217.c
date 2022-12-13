#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('/', -78);
	if(res != 570)	{
		printf("Test 217 failed:\n");
		printf("	Test 217 output: %hi\n",res);
		printf("	Test 217 expected: 570\n");
	}
	else printf("Test 217 passed\n");
	return 0;
}