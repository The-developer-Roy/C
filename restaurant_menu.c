#include <stdio.h>

int main()
{
    int choice, n = 1, bill = 0, q=1;

    while (n == 1)
    {
        printf("Select Your Orders------>\n");
        printf("Enter 0 to confirm your order and exit\n");
        printf("MAIN COURSE\n");
        printf("Enter 11 for Fried rice----->₹150\n");
        printf("Enter 12 for Sirloin steak----->₹250\n");
        printf("Enter 13 for Grilled Salmon Fish----->₹420\n");
        printf("Enter 14 for Deep Bake Goose----->₹510\n");
        printf("APPETIZERS\n");
        printf("Enter 21 for Avocado Toast----->₹40\n");
        printf("Enter 22 for Spaghetti Pasta----->₹60\n");
        printf("Enter 23 for Chicken Pie----->₹100\n");
        printf("Enter 24 for Fish Sandwich----->₹70\n");
        printf("Enter 25 for Vegetable Salad----->₹60\n");
        printf("DRINKS\n");
        printf("Enter 31 for Mineral Water----->₹10\n");
        printf("Enter 32 for Jasmine Tea----->₹30\n");
        printf("Enter 33 for Espresso----->₹30\n");
        printf("Enter 34 for Black Coffee----->₹30\n");
        printf("Enter 35 for Plain Coffee----->₹20\n");
        printf("Enter 36 for Tea----->₹20\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 11:
        {
            printf("Quantity: ");
            scanf("%d", &q);
            bill += (150*q);
            break;
        }
        case 12:
        {
            printf("Quantity: ");
            scanf("%d", &q);
            bill += (250*q);
            break;
        }
        case 13:
        {
            printf("Quantity: ");
            scanf("%d", &q);
            bill += (420*q);
            break;
        }
        case 14:
        {
            printf("Quantity: ");
            scanf("%d", &q);
            bill += (510*q);
            break;
        }
        case 21:
        {
            printf("Quantity: ");
            scanf("%d", &q);
            bill += (40*q);
            break;
        }
        case 22:
        {
            printf("Quantity: ");
            scanf("%d", &q);
            bill += (60*q);
            break;
        }
        case 23:
        {
            printf("Quantity: ");
            scanf("%d", &q);
            bill += (100*q);
            break;
        }
        case 24:
        {
            printf("Quantity: ");
            scanf("%d", &q);
            bill += (70*q);
            break;
        }
        case 25:
        {
            printf("Quantity: ");
            scanf("%d", &q);
            bill += (60*q);
            break;
        }
        case 31:
        {
            printf("Quantity: ");
            scanf("%d", &q);
            bill += (10*q);
            break;
        }
        case 32:
        {
            printf("Quantity: ");
            scanf("%d", &q);
            bill += (30*q);
            break;
        }
        case 33:
        {
            printf("Quantity: ");
            scanf("%d", &q);
            bill += (30*q);
            break;
        }
        case 34:
        {
            printf("Quantity: ");
            scanf("%d", &q);
            bill += (30*q);
            break;
        }
        case 35:
        {
            printf("Quantity: ");
            scanf("%d", &q);
            bill += (20*q);
            break;
        }
        case 36:
        {
            printf("Quantity: ");
            scanf("%d", &q);
            bill += (20*q);
            break;
        }
        case 0:
        {
            n = 0;
            printf("The bill for your orders is: %d", bill);
            break;
        }
        default:
        {
            printf("Invalid Choice!!!");
            break;
        }
        }
    }

    return 0;
}