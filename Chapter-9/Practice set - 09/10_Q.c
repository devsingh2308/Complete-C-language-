#include <stdio.h>

typedef struct Date
{
    int mm;
    int dd;
    int yyyy;
} DT;

int compare(DT d1, DT d2)
{
    if (d1.yyyy > d2.yyyy)
    {
        return 1; // d1 is earlier
    }
    else if (d1.yyyy < d2.yyyy)
    {
        return -1; // d2 is earlier
    }
    else
    {
        if (d1.mm > d2.mm)
        {
            return 1; // d1 is earlier
        }
        else if (d1.mm < d2.mm)
        {
            return -1; // d2 is earlier
        }
        else
        {
            if (d1.dd > d2.dd)
            {
                return 1; // d1 is earlier
            }
            else if (d1.dd < d2.dd)
            {
                return -1; // d2 is earlier
            }
            else
            {
                return 0; // both dates are equal
            }
        }
    }
}

int main()
{
    DT d1 = {12, 25, 2002};
    DT d2 = {11, 2, 2011};

    printf("%d", compare(d1, d2));
    return 0;
}