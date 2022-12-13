#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above(';', 50078025664408785);
	if(res != 12)	{
		printf("Test 101 failed:\n");
		printf("	Test 101 output: %hi\n",res);
		printf("	Test 101 expected: 12\n");
	}
	else printf("Test 101 passed\n");
	return 0;
}