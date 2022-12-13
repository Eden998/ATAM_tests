#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('{', -916569640245867354);
	printf("Test 295 output: %hi\n",res);
	assert(res == 685);
	return 0;
}