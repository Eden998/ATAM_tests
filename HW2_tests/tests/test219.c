#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('_', 84);
	printf("Test 219 output: %hi\n",res);
	assert(res == 68);
	return 0;
}