#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above(':', -4087306748813732012);
	if(res != 14)	{
		printf("Test 191 failed:\n");
		printf("	Test 191 output: %hi\n",res);
		printf("	Test 191 expected: 14\n");
	}
	else printf("Test 191 passed\n");
	return 0;
}