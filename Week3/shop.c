#include<stdio.h>
#include<string.h>
#include<stdlib.h>
// to compile // gcc shop.c -o shop
//to run ./shop

//product struct
struct Product{
	char* name;
	double price;
};
//product stock struct
struct ProductStock{
	struct Product product;
	int quantity;
};
//Customer struct
struct Customer{
	char* name;
	double budget;
	struct ProductStock shoppingList[10];
	int index;
};
//Shop struct
struct Shop{
	double cash;
	struct ProductStock stock[20];
	int index;
};
// print Product
void printProduct(struct Product p){
	printf("Product Name: %s \nProduct Price: %.2f\n", p.name,p.price);
	printf("--------------\n");
}
//print Customer
void printCustomer(struct Customer c){
	printf("Customer Name: %s \nCustomer Budget: %.2f\n", c.name,c.budget);
	printf("--------------\n");
	for(int i=0;i<c.index;i++){
		printProduct(c.shoppingList[i].product);
		printf("%s orders %d \n",c.name,c.shoppingList[i].quantity);
		double cost =c.shoppingList[i].quantity* c.shoppingList[i].product.price;
		printf("COST: %f\n",cost);
	}
}
//read file stock.csv and create products and stock data from that file
struct Shop createAndStockShop(){
	struct Shop shop={200};
	
	FILE * fp;
    char * line = NULL;
    size_t len = 0;
    ssize_t read;

    fp = fopen("stock.csv", "r");
    if (fp == NULL)
        exit(EXIT_FAILURE);

    while ((read = getline(&line, &len, fp)) != -1) {
        // printf("Retrieved line of length %zu:\n", read);
        // printf("%s IS A LINE", line);
		//using stringtokenizer to get data from line
		char *n = strtok(line, ",");
		char *p = strtok(NULL, ",");
		char *q = strtok(NULL, ",");
		//atoi use for converting string to integer
		int quantity = atoi(q);
		double price = atof(p);
		char *name = malloc(sizeof(char) * 50);
		strcpy(name, n);
		struct Product product = { name, price };
		struct ProductStock stockItem = { product, quantity };
		shop.stock[shop.index++] = stockItem;
		// printf("NAME OF PRODUCT %s PRICE %.2f QUANTITY %d\n", name, price, quantity);
    }
	
	return shop;
}

//print the shop data
void printShop(struct Shop s)
{
	printf("Shop has %.2f in cash\n", s.cash);
	for (int i = 0; i < s.index; i++)
	{
		printProduct(s.stock[i].product);
		printf("The shop has %d of the above\n", s.stock[i].quantity);
	}
}

// main method
int main(void){
	//struct Customer freha={"Freha",1000.0};
	//printCustomer(freha);
	
	//struct Product coke={"Can Coke",1.20};
	//struct Product bread={"Bread",2.20};
	//printProduct(coke);
	
	//struct ProductStock cokeStock={coke, 20};
	//struct ProductStock breadStock={bread, 2};
	//printf("Product %s \n quantity %d", cokeStock.product.name,cokeStock.quantity);
	//freha.shoppingList[freha.index++]=cokeStock;
	//freha.shoppingList[freha.index++]=breadStock;
	//printCustomer(freha);
	struct Shop shop=createAndStockShop();
	printShop(shop);
	
	
	return (0);
}