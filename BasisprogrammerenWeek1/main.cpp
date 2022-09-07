#include <stdio.h>


int main(void) {

	int a;
	int b;
	int c;


	printf("voer een geheel getal in..");
	scanf_s("%d", &a);

	printf("voer een geheel getal in..");
	scanf_s("%d", &b);

	c = a * b;

	if (b > 9) {

		printf("het ingevoerde getal was groter dan 9 \n");

	}
	else if (b < 9) {

		printf("het ingevoerde getal was kleiner dan 9 \n");

	}
	else if (b = 9) {

		printf("het getal is gelijk aan 9 \n");
	}


	printf("A keer B is: %d", c);


	return 0;
}