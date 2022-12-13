#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('!', -5232436001502231190);
	if(res != 12)	{
		printf("Test 104 failed:\n");
		printf("	Test 104 output: %hi\n",res);
		printf("	Test 104 expected: 12\n");
	}
	else printf("Test 104 passed\n");
	return 0;
}