#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above(')', 74);
	printf("Test 211 output: %hi\n",res);
	assert(res == 109);
	return 0;
}