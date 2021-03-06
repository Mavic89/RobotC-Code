#pragma config(Sensor, in1,    pot,            sensorPotentiometer)
#pragma config(Sensor, dgtl1,  Encoder,        sensorQuadEncoder)
#pragma config(Motor,  port1,           frontLeft,     tmotorVex393_HBridge, openLoop)
#pragma config(Motor,  port2,           frontRight,    tmotorVex393_MC29, openLoop, reversed)
#pragma config(Motor,  port3,           Leftfw,        tmotorVex393_MC29, openLoop, reversed)
#pragma config(Motor,  port4,           intake,        tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port8,           Rightfw,       tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port9,           backRight,     tmotorVex393_MC29, openLoop, reversed)
#pragma config(Motor,  port10,          backLeft,      tmotorVex393_HBridge, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{
	int i;
	i=0;
	SensorValue[Encoder] = 0;
	while(SensorValue[Encoder] > -1080 ) // two rotations straight
		{
			motor[backLeft] = 63;
			motor[frontLeft] = 63;
			motor[backRight] = 63;
			motor[frontRight] = 63;
		}
	SensorValue[Encoder] = 0;
	while(SensorValue[Encoder] < 720)//Point turn right
		{
			motor[backLeft] = 63;
			motor[frontLeft] = 63;
			motor[backRight] = -63;
			motor[frontRight] = -63;
		}
	SensorValue[Encoder] = 0;
	motor[backLeft] = 0;
	motor[frontLeft] = 0;
	motor[backRight] = 0;
	motor[frontRight] = 0;
	wait1Msec(1000);
	while(1==1)
	{
		motor[intake] = 63;
		motor[Leftfw] = 63;
		motor[Rightfw] = 63;
	}
}
