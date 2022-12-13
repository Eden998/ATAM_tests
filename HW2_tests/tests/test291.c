#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('{', 423069178764259894);
	printf("Test 291 output: %hi\n",res);
	assert(res == 64);
	return 0;
}