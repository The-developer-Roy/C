#include<stdio.h>

int main(){
    int i, hw, overtime, atbp;
    i = 0;
    while (i++<10)
    {
        printf("Enter the number of hours you worked: ");
        scanf("%d\n", &hw);
        if (hw>40)
        {
            overtime = hw - 40;
            atbp = overtime * 12;
            printf("Your extra aamount to be paid is: Rs.%d\n", atbp);
        } else{
            printf("You have no overtime.\n");
        }
    }
    return 0;
}