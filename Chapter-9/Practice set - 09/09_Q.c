#include <stdio.h>

struct Date {
    int mm;
    int dd;
    int yyyy;
};

int compare(struct Date d1, struct Date d2) {
    if (d1.yyyy > d2.yyyy) {
        return 1; // d1 is earlier
    } else if (d1.yyyy < d2.yyyy) {
        return -1; // d2 is earlier
    } else {
        if (d1.mm > d2.mm) {
            return 1; // d1 is earlier
        } else if (d1.mm < d2.mm) {
            return -1; // d2 is earlier
        } else {
            if (d1.dd > d2.dd) {
                return 1; // d1 is earlier
            } else if (d1.dd < d2.dd) {
                return -1; // d2 is earlier
            } else {
                return 0; // both dates are equal
            }
        }
    }
}

int main(){
    struct Date d1 = {12, 25, 2002};
    struct Date d2 = {11, 2, 2011};

    printf("%d", compare(d1, d2));
    return 0;
}