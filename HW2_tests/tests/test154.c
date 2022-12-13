#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('}', -431873215816729193);
	if(res != 4)	{
		printf("Test 154 failed:\n");
		printf("	Test 154 output: %hi\n",res);
		printf("	Test 154 expected: 4\n");
	}
	else printf("Test 154 passed\n");
	return 0;
}