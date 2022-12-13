#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('_', -4926004953146022245);
	if(res != 13)	{
		printf("Test 148 failed:\n");
		printf("	Test 148 output: %hi\n",res);
		printf("	Test 148 expected: 13\n");
	}
	else printf("Test 148 passed\n");
	return 0;
}