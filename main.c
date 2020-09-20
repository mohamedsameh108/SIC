#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dollars;
    printf("Enter the price in Dollar\n");
    scanf("%d", &dollars);
    int egp = dollars * 15.75;
    printf("The price in EGP = %d EGP\n" , egp);
    main1();
    return 0;
}
int main1()
{
    printf("Press 1 to restart or 0 to exit\n");
    int re;
    scanf("%d", &re);
    if (re == 1){
        main();}

    else if (re == 0){
        printf("Good bye\n");
    }
    else {
        printf("I don't understand\n");
        main1();
    }
    return 0;
}
