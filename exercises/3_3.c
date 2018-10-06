#include	"unp.h"

int
main(int argc, char **argv)
{
    struct in_addr addr;
    if (inet_aton(argv[1], &addr) == 0) {
        printf("Address: %s\n", addr);
        exit(EXIT_FAILURE);
    }

    exit(0);
}
