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
  turnOnAndOffAllByLayerUpAndDownNotTimed();
}


//xxxxxxxxxxxxxxxxxxxxFUNCTIONSxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
///////////////////////////////////////////////////////////turn all off
void turnEverythingOn()
{
	for (int i = 0; i<16; i++)
	{
		digitalWrite(column[i], 0);
	}
	//turning on layers
	for (int i = 0; i<4; i++)
	{
		digitalWrite(layer[i], 1);
	}
}
void turnOnAndOffAllByLayerUpAndDownNotTimed()
{
	int x = 75;
	for (int i = 5; i != 0; i--)
	{
		turnEverythingOn();
		for (int i = 4; i != 0; i--)
		{
			digitalWrite(layer[i - 1], 0);
			delay(x);
		}
		for (int i = 0; i<4; i++)
		{
			digitalWrite(layer[i], 1);
			delay(x);
		}
		for (int i = 0; i<4; i++)
		{
			digitalWrite(layer[i], 0);
			delay(x);
		}
		for (int i = 4; i != 0; i--)
		{
			digitalWrite(layer[i - 1], 1);
			delay(x);
		}
	}
}

