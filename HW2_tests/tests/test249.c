#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('_', -5);
	if(res != 448)	{
		printf("Test 249 failed:\n");
		printf("	Test 249 output: %hi\n",res);
		printf("	Test 249 expected: 448\n");
	}
	else printf("Test 249 passed\n");
	return 0;
}