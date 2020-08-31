
task main()
{


		motor[backRight] = vexRT[Ch2];
		motor[frontRight] = vexRT[Ch2];
		motor[backLeft] = vexRT[Ch3];
		motor[frontLeft] = vexRT[Ch3];
		while(vexRT[Btn8L] == 1)
		{
			motor[backLeft] = 127;
			motor[frontLeft] = -127;
			motor[backRight] = -127;
			motor[frontRight] = 127;
		}
		while(vexRT[Btn8R] == 1)
		{
			motor[backRight]= 127;
			motor[frontRight] = -127;
			motor[backLeft] = -127;
			motor[frontLeft] = 127;
		}
}
