#include "main.h" //DO NOT TOUCH

//Runs initialization code. This occurs as soon as the program is started. It is recommended to keep execution time for this mode under a few seconds.
void initialize() {

    Task baseSlewRate (baseSR, (void*)"PROS", (TASK_PRIORITY_DEFAULT - 1), TASK_STACK_DEPTH_DEFAULT, "Base Slew Rate");

}

//Runs after initialize() and before autonomous. This is intended for competition-specific initialization routines, such as an autonomous selector on the LCD.
void competition_initialize() {



}

//Runs while the robot is in the disabled state of Field Management System or the VEX Competition Switch
void disabled() {



}