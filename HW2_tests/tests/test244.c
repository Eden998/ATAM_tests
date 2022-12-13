#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above(']', 737938810640006347);
	printf("Test 244 output: %hi\n",res);
	assert(res == 132);
	return 0;
}