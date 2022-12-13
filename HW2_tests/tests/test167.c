#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above(';', -313440823097214481);
	if(res != 4)	{
		printf("Test 167 failed:\n");
		printf("	Test 167 output: %hi\n",res);
		printf("	Test 167 expected: 4\n");
	}
	else printf("Test 167 passed\n");
	return 0;
}