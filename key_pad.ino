/* @file CustomKeypad.pde
|| @version 1.0
|| @author Alexander Brevig
|| @contact alexanderbrevig@gmail.com
||
|| @description
|| | Demonstrates changing the keypad size and key values.
|| #
*/
#include <Keypad.h>
const byte ROWS = 4; 
const byte COLS = 4; 

char hexaKeys[ROWS][COLS] = {
 {'1', '2', '3', 'A'},
 {'4', '5', '6', 'B'},
 {'7', '8', '9', 'C'},
 {'*', '0', '#', 'D'}
};
byte colPins[ROWS] = {5, 4, 3, 2}; 
byte rowPins[COLS] = {9, 8, 7, 6}; 

Keypad customKeypad = Keypad( makeKeymap(hexaKeys), rowPins, colPins, ROWS,COLS);
void setup(){
 Serial.begin(9600);
}
void loop(){
 char customKey = customKeypad.getKey();

 if (customKey){
 Serial.println(customKey);
 }
}
