#include <stdio.h>

/* verification that the expression (getchar() != EOF) is 0 or 1 */

main()
{
    int c;

    while ((c = getchar()) != EOF)
        printf("%d\n", (c != EOF));
}
