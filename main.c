#include <stdio.h>
#include <stdlib.h>

int main()
{
    float price;
    int menu;
    printf("Press 1 to convert from Dollar to EGP \nPress 2 to convert from EGP to Dollar\n");
    scanf("%d", &menu);
    if (menu == 1){
        printf("Enter the price in Dollar\n");
        scanf("%f", &price);
        float egp = price * 15.74;
        printf("The price in EGP = %f EGP \nor = %d EGP\n" , egp,(int)egp);
    }
    else if (menu == 2){
        printf("Enter the price in EGP\n");
        scanf("%f", &price);
        float egp = price * 0.064;
        printf("The price in Dollar = %f $ \nor = %d $\n" , egp,(int)egp);
    }
    else{
        printf("I didn't understand You\n");
        main();
    }

    main1();
    return 0;
}
int main1()
{
    printf("Press 1 to restart \nPress 0 to exit\n");
    int re;
    scanf("%d", &re);
    if (re == 1){
        main();}

    else if (re == 0){
        printf("Good bye\n");
        exit(0);
    }
    else {
        printf("I didn't understand You\n");
        main1();
    }
    return 0;
}
