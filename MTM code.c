int main()
{
    //attachment starts in vertical position
    //make sure to start at beginning position (0)
    printf("Hello World\n");
    enable_servos();
    set_servo_position(3,2047);
    msleep(800);
    set_servo_position(3,1644);
    msleep(800);
    set_servo_position(3,2047);
    msleep(800);
    set_servo_position(3,1644);
    msleep(800);
    set_servo_position(3,0);
    msleep(800);
    set_servo_position(3,2047);
    msleep(800);
    set_servo_position(3,1644);
    msleep(800);
    set_servo_position(3,2047);
    msleep(800);
    set_servo_position(3,1644);
    msleep(800);
    set_servo_position(3,0);
    msleep(800);
    set_servo_position(3,2047);
    msleep(800);
    set_servo_position(3,1644);
    msleep(800);
    set_servo_position(3,2047);
    msleep(800);
    set_servo_position(3,1644);
    msleep(800);
    set_servo_position(3,0);
    msleep(800);
    return 0;
}
