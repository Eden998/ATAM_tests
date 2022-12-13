#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('#', 22173648970459679);
	if(res != 10)	{
		printf("Test 159 failed:\n");
		printf("	Test 159 output: %hi\n",res);
		printf("	Test 159 expected: 10\n");
	}
	else printf("Test 159 passed\n");
	return 0;
}