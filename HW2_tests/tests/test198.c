#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('[', 3448291389935860391);
	if(res != 5)	{
		printf("Test 198 failed:\n");
		printf("	Test 198 output: %hi\n",res);
		printf("	Test 198 expected: 5\n");
	}
	else printf("Test 198 passed\n");
	return 0;
}