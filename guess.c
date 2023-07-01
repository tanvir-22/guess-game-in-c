#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    const int max=100;
    const int min=1;
    int answer=0,guess=0,guesses=0;
    srand(time(0));
    answer=(rand()%max)+min;
    do
    {
        printf("Enter a number between 1 to 100: \n");
    scanf("%d",&guess);
    if(guess>answer)
    {
        printf("too high!!\n");
    }
    else if(guess<answer)
    {
        printf("too low!!\n");
    }
    else{
        printf("correct!that's the number!!\n");
    }
    guesses++;
    } while (guess!=answer);
    
    printf("#################\n");
    printf("Answer: %d\n",answer);
    printf("your score is : %d\n",guesses);
    printf("#################\n");
    return 0;
}