#include <stdio.h>

int main(){
    printf("What is your employee ID?\n");


    int id;
    scanf("%d", &id);
    printf("What is your hourly pay rate?\n");
    float rate;
    scanf("%f", &rate);
    printf("How many hours did you work this week?\n");
    float hours;
    scanf("%f", &hours);
    float salary = rate * hours;
    printf("Employee ID %d earned %.2f dollars this week\n", id,salary);

}