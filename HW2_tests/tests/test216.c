#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above(' ', 80);
	printf("Test 216 output: %hi\n",res);
	assert(res == 19);
	return 0;
}