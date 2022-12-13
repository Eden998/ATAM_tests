#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('*', 490775818307951903);
	printf("Test 171 output: %hi\n",res);
	assert(res == 7);
	return 0;
}