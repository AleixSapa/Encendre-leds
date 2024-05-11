#define BLUE 3
#define GREEN 5
#define RED 6
#define delayTime 10
void setup()
{
    pinMode(RED, OUTPUT);
    pinMode(GREEN, OUTPUT);
    pinMode(BLUE, OUTPUT);
    digitalWrite(RED, HIGH);
    digitalWrite(GREEN, LOW);
    digitalWrite(BLUE, LOW);
}

int redValue;
int greenValue;
int blueValue;

void loop()
{
    {
        analogWrite(BLUE, blueValue);
        analogWrite(RED, redValue);
        analogWrite(GREEN, greenValue);
    };
};
Led(50, 60, 70)

    void Led(RED, BLUE, GREEN)
{
    redValue = RED;
    greenValue = GREEN;
    blueValue = BLUE;
};