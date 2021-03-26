#include <stdio.h>
#include <stdlib.h>

struct item{
	char *itemName;
	int qty;
	float price;
	float amount;

};
void readItem(struct item *i){
	printf("Enter product name: ");
	scanf("%s", i->itemName);
	printf("\nEnter pirce: ");
	scanf("%f", &i->price);
	printf("\nEnter quanity: ");
	scanf("%d", &i->qty);
	i->amount=(float)i->qty * i->price;


}
void printItem(struct item *i){
	printf("\nName: %s",i->itemName);	
	printf("\nPrice: %f",i->price);	
	printf("\nQuantity: %d",i->qty);	
	printf("\nAmount: %f",i->amount);	
}

int main(void){
	struct item itm;
	struct item *pItem;
	
	pItem =&itm;

	pItem->itemName=(char *)malloc(8);
	
	if(pItem==NULL)
		exit(-1);
	readItem(pItem);
	//print item		
	printItem(pItem);
	free(pItem->itemName);
	return 0;
}
