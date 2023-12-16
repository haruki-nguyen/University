// initializing and declaring led layers
int layers[4] = {A0, A1, A2, A3};
int layersLength = sizeof(layers) / sizeof(layers[0]);
// initializing and declaring led rows
int columns[16] = {13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, A5, A4};
int columnsLength = sizeof(columns) / sizeof(columns[0]);

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

  for (int i = 0; i < columnsLength; i++)
  {
    pinMode(columns[i], OUTPUT); // setting columns to ouput
  }

  for (int i = 0; i < layersLength; i++)
  {
    pinMode(layers[i], OUTPUT); // setting layers to output
  }

  // turn off all leds on beginning
  turnOff();

  // Seed the random number generator with an analog reading
  randomSeed(analogRead(0));
}

// things to do on looping
void loop()
{
  // flicker mode
  flicker();

  // light each layer up and down on order
  layerUpDown();

  // light each layer up and down but faster
  layerUpDownFaster();

  // raining effect
  randRain();

  // spiral effect
  spiralInAndOut();

  // turnOnAndOffAllByColumnSideways();
}

// turn all on
void turnOn()
{
  for (int i = 0; i < columnsLength; i++)
  {
    digitalWrite(columns[i], LOW);
  }
  // turning on layers
  for (int i = 0; i < layersLength; i++)
  {
    digitalWrite(layers[i], HIGH);
  }
}

// turn all off
void turnOff()
{
  for (int i = 0; i < columnsLength; i++)
  {
    digitalWrite(columns[i], HIGH);
  }
  // turning on layers
  for (int i = 0; i < layersLength; i++)
  {
    digitalWrite(layers[i], LOW);
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

  // end animation
  turnOn();
  delay(stopTime);
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
      digitalWrite(layers[j], LOW);
      delay(fastDelayTime);
    }
    for (int j = 0; j < layersLength; j++)
    {
      digitalWrite(layers[j], HIGH);
      delay(fastDelayTime);
    }
  }
}

void layerUpDownFaster()
{
  for (int i = 0; i < 6; i++)
  {
    for (int j = 0; j < layersLength; j++)
    {
      digitalWrite(layers[j], HIGH);
      delay(delay100);
      digitalWrite(layers[j], LOW);
    }
    for (int j = 3; j >= 0; j--)
    {
      digitalWrite(layers[j], HIGH);
      delay(delay100);
      digitalWrite(layers[j], LOW);
    }
  }
}

// Rain
void randRain()
{
  turnOff();

  for (int i = 0; i < 30; i++)
  {
    // generate random columns to rain
    const int numberOfRandCols = 6;
    int randCols[numberOfRandCols];
    for (int j = 0; j < numberOfRandCols; j++)
    {
      randCols[j] = random(0, 16);
    }

    // start raining
    for (int i = 0; i < numberOfRandCols; i++)
    {
      digitalWrite(columns[randCols[i]], LOW);
    }
    for (int i = 3; i >= 0; i--)
    {
      digitalWrite(layers[i], HIGH);
      delay(delay100 + (30 * i));
      digitalWrite(layers[i], LOW);
    }
    for (int i = 0; i < numberOfRandCols; i++)
    {
      digitalWrite(columns[randCols[i]], HIGH);
    }
  }
}

// spiral in and out
void spiralInAndOut()
{
  turnOn();
  int spiralInClockwiseOrder[16] = {0, 1, 2, 3, 7, 11, 15, 14, 13, 12, 8, 4, 5, 6, 10, 9};
  int spiralOutCounterClockwiseOrder[16] = {9, 10, 6, 5, 4, 8, 12, 13, 14, 15, 11, 7, 3, 2, 1, 0};
  int spiralInCounterClockwiseOrder[16] = {0, 4, 8, 12, 13, 14, 15, 11, 7, 3, 2, 1, 5, 9, 10, 6};
  int spiralOutClockwiseOrder[16] = {6, 10, 9, 5, 1, 2, 3, 7, 11, 15, 14, 13, 12, 8, 4, 0};

  for (int i = 0; i < fastLoopingTime; i++)
  {

    for (int j = 0; j < columnsLength; j++)
    {
      digitalWrite(columns[spiralInClockwiseOrder[j]], HIGH);
      delay(delay100);
    }
    for (int j = 0; j < columnsLength; j++)
    {
      digitalWrite(columns[spiralOutCounterClockwiseOrder[j]], LOW);
      delay(delay100);
    }
    for (int j = 0; j < columnsLength; j++)
    {
      digitalWrite(columns[spiralInCounterClockwiseOrder[j]], HIGH);
      delay(delay100);
    }
    for (int j = 0; j < columnsLength; j++)
    {
      digitalWrite(columns[spiralOutClockwiseOrder[j]], LOW);
      delay(delay100);
    }
  }
}

// turn everything on and off by column sideways
void turnOnAndOffAllByColumnSideways()
{
  turnOff();

  // Define column ranges
  int columnRanges[][2] = {{0, 3}, {4, 7}, {8, 11}, {12, 15}};

  // Turn on layers
  for (int layer = 0; layer < layersLength; layer++)
  {
    digitalWrite(layers[layer], HIGH);
  }

  // Iterate over column ranges
  for (int rangeIndex = 0; rangeIndex < 4; rangeIndex++)
  {
    int startColumn = columnRanges[rangeIndex][0];
    int endColumn = columnRanges[rangeIndex][1];

    // Turn on
    for (int i = startColumn; i <= endColumn; i++)
    {
      digitalWrite(columns[i], LOW);
      delay(delay100);
    }

    // Turn off
    for (int i = endColumn; i >= startColumn; i--)
    {
      digitalWrite(columns[i], HIGH);
      delay(delay100);
    }
  }
}
