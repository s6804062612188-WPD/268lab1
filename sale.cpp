#include <stdio.h>;

int main(){
	float total, price; //the consecutive addition of prices, and total that is followed
	
	scanf("%f", &price);
	total = price;
	printf("%.2f\n", total*95/100); // one item
	
	scanf("%f", &price);
	total = total+price;
	printf("%.2f\n", total*85/100); // NOW two items
	
	scanf("%f", &price);
	total = total+price;
	printf("%.2f\n", total*70/100); // NOW three items
}
