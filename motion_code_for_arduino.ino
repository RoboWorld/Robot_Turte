#include <Servo.h> 

Servo myservo8;
Servo myservo9;
Servo myservo10;
Servo myservo11;
Servo myservo2;
Servo myservo7;
Servo myservo4;
Servo myservo6;
Servo myservo3;

int potpin = 0;  // analog pin used to connect the potentiometer
int val;    // variable to read the value from the analog pin 
int a = 0;
int b = 0;
int c = 0;
int d = 0;
int e = 0;
int f = 0;
int g = 0;
int h = 0;
int x = 1;
int y = 0;
int i = 0;
int z = 1;
int walk_number;
int walk_number1;
int walk_number2;
int shakehand_number;
int pull_up_number;

void setup()
{
	myservo8.attach(6);
	myservo9.attach(7);
	myservo10.attach(8);
	myservo11.attach(9);
	myservo2.attach(3);
	myservo7.attach(0);
	myservo4.attach(5);
	myservo6.attach(2);
	myservo3.attach(12);
}

void loop()
{
	val = analogRead(potpin);
	val = map(val, 0, 1023, 0, 179);
	if (z = 1)
	{
		prepare1_Function();
		z = 0;
	}
	delay(1000);
	for (walk_number = 1; walk_number<10; walk_number += 1)
	{
		shakeheadFunction();
		walk_number++;
	}
	delay(500);
	for (shakehand_number = 1; shakehand_number<3; shakehand_number += 1)
	{
		shakehandFunction();
		shakehand_number++;
	}
	delay(1000);
	prepare2_Function();
	for (pull_up_number = 1; pull_up_number < 6; pull_up_number += 1)
	{
		pull_upFunction();
		pull_up_number++;
	}
	delay(1000);
	for (walk_number2 = 1; walk_number2<20; walk_number2 += 1)
	{
		go_straightFunction();
		walk_number2++;
	}
	delay(500);

	for (walk_number1 = 1; walk_number1<20; walk_number1 += 1)
	{
		go_leftFunction();
		walk_number1++;
	}
	delay(500);

}
/////////////////////////////////////////////////////////////////////////////
void shakeheadFunction(void)
{
	for (i = 70; i<110; i += 1)
	{
		myservo3.write(i);
		myservo8.write(90);
		myservo9.write(100);
		myservo10.write(70);
		myservo11.write(105);
		delay(10);
	}
	for (i = 110; i>70; i -= 1)
	{
		myservo3.write(i);
		myservo8.write(90);
		myservo9.write(100);
		myservo10.write(70);
		myservo11.write(105);
		delay(10);
	}
}
/////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////
void shakehandFunction(void)
{
	for (a = 90; a > 30; a-=3)
	{
		myservo8.write(a);
		delay(20);
	}
	for (a = 130; a > 90; a -= 1)         //2 4 角度調換
	{
		//myservo4.write(100);
		myservo3.write(110);
		myservo2.write(a);
		//myservo6.write(95);
		//myservo7.write(65);
		myservo8.write(30);
		myservo9.write(90);
		myservo10.write(70);
		myservo11.write(100);
		delay(15);
	}
	for (a = 90; a < 130; a += 1)
	{
		//myservo4.write(100);
		myservo3.write(110);
		myservo2.write(a);
		//myservo6.write(95);
		//myservo7.write(65);
		myservo8.write(30);
		myservo9.write(90);
		myservo10.write(70);
		myservo11.write(100);
		delay(15);
	}
	for (a = 130; a > 90; a -= 1)
	{
		//myservo4.write(100);
		myservo3.write(110);
		myservo2.write(a);
		//myservo6.write(95);
		//myservo7.write(65);
		myservo8.write(30);
		myservo9.write(90);
		myservo10.write(70);
		myservo11.write(100);
		delay(15);
	}
	for (a = 90; a < 130; a += 1)
	{
		//myservo4.write(100);
		myservo3.write(110);
		myservo2.write(a);
		//myservo6.write(95);
		//myservo7.write(65);
		myservo8.write(30);
		myservo9.write(90);
		myservo10.write(70);
		myservo11.write(100);
		delay(15);
	}
	for (a = 30; a < 75; a+=3)
	{
		myservo8.write(a);
		delay(20);
	}
	////////////////////////////////////
	for (b = 90; b < 160; b += 5)
	{
		myservo9.write(b);
		delay(20);
	}
	for (a = 40; a < 80; a += 1)
	{
		myservo4.write(a);
		myservo3.write(70);
		//myservo2.write(70);
		//myservo6.write(95);
		//myservo7.write(65);
		myservo8.write(75);
		myservo9.write(160);
		myservo10.write(70);
		myservo11.write(100);
		delay(15);
	}
	for (a = 80; a > 40; a -= 1)
	{
		myservo4.write(a);
		myservo3.write(70);
		//myservo2.write(70);
		//myservo6.write(95);
		//myservo7.write(65);
		myservo8.write(75);
		myservo9.write(160);
		myservo10.write(70);
		myservo11.write(100);
		delay(15);
	}
	for (a = 40; a < 80; a += 1)
	{
		myservo4.write(a);
		myservo3.write(70);
		//myservo2.write(70);
		//myservo6.write(95);
		//myservo7.write(65);
		myservo8.write(75);
		myservo9.write(160);
		myservo10.write(70);
		myservo11.write(100);
		delay(15);
	}
	for (a = 80; a > 40; a -= 1)
	{
		myservo4.write(a);
		myservo3.write(70);
		//myservo2.write(70);
		//myservo6.write(95);
		//myservo7.write(65);
		myservo8.write(75);
		myservo9.write(160);
		myservo10.write(70);
		myservo11.write(100);
		delay(15);
	}
	

}

