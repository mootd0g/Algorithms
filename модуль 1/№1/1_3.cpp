#include <iostream>

using namespace std;

int calculate_evclid(int a, int b) {
	while ( a != 0 && b != 0 ) {
		if (a > b) {
			a %= b;
		}
		else {
			b %= a;
		}
	}
	return (a + b);
}

int calculate_lcm(int a, int b) {
	return (a * b) / calculate_evclid(a, b);
}

int main() {
	int a_first_numerator, b, c_second_numerator, d, gcd; // n/m + k/l = m/n
	printf("pres numbers n,m,k,l: ");

	scanf("%d %d %d %d", &a_first_numerator, &b, &c_second_numerator, &d);
	printf("\n%d/%d + %d/%d = ", a_first_numerator, b, c_second_numerator, d);

	int complete_denumenator = calculate_lcm(b, d);

	a_first_numerator *= complete_denumenator / b;
	c_second_numerator *= complete_denumenator / d;

	gcd = calculate_evclid( a_first_numerator + c_second_numerator, complete_denumenator );

	printf("%d / %d\n", (a_first_numerator + c_second_numerator) / gcd, complete_denumenator / gcd);
	return 0;
}
