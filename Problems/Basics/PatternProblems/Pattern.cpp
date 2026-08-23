#include <iostream>

using namespace std;

void boxStar(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void StarStairCase(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void NumberStairCase(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << j + 1 << " ";
        }
        cout << endl;
    }
}

void RepeatedNumberStairCase(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << i + 1 << " ";
        }
        cout << endl;
    }
}

void ReverseStarStairCase(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = n; j > i; j--)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void ReverseNumberStairCase(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = n; j > i; j--)
        {
            cout << n - j + 1 << " ";
        }
        cout << endl;
    }
}

void StarPyramid(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = n - i - 1; j > 0; j--)
        {
            cout << "  ";
        }
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void ReverseStarPyramid(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "  ";
        }
        for (int j = 0; j < 2 * n - (2 * i + 1); j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void DiamondPattern(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = n - i - 1; j > 0; j--)
        {
            cout << "  ";
        }
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "  ";
        }
        for (int j = 0; j < 2 * n - (2 * i + 1); j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void RightTraingle(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    for (int i = n - 1; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void BinaryStairCase(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if ((i + j) % 2 == 0)
            {
                cout << "1 ";
            }
            else
            {
                cout << "0 ";
            }
        }
        cout << endl;
    }
}

void NumberNecklace(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << j + 1 << " ";
        }
        for (int j = 0; j < 2 * n - (2 * i) - 2; j++)
        {
            cout << "  ";
        }
        for (int j = 0; j <= i; j++)
        {
            cout << i - j + 1 << " ";
        }

        cout << endl;
    }
}

void IncrementalStairCase(int n)
{
    int x = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << x << " ";
            x++;
        }
        cout << endl;
    }
}

void AlphabetStairCase(int n)
{
    for (int i = 0; i < n; i++)
    {
        char x = 'A';
        for (int j = 0; j <= i; j++)
        {
            cout << x << " ";
            x++;
        }
        cout << endl;
    }
}

void ReverseAlphabetStairCase(int n)
{
    for (int i = 0; i < n; i++)
    {
        char x = 'A';
        for (int j = n; j > i; j--)
        {
            cout << x << " ";
            x++;
        }
        cout << endl;
    }
}

void RepeatedAlphabetStairCase(int n)
{
    char x = 'A';
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << x << " ";
        }
        x++;
        cout << endl;
    }
}

void AlphabetPyramid(int n)
{
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < n - i - 1; j++)
        {
            cout << "  ";
        }

        char x = 'A';
        for (int j = 0; j <= i; j++)
        {
            cout << x << " ";
            x++;
        }

        x = 'A' + i - 1;
        for (int j = 0; j < i; j++)
        {
            cout << x << " ";
            x--;
        }

        cout << endl;
    }
}

void DecrementalAlphabetStairCase(int n)
{
    for (int i = 0; i < n; i++)
    {
        char x = 'A' + (n - i - 1);
        for (int j = 0; j <= i; j++)
        {
            cout << x << " ";
            x++;
        }
        cout << endl;
    }
}

void EmptyStarDiamond(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << "* ";
        }

        for (int j = 0; j < 2 * i; j++)
        {
            cout << "  ";
        }

        for (int j = 0; j < n - i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << "* ";
        }

        for (int j = 0; j < 2 * i; j++)
        {
            cout << "  ";
        }

        for (int j = 0; j < n - i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void Butterfly(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }

        for (int j = 0; j < (2 * n) - (2 * (i + 1)); j++)
        {
            cout << "  ";
        }

        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }

        cout << endl;
    }
    for (int i = n - 2; i >= 0; i--)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }

        for (int j = 0; j < (2 * n) - (2 * (i + 1)); j++)
        {
            cout << "  ";
        }

        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }

        cout << endl;
    }
}

void HollowRectangle(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == 0 || j == 0 || i == n - 1 || j == n - 1)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
}

void NumberedRectangle(int n)
{
    for (int i = 0; i < (2 * n) - 1; i++)
    {
        for (int j = 0; j < (2 * n) - 1; j++)
        {
            cout << n - min(min(i, j), min(((2 * n - 1) - i - 1), ((2 * n - 1) - j - 1))) << " ";
        }
        cout << endl;
    }
}

int main()
{
    NumberedRectangle(4);

    return 0;
}