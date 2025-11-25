// program to take item_name, quantity, and price as input, calculate amount=quantity×price, and display all item details.
#include <stdio.h>
struct item
{
    char item_name[100];
    int quantity;
    float price;
    float amount;
};

int main()
{

    printf("Enter number of items");
    int n;
    scanf("%d",&n);
    struct item arr[n];
    for(int i=0;i<n;i++)
    {
    printf("Enter item name: ");
    scanf("%s", arr[i].item_name);
    printf("Enter quantity: ");
    scanf("%d", &arr[i].quantity);
    printf("Enter price: ");
    scanf("%f", &arr[i].price);
    }
    for(int i=0;i<n;i++)
    {
    printf("\nItem: %s", arr[i].item_name);
    printf("\nQuantity: %d", arr[i].quantity);
    printf("\nPrice: %f", arr[i].price);
    arr[i].amount = arr[i].quantity * arr[i].price;
    printf("\nAmount = %f\n", arr[i].amount);
    }
}