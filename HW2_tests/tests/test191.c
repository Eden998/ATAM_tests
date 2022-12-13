#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('*', -854683176087072456);
	printf("Test 191 output: %hi\n",res);
	assert(res == 0);
	return 0;
}