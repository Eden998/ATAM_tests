#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('|', 82);
	printf("Test 290 output: %hi\n",res);
	assert(res == 79);
	return 0;
}