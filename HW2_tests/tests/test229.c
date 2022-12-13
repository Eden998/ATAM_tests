#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('~', 256968090472002915);
	printf("Test 229 output: %hi\n",res);
	assert(res == 275);
	return 0;
}