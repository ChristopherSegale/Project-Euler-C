/* Author: Christopher Segale
 * Date: 01/06/2014
 */

#include "stdio.h"

int main(int argc, char* argv[])
{
    int sum = 0;

    for(int counter = 3; counter < 1000; counter++)
    {
        if(((counter % 3) == 0) || ((counter % 5) == 0))
            sum+= counter;
    }

    printf("%d\n", sum);

    return 0;
}
