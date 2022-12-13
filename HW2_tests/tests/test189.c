#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('@', 101028025385401846);
	printf("Test 189 output: %hi\n",res);
	assert(res == 6);
	return 0;
}