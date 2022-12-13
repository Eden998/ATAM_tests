#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('_', -4701532697694385194);
	if(res != 4)	{
		printf("Test 174 failed:\n");
		printf("	Test 174 output: %hi\n",res);
		printf("	Test 174 expected: 4\n");
	}
	else printf("Test 174 passed\n");
	return 0;
}