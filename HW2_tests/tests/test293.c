#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('(', 26);
	if(res != 299)	{
		printf("Test 293 failed:\n");
		printf("	Test 293 output: %hi\n",res);
		printf("	Test 293 expected: 299\n");
	}
	else printf("Test 293 passed\n");
	return 0;
}