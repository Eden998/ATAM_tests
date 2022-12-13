#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('?', 4706162572635212354);
	if(res != 3)	{
		printf("Test 133 failed:\n");
		printf("	Test 133 output: %hi\n",res);
		printf("	Test 133 expected: 3\n");
	}
	else printf("Test 133 passed\n");
	return 0;
}