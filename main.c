#include "main.h"

#include <stdio.h>

int main()
{
    int Trange, t;
    scanf("%d", &Trange);
    initRangeTime(Trange);
    while (scanf("%d", &t) != EOF) {
        int r = callPing(t);
        printf("%d\n", r);
    }
    return 0;
}