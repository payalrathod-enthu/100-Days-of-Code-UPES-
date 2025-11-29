#include <stdio.h>

int main() {
    // Enumeration for traffic lights
    enum TrafficLight {RED, YELLOW, GREEN};
    
    enum TrafficLight light;

    // Take input for light (0 = RED, 1 = YELLOW, 2 = GREEN)
    printf("Enter traffic light value (0 = RED, 1 = YELLOW, 2 = GREEN): ");
    scanf("%d", (int*)&light); // cast to int* for scanf

    // Determine action
    switch(light) {
        case RED:
            printf("Stop\n");
            break;
        case YELLOW:
            printf("Wait\n");
            break;
        case GREEN:
            printf("Go\n");
            break;
        default:
            printf("Invalid traffic light value!\n");
    }

    return 0;
}
