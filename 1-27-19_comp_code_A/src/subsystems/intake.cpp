#include "main.h"

void runIntake(float voltPerc) {

    intake.move_voltage((voltPerc / 100) * 12000); //run the cap flip motor from a % of -100-100

}