/////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////
void go_leftFunction(void)
{
	for (a = 50, b = 85; a<60, b<95; a += 1, b += 1)    // goes from 0 degrees to 180 degrees 1
	{                                  // in steps of 1 degree 
		myservo4.write(a);
		myservo6.write(b);
		myservo8.write(105);
		myservo11.write(85);

		myservo9.write(100);
		myservo10.write(85);
		myservo3.write(90);
		delay(12);
	}
	for (a = 60, b = 95, c = 105, d = 85, e = 100, f = 85, i = 90; a<70, b<105, c<115, d<95, e>90, f>75, i<100; a += 1, b += 1, c += 1, d += 1, e -= 1, f -= 1, i += 1)    // goes from 0 degrees to 180 degrees 1
	{                                  // in steps of 1 degree 
		myservo4.write(a);
		myservo6.write(b);
		myservo8.write(c);
		myservo11.write(d);
		myservo2.write(e);              // tell servo to go to position in variable 'pos' 
		myservo7.write(f);
		myservo9.write(100);
		myservo10.write(85);
		myservo3.write(i);
		delay(12);
	}
	for (c = 115, d = 95, e = 90, f = 75, i = 100; c>105, d>85, e>80, f>65, i>90; c -= 1, d -= 1, e -= 1, f -= 1, i -= 1)    // goes from 0 degrees to 180 degrees 1
	{                                  // in steps of 1 degree 

		myservo8.write(c);
		myservo11.write(d);
		myservo2.write(e);              // tell servo to go to position in variable 'pos' 
		myservo7.write(f);
		myservo9.write(100);
		myservo10.write(85);
		myservo3.write(i);
		delay(12);
	}
	for (e = 80, f = 65, i = 90; e<90, f<75, i>80; e += 1, f += 1, i -= 1)    // goes from 0 degrees to 180 degrees 1
	{                                  // in steps of 1 degree 

		myservo8.write(90);
		myservo11.write(70);
		myservo2.write(e);              // tell servo to go to position in variable 'pos' 
		myservo7.write(f);
		myservo9.write(85);
		myservo10.write(100);
		myservo3.write(i);
		delay(12);
	}
	for (a = 70, b = 105, e = 90, f = 75, g = 85, h = 100, i = 80; a>60, b>95, e<100, f<85, g>75, h<110, i<90; a -= 1, b -= 1, e += 1, f += 1, g -= 1, h += 1, i += 1)    // goes from 0 degrees to 180 degrees 1
	{                                  // in steps of 1 degree 
		myservo4.write(a);
		myservo6.write(b);
		myservo8.write(90);
		myservo11.write(70);
		myservo2.write(e);              // tell servo to go to position in variable 'pos' 
		myservo7.write(f);
		myservo9.write(g);
		myservo10.write(h);
		myservo3.write(i);
		delay(12);
	}
	for (a = 60, b = 95, g = 75, h = 110; a>50, b>85, g<85, h>100; a -= 1, b -= 1, g += 1, h -= 1)    // goes from 0 degrees to 180 degrees 1
	{                                  // in steps of 1 degree 
		myservo4.write(a);
		myservo6.write(b);
		myservo8.write(90);
		myservo11.write(70);

		myservo9.write(g);
		myservo10.write(h);
		myservo3.write(90);
		delay(12);
	}

	delay(50);
}
///////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////
void go_straightFunction(void)
{
	for (a = 50, b = 105; a<60, b>95; a += 1, b -= 1)    // goes from 0 degrees to 180 degrees 1
	{                                  // in steps of 1 degree 
		myservo4.write(a);
		myservo6.write(b);
		myservo8.write(105);
		myservo11.write(80);

		myservo9.write(100);
		myservo10.write(85);
		myservo3.write(90);
		delay(15);
	}
	for (a = 60, b = 95, c = 105, d = 80, e = 90, f = 85, i = 90; a<70, b>85, c<115, d>70, e<100, f>75, i<100; a += 1, b -= 1, c += 1, d -= 1, e += 1, f -= 1, i += 1)    // goes from 0 degrees to 180 degrees 1
	{                                  // in steps of 1 degree 
		myservo4.write(a);
		myservo6.write(b);
		myservo8.write(c);
		myservo11.write(d);
		myservo2.write(e);              // tell servo to go to position in variable 'pos' 
		myservo7.write(f);
		myservo9.write(100);
		myservo10.write(85);
		myservo3.write(i);
		delay(15);
	}
	for (c = 115, d = 70, e = 100, f = 75, i = 100; c>105, d<80, e<110, f>65, i>90; c -= 1, d += 1, e += 1, f -= 1, i -= 1)    // goes from 0 degrees to 180 degrees 1
	{                                  // in steps of 1 degree 

		myservo8.write(c);
		myservo11.write(d);
		myservo2.write(e);              // tell servo to go to position in variable 'pos' 
		myservo7.write(f);
		myservo9.write(100);
		myservo10.write(85);
		myservo3.write(i);
		delay(15);
	}
	for (e = 110, f = 65, i = 90; e>100, f<75, i>80; e -= 1, f += 1, i -= 1)    // goes from 0 degrees to 180 degrees 1
	{                                  // in steps of 1 degree 

		myservo8.write(90);
		myservo11.write(95);
		myservo2.write(e);              // tell servo to go to position in variable 'pos' 
		myservo7.write(f);
		myservo9.write(85);
		myservo10.write(100);
		myservo3.write(i);
		delay(15);
	}
	for (a = 70, b = 85, e = 100, f = 75, g = 85, h = 100, i = 80; a>90, b<95, e>90, f<85, g>75, h<110, i<90; a -= 1, b += 1, e -= 1, f += 1, g -= 1, h += 1, i += 1)    // goes from 0 degrees to 180 degrees 1
	{                                  // in steps of 1 degree 
		myservo4.write(a);
		myservo6.write(b);
		myservo8.write(90);
		myservo11.write(95);
		myservo2.write(e);              // tell servo to go to position in variable 'pos' 
		myservo7.write(f);
		myservo9.write(g);
		myservo10.write(h);
		myservo3.write(i);
		delay(15);
	}
	for (a = 60, b = 95, g = 75, h = 110; a>50, b<105, g<85, h>100; a -= 1, b += 1, g += 1, h -= 1)    // goes from 0 degrees to 180 degrees 1
	{                                  // in steps of 1 degree 
		myservo4.write(a);
		myservo6.write(b);
		myservo8.write(90);
		myservo11.write(95);

		myservo9.write(g);
		myservo10.write(h);
		myservo3.write(90);
		delay(15);
	}

	delay(50);
}
////////////////////////////////////////////////////////////////
void pull_upFunction(void)
{
	for (c = 95, d = 95; c < 135, d>55; c += 1, d -= 1)
	{
		myservo8.write(c);
		myservo9.write(d);
		myservo10.write(100);
		myservo11.write(70);
		myservo2.write(110);
		myservo4.write(50);
		myservo6.write(110);
		myservo7.write(70);
		delay(30);
	}
	for (c = 135, d = 55; c>95, d<95; c -= 1, d += 1)
	{
		myservo8.write(c);
		myservo9.write(d);
		myservo10.write(100);
		myservo11.write(70);
		myservo2.write(110);
		myservo4.write(50);
		myservo6.write(110);
		myservo7.write(70);
		delay(30);
	}
}
//////////////////////////////////
void prepare2_Function(void)
{
	for (d = 160; d > 115; d -= 1)
	{
		//myservo2.write(f);
		myservo9.write(d);
		delay(10);
	}
	for (a=40, c = 75, d = 115, h = 70, e = 100, f=130; a<50, c < 95, d>95, h<100, e>70, f>110; a +=1, c += 1, d -= 1, h += 1, e -= 1, f-=1)
	{
		myservo2.write(f);  //130-110
		myservo4.write(a); //40-50
		myservo8.write(c); //75
		myservo9.write(d);  //160
		myservo10.write(h); //70 
		myservo11.write(e);  //100

		delay(20);
	}
}
//////////////////////////////////
void prepare1_Function(void)
{
	/*for ()
	{
		myservo4.write(a);
	}*/
	for (g = 70; g < 100; g+=2) //  小-->100
	{
		myservo9.write(g);
		delay(20);
	}
	delay(20);
	/*for ()
	{
		myservo7.write(f);
	}*/
	for (d = 75; d < 105; d+=2) //小-->105
	{
		myservo11.write(d);
		delay(20);
	}
	delay(20);
	/*for ()
	{
		myservo6.write(b);
	}*/
	for (h = 40; h < 70; h+=2) //小-->70
	{
		myservo10.write(h);
		delay(20);
	}
	delay(20);
	/*for ()
	{
		myservo2.write(e);
	}*/
	for (c = 60; c < 90; c+=2) //小-->90
	{
		myservo8.write(c);
		delay(20);
	}
	delay(20);
}
