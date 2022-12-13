#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('[', -315901145779012962);
	printf("Test 228 output: %hi\n",res);
	assert(res == 453);
	return 0;
}