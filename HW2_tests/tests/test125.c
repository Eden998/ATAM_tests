#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('*', 4741007741839256400);
	if(res != 3)	{
		printf("Test 125 failed:\n");
		printf("	Test 125 output: %hi\n",res);
		printf("	Test 125 expected: 3\n");
	}
	else printf("Test 125 passed\n");
	return 0;
}