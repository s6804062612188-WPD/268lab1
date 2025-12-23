#include <stdio.h>

int main(){
	float total, price; //the consecutive addition of prices, and total that is followed
	
	scanf("%f", &price);
	total = price;
	printf("%.2f\n", total*95/100); // one item
	printf("vat7%%:\t%.2f\n", total*95/100*107/100); // one item, with 7% vat
	
	scanf("%f", &price);
	total = total+price;
	printf("%.2f\n", total*85/100); // NOW two items
	printf("vat7%%:\t%.2f\n", total*85/100*107/100); // NOW two items, with 7% vat
	
	scanf("%f", &price);
	total = total+price;
	printf("%.2f\n", total*70/100); // NOW three items
	printf("vat7%%:\t%.2f\n", total*70/100*107/100); // NOW three items, with 7% vat
}
