#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('}', 7631262314688037569);
	if(res != 0)	{
		printf("Test 165 failed:\n");
		printf("	Test 165 output: %hi\n",res);
		printf("	Test 165 expected: 0\n");
	}
	else printf("Test 165 passed\n");
	return 0;
}