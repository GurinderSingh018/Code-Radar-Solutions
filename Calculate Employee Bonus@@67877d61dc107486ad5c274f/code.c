#include <stdio.h>

struct Employee {
    int id;
    char name[10];
    int salary;
};

int main() {
    int len;
    scanf("%d", &len);
    struct Employee employee[len];

    for (int i = 0; i < len; i++) {
        scanf("%d %s %d", &employee[i].id, employee[i].name, &employee[i].salary);
    }

    for (int i = 0; i < len; i++) {
        float bonus;
        if (employee[i].salary >= 50000) {
            bonus= 0.05*employee[i].salary;
        } else {
            bonus= 0.1*employee[i].salary;
        }
        

        printf("Employee ID: %d, Name: %s, Bonus: %.2f\n", employee[i].id, employee[i].name,bonus);
    }

    return 0;
}