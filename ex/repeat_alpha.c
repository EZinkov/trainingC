int fr_printchar(char c)
{
    if (c >= 'a' && c <= 'z')
    {
        return c - 'a' + 1;
    } else if (c >= 'A' && c <= 'Z')
    {
        return c - 'A' + 1;
    } else
    {
        return 1;
    }
}

int main(int argc, char **argv)
{
    int i = 0;
    int count;
    if (argc == 2)
    {
        while (argv[1][i])
        {
            count = fr_printchar(argv[1][i]);
            while (count--)
            {
                write(1, &argv[1][i], 1);
            }
            i++;
        }
    }
    write(1, "\n", 1);
}