#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above(')', -117771769026687107);
	printf("Test 130 output: %hi\n",res);
	assert(res == 0);
	return 0;
}