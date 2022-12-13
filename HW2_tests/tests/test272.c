#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('&', -684762265871915038);
	printf("Test 272 output: %hi\n",res);
	assert(res == 687);
	return 0;
}