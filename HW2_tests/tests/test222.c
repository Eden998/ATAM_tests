#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above(')', -849234323484638129);
	printf("Test 222 output: %hi\n",res);
	assert(res == 654);
	return 0;
}