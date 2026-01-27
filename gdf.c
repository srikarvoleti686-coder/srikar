#include<stdio.h>
#include<stdlib.h>
struct AI_sensor

{
    int id;
    char name[20];
    float readings[100];
    float safe_min;
    float safe_max;
};
void validate_sensor(struct AI_sensor *s, float new_value)
{
        s->readings[0] = new_value; 
   printf("\n[CHECKING] ID: %d| TYPE: %s\n", s->id, s->name);
      if (s->readings[0] < s->safe_min || s->readings[0] > s->safe_max)
       {
        printf("[CRITICAL ALERT] %s reading %.2f is OUTSIDE safety bounds (%.1f - %.1f)!\n", 
               s->name, s->readings[0], s->safe_min, s->safe_max);
    } else 
    {
        printf("[STABLE] %s verified. Status: Nominal.\n", s->name);
    }
}
int main()
{
    struct AI_sensor lidar = {101, "lidar",{50.0},0.0,100.0};
    float input_value;
    char choice;
    while(1)
    {
        printf("/n CURRENT LIDAR reading: %.2f\n", lidar.readings[0]);
        printf("\n ENTER NEW READING(OR -1 TO EXIT): ");
        scanf("%f", &input_value);
        if(input_value == -1)
        {
           validate_sensor(&lidar, input_value);
            break;
        }
    }
    struct AI_sensor camera = {102, "ALTITUDE",{1500.0},0.0,1200.0};
    struct AI_sensor ultrasonic = {103, "ultrasonic",{75.0},20.0,80.0};
    validate_sensor(&lidar, 45.5);
    validate_sensor(&camera, 1500.0);
    validate_sensor(&ultrasonic, 75.0);
    return 0;
}

