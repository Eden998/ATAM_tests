#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above(':', -156122860899162954);
	printf("Test 152 output: %hi\n",res);
	assert(res == 13);
	return 0;
}