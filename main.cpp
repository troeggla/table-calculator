#include <Arduino.h>
#include <Keypad.h>
#include <U8g2lib.h>

// Pins for LCD screen
#define LCD_CLK 13
#define LCD_DATA 11
#define LCD_CS 10

// Number of rows and columns of keypad
#define NUM_ROWS 5
#define NUM_COLS 4

// Keymap definition
const char keys[NUM_ROWS][NUM_COLS] = {
  {'x', 'x', 'x', 'x'},
  {'7', '8', '9', '/'},
  {'4', '5', '6', '*'},
  {'1', '2', '3', '-'},
  {'0', '.', '=', '+'}
};

// Pins for keypad rows and columns
byte rowPins[NUM_ROWS] = {12, 9, 8, 7, 6};
byte colPins[NUM_COLS] = {5, 4, 3, 2};

// Initialise hardware devices
Keypad keypad = Keypad(makeKeymap(keys), rowPins, colPins, NUM_ROWS, NUM_COLS);

void setup() {
}

void loop() {
}
