

#include <stdio.h>

int main()
{
    
    int withdrawal = 0;
    int hundred = 0;
    int fifty = 0;
    int twenty = 0;
    int ten = 0;
    int five = 0;
    int one = 0;
    int remainder1 = 0;
    int remainder2 = 0;
    int remainder3 = 0;
    int remainder4 = 0;
    int remainder5 = 0;

    
    printf("Please enter the amount of money you wish to withdraw:");
    scanf("%d", &withdrawal);
    
    hundred = withdrawal / 100;
    remainder1= withdrawal - 100*hundred;
    fifty= remainder1 / 50;
    remainder2 = withdrawal - (hundred*100) - (fifty *50);
    twenty = remainder2 / 20;
    remainder3 = withdrawal - (hundred*100) - (fifty *50) - (twenty*20);
    ten= remainder3 / 10;
    remainder4 = withdrawal - (hundred*100) - (fifty *50) - (twenty*20) - (ten*10);
    five= remainder4 / 5;
    remainder5 = withdrawal - (hundred*100) - (fifty *50) - (twenty*20) - (ten*10) -(five*5);
    one=remainder5;
    
    printf("You received %d hundred(s)\n ", hundred);
    printf("You received %d fifty(s)\n",fifty);
    printf("You received %d twenty(s)\n",twenty);
    printf("You received %d ten(s)\n",ten);
    printf("You received %d five(s)\n",five);
    printf("You received %d one(s)\n",one);
    
    
    return 0;
}
