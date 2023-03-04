#include <kipr/wombat.h>

int main()
{
enable_servos();
set_servo_position(3,100);
msleep(2000);
set_servo_position(3,-100);
msleep(2000);
disable_servos();
    return 0;
}
