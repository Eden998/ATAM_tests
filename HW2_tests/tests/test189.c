#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('>', -4713100344819022593);
	if(res != 4)	{
		printf("Test 189 failed:\n");
		printf("	Test 189 output: %hi\n",res);
		printf("	Test 189 expected: 4\n");
	}
	else printf("Test 189 passed\n");
	return 0;
}