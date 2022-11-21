#include <stdio.h>
#include <stdlib.h>
#include "stat1.h"
#include <string.h>
int main()
{   
    int b ;
    int x=nbreclamation("Liste.txt" ,&b);
    printf("le nombre des réclamations de cette liste electorale est: %d\n",x);
    return 0;
}
