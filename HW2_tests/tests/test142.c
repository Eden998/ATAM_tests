#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('[', -4035968256261099182);
	if(res != 3)	{
		printf("Test 142 failed:\n");
		printf("	Test 142 output: %hi\n",res);
		printf("	Test 142 expected: 3\n");
	}
	else printf("Test 142 passed\n");
	return 0;
}