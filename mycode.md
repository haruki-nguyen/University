# My saved code

```cpp
// initializing and declaring led layers
int layer[4] = {A3, A2, A1, A0};
// initializing and declaring led rows
int column[16] = {13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, A5, A4};
// value for delay time
int longDelayTime = 500;
int mediumDelayTime = 400;
int fastDelayTime = 300;
int delay100 = 100;
int stopTime = 2000;
// time to loop each animations
int fastLoopingTime = 3;
int longLoopingTime = 6;

// things to do on startup
void setup()
{

  for (int i = 0; i < 16; i++)
  {
    pinMode(column[i], OUTPUT); // setting columns to ouput
  }

  for (int i = 0; i < 4; i++)
  {
    pinMode(layer[i], OUTPUT); // setting layers to output
  }

  // turn off all leds on beginning
  turnOff();
}

// things to do on looping
void loop()
{
  turnOn();

  // flicker mode
  flicker();
  turnOn();
  delay(stopTime);

  // light each layer up and down on order
  layerUpDown();

  // light each layer up and down but faster
  layerUpDownFaster();
}

// turn all on
void turnOn()
{
  for (int i = 0; i < 16; i++)
  {
    digitalWrite(column[i], LOW);
  }
  // turning on layers
  for (int i = 0; i < 4; i++)
  {
    digitalWrite(layer[i], HIGH);
  }
}

// turn all off
void turnOff()
{
  for (int i = 0; i < 16; i++)
  {
    digitalWrite(column[i], HIGH);
  }
  // turning on layers
  for (int i = 0; i < 4; i++)
  {
    digitalWrite(layer[i], LOW);
  }
}

// flicker on
void flicker()
{
  // number of flicker time
  int i = fastLoopingTime;
  while (i != 0)
  {
    turnOn();
    delay(longDelayTime);
    turnOff();
    delay(longDelayTime);
    i -= 1;
  }
}

// turn everything on and off by layer up and down
void layerUpDown()
{
  for (int i = 0; i < fastLoopingTime; i++)
  {
    // make sure the cube is turned on for every loop
    turnOn();
    for (int j = 3; j >= 0; j--)
    {
      digitalWrite(layer[j], LOW);
      delay(fastDelayTime);
    }
    for (int j = 0; j < 4; j++)
    {
      digitalWrite(layer[j], HIGH);
      delay(fastDelayTime);
    }
  }
}

void layerUpDownFaster()
{
  for (int i = 0; i < 6; i++)
  {
    for (int j = 0; j < 4; j++)
    {
      digitalWrite(layer[j], HIGH);
      delay(delay100);
      digitalWrite(layer[j], LOW);
    }
    for (int j = 3; j >= 0; j--)
    {
      digitalWrite(layer[j], HIGH);
      delay(delay100);
      digitalWrite(layer[j], LOW);
    }
  }
}
```