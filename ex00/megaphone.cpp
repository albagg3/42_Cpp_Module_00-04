#include <iostream>
#include <cctype>
#include <cstring>

int main(int argc, char **argv)
{
    int i;
    int j;

    i = 1;
    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    if (argc > 1)
    {
        while (argv[i])
        {
            j = 0;
            while ((size_t)j < strlen(argv[i]))
            {   
                argv[i][j] = toupper(argv[i][j]);
                j++;
            }
            if (i != argc - 1)
                std::cout << argv[i] << " ";
            else
                std::cout << argv[i];
            i++;
        }
        std::cout << std::endl;
    }  
}