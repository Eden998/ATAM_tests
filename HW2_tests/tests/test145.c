#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('$', -8996927046514404723);
	if(res != 6)	{
		printf("Test 145 failed:\n");
		printf("	Test 145 output: %hi\n",res);
		printf("	Test 145 expected: 6\n");
	}
	else printf("Test 145 passed\n");
	return 0;
}