#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('@', 8544650071784380003);
	if(res != 2)	{
		printf("Test 157 failed:\n");
		printf("	Test 157 output: %hi\n",res);
		printf("	Test 157 expected: 2\n");
	}
	else printf("Test 157 passed\n");
	return 0;
}