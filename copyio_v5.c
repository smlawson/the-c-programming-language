#include <stdio.h>

/* more direct verification that the expression (getchar() != EOF) is 0 or 1 */

main()
{
    printf("%d\n", (getchar() != EOF));
}
