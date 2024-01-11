#include <iostream>
using  namespace std;


//void megaphone(char **argv, int argc)


class Megaphone {
    public:

    void megaphone(char **argv, int argc)
    {
        int i = 1, j;
        while (i < argc)
        {
            j = 0;
            while (argv[i][j])
            {
                if (argv[i][j] >= 'a' && argv[i][j] <= 'z')
                    argv[i][j] = argv[i][j] - 32;
                j++;
            }
            cout << argv[i];
            if (i + 1 < argc)
                cout << " ";
            else
                cout << endl;
            i++;
        }
    }
};


int main(int argc, char **argv)
{
    Megaphone   alpha;
    if (argc == 1)
        cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << endl;
    else
        alpha.megaphone(argv, argc);
}
