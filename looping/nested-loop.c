#include <stdio.h>
const int STAR = 10;

int main(void)
{
    int i, j;
    int outer_loop = STAR + (STAR - 1);

    for (i = 1; i <= outer_loop; i++)
    {
        if (i <= STAR)
        {
            for (j = 1; j <= i; j++)
            {
                printf("*");
            }
        }
        else
        {
            for (j = 1; j <= outer_loop - i + 1; j++)
            {
                printf("*");
            }
        }
        printf("\n");
    }

    return 0;
}

/*

*
**
***
****
*****
****
***
**
*


space 4 3 2 1 0
* 1 3 5 7 9
\n 1 2 3 4 5

    *
   ***
  *****
 *******
*********

*/