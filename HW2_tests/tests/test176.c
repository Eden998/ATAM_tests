#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('&', 618516331845149631);
	printf("Test 176 output: %hi\n",res);
	assert(res == 1);
	return 0;
}