#pragma config(Sensor, dgtl1,  Encoder,        sensorQuadEncoder)
#pragma config(Motor,  port1,           frontLeft,     tmotorVex393_HBridge, openLoop, reversed)
#pragma config(Motor,  port2,           frontRight,    tmotorVex393_MC29, openLoop, reversed)
#pragma config(Motor,  port3,           Leftfw,        tmotorVex393_MC29, openLoop, reversed)
#pragma config(Motor,  port4,           intake,        tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port8,           Rightfw,       tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port9,           backRight,     tmotorVex393_MC29, openLoop, reversed)
#pragma config(Motor,  port10,          backLeft,      tmotorVex393_HBridge, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{
	wait1Msec(2000);
	SensorValue[Encoder] = 0;

	while(SensorValue[Encoder] < 720) // Two rotations straight
	{
		motor[backLeft] = 63;
		motor[frontLeft] = 63;
		motor[backRight] = 63;
		motor[frontRight] = 63;
	}
	SensorValue[Encoder] = 0;
	while(SensorValue[Encoder] < 360)//Point turn right
		{
			motor[backLeft] = 63;
			motor[frontLeft] = 63;
			motor[backRight] = -63;
			motor[frontRight] = -63;
		}
	wait1Msec(10000);//Shoot for 10 seconds
	SensorValue[Encoder] = 0;
	motor[intake] = 100;
	motor[Leftfw] = 127;
	motor[Rightfw] = 127;



}
