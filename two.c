#include <stdio.h>
#include <ctype.h>
#include <string.h>


struct node{
    char *name;
    int quantity;
    float price;
    struct node *next;
};

void mostValuable(struct node *first);

int main(){
    struct node first;
    first.name = "Flashlight";
    first.quantity = 10;
    first.price = 10.99;

    struct node second;
    second.name = "Eraser";
    second.quantity = 100;
    second.price = 0.99;

    struct node third;
    third.name = "Silver Ring";
    third.quantity = 2;
    third.price = 44.99;

    third.next = NULL;
    second.next = &third;
    first.next = &second;

    struct node *list = &first;
    mostValuable(list);
}

void mostValuable(struct node *first){
    struct node *c = first;
    
    struct node *maxprice = first;
    struct node *maxquant = first;
    struct node *maxvalue = first;

    while(c != NULL){
        // printf("%s\n", (*c).name);
        if(c->price > maxprice->price){
            maxprice = c;
        }
        if(c->quantity > maxquant->quantity){
            maxquant = c;
        }
        if((c->price * c->quantity) > (maxvalue->price * maxvalue->quantity)){
            maxvalue = c;
        }

        c = c->next;
    }

    printf("Item with highest price:    %s\n", maxprice->name);
    printf("Item with highest quantity: %s\n", maxquant->name);
    printf("Item with highest value:    %s\n", maxvalue->name);
}
