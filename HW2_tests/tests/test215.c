#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('*', -74);
	if(res != 92)	{
		printf("Test 215 failed:\n");
		printf("	Test 215 output: %hi\n",res);
		printf("	Test 215 expected: 92\n");
	}
	else printf("Test 215 passed\n");
	return 0;
}