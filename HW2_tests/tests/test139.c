#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above(':', 3855495150189715492);
	if(res != 5)	{
		printf("Test 139 failed:\n");
		printf("	Test 139 output: %hi\n",res);
		printf("	Test 139 expected: 5\n");
	}
	else printf("Test 139 passed\n");
	return 0;
}