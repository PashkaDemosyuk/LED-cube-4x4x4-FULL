/*
4x4x4 LED Cube
Connection Setup:
Columns
[(x,y)-Pin]
(1,1)-13
(1,2)-12
(1,3)-11
(1,4)-10
(2,1)-9
(2,2)-8
(2,3)-7
(2,4)-6
(3,1)-5
(3-2)-4
(3-3)-3
(3,4)-2
(4,1)-1
(4,2)-0
(4,3)-A5
(4,4)-A4
Layers
[layer-Pin]
a-A0
b-A1
c-A2
d-A3
*/
//initializing and declaring led rows
int column[16] = { 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, A5, A4 };
//initializing and declaring led layers
int layer[4] = { A3, A2, A1, A0 };

int time = 250;

void setup()
{
	//setting rows to ouput
	for (int i = 0; i<16; i++)
	{
		pinMode(column[i], OUTPUT);
	}
	//setting layers to output
	for (int i = 0; i<4; i++)
	{
		pinMode(layer[i], OUTPUT);
	}
	
}
void loop()
{	
 turnOnAndOffAllByColumnSideways();
}


//xxxxxxxxxxxxxxxxxxxxFUNCTIONSxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
void turnEverythingOff()
{
	for (int i = 0; i<16; i++)
	{
		digitalWrite(column[i], 1);
	}
	for (int i = 0; i<4; i++)
	{
		digitalWrite(layer[i], 0);
	}
}
void turnOnAndOffAllByColumnSideways()
{
	int x = 75;
	turnEverythingOff();
	//turn on layers
	for (int i = 0; i<4; i++)
	{
		digitalWrite(layer[i], 1);
	}
	for (int y = 0; y<3; y++)
	{
		//turn on 0-3
		for (int i = 0; i<4; i++)
		{
			digitalWrite(column[i], 0);
			delay(x);
		}
		//turn on 4-7
		for (int i = 4; i<8; i++)
		{
			digitalWrite(column[i], 0);
			delay(x);
		}
		//turn on 8-11
		for (int i = 8; i<12; i++)
		{
			digitalWrite(column[i], 0);
			delay(x);
		}
		//turn on 12-15
		for (int i = 12; i<16; i++)
		{
			digitalWrite(column[i], 0);
			delay(x);
		}
		//turn off 0-3
		for (int i = 0; i<4; i++)
		{
			digitalWrite(column[i], 1);
			delay(x);
		}
		//turn off 4-7
		for (int i = 4; i<8; i++)
		{
			digitalWrite(column[i], 1);
			delay(x);
		}
		//turn off 8-11
		for (int i = 8; i<12; i++)
		{
			digitalWrite(column[i], 1);
			delay(x);
		}
		//turn off 12-15
		for (int i = 12; i<16; i++)
		{
			digitalWrite(column[i], 1);
			delay(x);
		}
		//turn on 12-15
		for (int i = 12; i<16; i++)
		{
			digitalWrite(column[i], 0);
			delay(x);
		}
		//turn on 8-11
		for (int i = 8; i<12; i++)
		{
			digitalWrite(column[i], 0);
			delay(x);
		}
		//turn on 4-7
		for (int i = 4; i<8; i++)
		{
			digitalWrite(column[i], 0);
			delay(x);
		}
		//turn on 0-3
		for (int i = 0; i<4; i++)
		{
			digitalWrite(column[i], 0);
			delay(x);
		}
		//turn off 12-15
		for (int i = 12; i<16; i++)
		{
			digitalWrite(column[i], 1);
			delay(x);
		}
		//turn off 8-11
		for (int i = 8; i<12; i++)
		{
			digitalWrite(column[i], 1);
			delay(x);
		}
		//turn off 4-7
		for (int i = 4; i<8; i++)
		{
			digitalWrite(column[i], 1);
			delay(x);
		}
		//turn off 0-3
		for (int i = 0; i<4; i++)
		{
			digitalWrite(column[i], 1);
			delay(x);
		}
	}
}
