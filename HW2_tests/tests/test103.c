#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('_', 3260883264409258764);
	if(res != 3)	{
		printf("Test 103 failed:\n");
		printf("	Test 103 output: %hi\n",res);
		printf("	Test 103 expected: 3\n");
	}
	else printf("Test 103 passed\n");
	return 0;
}