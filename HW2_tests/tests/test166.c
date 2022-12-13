#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('@', 1794058601089603269);
	if(res != 7)	{
		printf("Test 166 failed:\n");
		printf("	Test 166 output: %hi\n",res);
		printf("	Test 166 expected: 7\n");
	}
	else printf("Test 166 passed\n");
	return 0;
}