#include <iostream>
#include <fstream>

char *compte(char *ar)
{
    int i = 0;
    char *s = NULL;

    for (i = 0; ar[i] != '\0'; i++);
    //s = malloc(sizeof(char) * i + 1);
    s = new char[i + 1];
    return s;
}

void re(char *s, char *ar1, char *ar2, std::ifstream *ifs, std::ofstream *ofs)
{
    int i;
    char c;

    s[0] = ar1[0];
    for (i = 0; ar1[i] != '\0'; i++);
    int j = i;
    for (i = 1; ar1[i] != 0; i++)
    {
        ifs->get(c);
        if (c == ar1[i])
            s[i] = ar1[i];
        else
            break;
    }
    if (ar1[i] == 0)
        *ofs << ar2;
    else 
        *ofs << s;
}

int main(int argc, char **argv)
{
    char *s;
    int i = 0;

    if (argc < 4)
        return 0;
    std::ifstream ifs(argv[1]);
    std::ofstream ofs("test2", std::ofstream::out | std::ofstream::trunc);
    
    if (!ifs.is_open() || !ofs.is_open())
    {
        std::cerr << "impossible douvrire le fichier" << std::endl;
        return 1;
    }
    s = compte(argv[2]);
    char c;

    while (ifs.get(c))
    {
        if (c == argv[1][0])
            re(s, argv[1], argv[2], &ifs, &ofs);
        else
            ofs << c;
    }
    delete [] (s);
    ifs.close();
    ofs.close();

    return 0;
}