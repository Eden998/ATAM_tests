#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('*', -631436384718350514);
	printf("Test 102 output: %hi\n",res);
	assert(res == 13);
	return 0;
}