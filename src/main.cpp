#include <FEH.h>
#include <FEHIO.h>
#include <FEHMotor.h>
#include <FEHServo.h>
#include <Arduino.h>

FEHMotor right_motor(FEHMotor::Motor0,9.0);
FEHMotor left_motor(FEHMotor::Motor2,9.0);
AnalogInputPin sensor(FEHIO::Pin2);
FEHServo servo(FEHServo::Servo0);


void ERCMain()
{
    

    FEHServo servo(FEHServo::Servo0);
    servo.TouchCalibrate();
    //while(sensor.Value()>1 && sensor.Value()<6){

    
    
}