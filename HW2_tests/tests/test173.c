#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('_', -775704844489540038);
	printf("Test 173 output: %hi\n",res);
	assert(res == 3);
	return 0;
}