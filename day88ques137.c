/*Print all enum names and integer values using a loop.*/


#include <stdio.h>

enum Days {
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY,
    SUNDAY
};

int main() {
    const char *dayNames[] = {
        "MONDAY",
        "TUESDAY",
        "WEDNESDAY",
        "THURSDAY",
        "FRIDAY",
        "SATURDAY",
        "SUNDAY"
    };

    int i;

    for (i = MONDAY; i <= SUNDAY; i++) {
        printf("%s = %d\n", dayNames[i], i);
    }

    return 0;
}
