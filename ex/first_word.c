#include <unistd.h>

int main(int argc, char **argv)
{
    int i;
    i = 0; 

    if (argc == 2)
    {
        if (argv[1][i] == 32 || argv[1][i] == 9)
        {
            i++;
        }
        else if ((argv[1][i] != 32 && argv[1][i] != 9) && argv[1][i])
        {
            write(1, &argv[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
}