#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('%', 763379227942581472);
	printf("Test 250 output: %hi\n",res);
	assert(res == 38);
	return 0;
}