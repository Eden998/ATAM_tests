#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above(')', -5694549124905383156);
	if(res != 0)	{
		printf("Test 153 failed:\n");
		printf("	Test 153 output: %hi\n",res);
		printf("	Test 153 expected: 0\n");
	}
	else printf("Test 153 passed\n");
	return 0;
}