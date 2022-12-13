#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above(';', -7066810283821772840);
	if(res != 17)	{
		printf("Test 182 failed:\n");
		printf("	Test 182 output: %hi\n",res);
		printf("	Test 182 expected: 17\n");
	}
	else printf("Test 182 passed\n");
	return 0;
}