#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above(')', 58);
	if(res != 214)	{
		printf("Test 298 failed:\n");
		printf("	Test 298 output: %hi\n",res);
		printf("	Test 298 expected: 214\n");
	}
	else printf("Test 298 passed\n");
	return 0;
}