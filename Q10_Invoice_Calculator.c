#include <stdio.h>

int main()
{
    int productID, quantity;
    float price, discountPercentage;
    float subtotal, discountAmount, finalAmount;

    printf("Enter Product ID: ");
    scanf("%d", &productID);

    printf("Enter Product Price: ");
    scanf("%f", &price);

    printf("Enter Quantity: ");
    scanf("%d", &quantity);

    printf("Enter Discount Percentage: ");
    scanf("%f", &discountPercentage);

    subtotal = price * quantity;
    discountAmount = subtotal * discountPercentage / 100;
    finalAmount = subtotal - discountAmount;

    printf("Product ID: %d\n", productID);
    printf("Subtotal: %.2f\n", subtotal);
    printf("Discount Amount: %.2f\n", discountAmount);
    printf("Final Payable Amount: %.2f\n", finalAmount);

    return 0;
}