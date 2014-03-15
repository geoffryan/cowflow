#include <stdio.h>
#include "cowflow.h"

int main(int argc, char *argv[])
{
    cow_init(argc, argv, 0);

    cow_finalize();

    return 0;
}
