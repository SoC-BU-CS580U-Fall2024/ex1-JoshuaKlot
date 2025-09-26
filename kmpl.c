#include <stdio.h>

int main(){
    int distance;
    printf("WHat is the distance traveled(km)\n");
    scanf("%d", &distance);
    printf("Hw many liters were used?\n");
    float liters;
    scanf("%f", &liters);
    float mpg = distance / liters;
    printf("You went %.2f km per liter\n", mpg);
}