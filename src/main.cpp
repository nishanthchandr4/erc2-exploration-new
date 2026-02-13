#include <FEH.h>
#include <FEHIO.h>
#include <FEHMotor.h>
#include <FEHServo.h>
#include <Arduino.h>


AnalogInputPin sensor(FEHIO::Pin2);


void ERCMain()
{
    // Your code here!
    sensor.Value();

    // Or just use the TestGUI function
    TestGUI();

}