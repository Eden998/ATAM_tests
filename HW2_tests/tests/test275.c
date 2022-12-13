#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('^', 0);
	if(res != 117)	{
		printf("Test 275 failed:\n");
		printf("	Test 275 output: %hi\n",res);
		printf("	Test 275 expected: 117\n");
	}
	else printf("Test 275 passed\n");
	return 0;
}