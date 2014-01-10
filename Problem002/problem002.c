/* Author: Christopher Segale
 * Date: 01/10/2014
 */

#include "stdio.h"

int main(int argc, char* argv[])
{
    int past_term = 1;
    int current_term = 2;
    int sum = 2;

    while(current_term < 4000000)
    {
        current_term+= past_term;
        past_term = current_term - past_term;

        if((current_term % 2) == 0)
            sum+= current_term;
    }

    printf("%d\n", sum);
}
