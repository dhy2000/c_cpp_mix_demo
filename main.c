#include "main.h"

#include <stdio.h>

int main()
{
    // int Trange, t;
    /*scanf("%d", &Trange);
    initRangeTime(Trange);
    while (scanf("%d", &t) != EOF) {
        int r = callPing(t);
        printf("%d\n", r);
    }*/

    int op, x;
    while (scanf("%d", &op) != EOF) {
        switch (op) {
            case 1:
                scanf("%d", &x);
                pushQ(x);
                break;
            case 2:
                popQ();
                break;
            case 3:

                printf("%d\n", frontQ());
        }
    }

    return 0;
}