#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('}', 6536682772784544128);
	if(res != 3)	{
		printf("Test 184 failed:\n");
		printf("	Test 184 output: %hi\n",res);
		printf("	Test 184 expected: 3\n");
	}
	else printf("Test 184 passed\n");
	return 0;
}