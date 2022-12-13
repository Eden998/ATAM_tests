#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('#', -64);
	if(res != 621)	{
		printf("Test 296 failed:\n");
		printf("	Test 296 output: %hi\n",res);
		printf("	Test 296 expected: 621\n");
	}
	else printf("Test 296 passed\n");
	return 0;
}