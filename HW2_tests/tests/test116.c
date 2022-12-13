#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('!', 3822007547416765915);
	if(res != 2)	{
		printf("Test 116 failed:\n");
		printf("	Test 116 output: %hi\n",res);
		printf("	Test 116 expected: 2\n");
	}
	else printf("Test 116 passed\n");
	return 0;
}