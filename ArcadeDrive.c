#pragma config(Motor,  port1,           Leftdt,        tmotorVex393_HBridge, openLoop)
#pragma config(Motor,  port2,           Rightdt,       tmotorVex393_MC29, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{
	while(1==1)
	{
	//Arcade Drive
		motor[Leftdt] = vexRT[Ch2];
		motor[Rightdt] = vexRT[Ch2];
		if(vexRT[Ch1] > 50)
		{
			motor[Leftdt] = 127;
			motor[Rightdt] = -127;
		}
		if(vexRT[Ch1] < -50)
		{
			motor[Leftdt] = -127;
			motor[Rightdt] = 127;
		}
	}


}
