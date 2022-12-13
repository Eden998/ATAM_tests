#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('_', 8392238975090836539);
	if(res != 0)	{
		printf("Test 127 failed:\n");
		printf("	Test 127 output: %hi\n",res);
		printf("	Test 127 expected: 0\n");
	}
	else printf("Test 127 passed\n");
	return 0;
}