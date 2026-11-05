/*efine an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.*/

#include <stdio.h>

enum Status
{
    SUCCESS,
    FAILURE,
    TIMEOUT
};

int main()
{
    enum Status s;

    s = SUCCESS;

    if (s == SUCCESS)
    {
        printf("Operation Successful");
    }
    else if (s == FAILURE)
    {
        printf("Operation Failed");
    }
    else if (s == TIMEOUT)
    {
        printf("Operation Timed Out");
    }

    return 0;
}