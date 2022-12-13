#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('<', -63);
	if(res != 547)	{
		printf("Test 290 failed:\n");
		printf("	Test 290 output: %hi\n",res);
		printf("	Test 290 expected: 547\n");
	}
	else printf("Test 290 passed\n");
	return 0;
}