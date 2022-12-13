#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('<', -4388479314180797492);
	if(res != 3)	{
		printf("Test 170 failed:\n");
		printf("	Test 170 output: %hi\n",res);
		printf("	Test 170 expected: 3\n");
	}
	else printf("Test 170 passed\n");
	return 0;
}