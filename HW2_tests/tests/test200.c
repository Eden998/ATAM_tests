#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above(')', -1250388895498517109);
	if(res != 8)	{
		printf("Test 200 failed:\n");
		printf("	Test 200 output: %hi\n",res);
		printf("	Test 200 expected: 8\n");
	}
	else printf("Test 200 passed\n");
	return 0;
}