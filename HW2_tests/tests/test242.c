#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('(', 706911197537246340);
	printf("Test 242 output: %hi\n",res);
	assert(res == 87);
	return 0;
}