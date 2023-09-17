#include <appdef.hpp>
#include <sdk/calc/calc.hpp>
#include <sdk/os/lcd.hpp>
#include <sdk/os/debug.hpp>
#include <sdk/os/input.hpp>

/*
 * Fill this section in with some information about your app.
 * All fields are optional - so if you don't need one, take it out.
 */
APP_NAME("CPRacing")
APP_DESCRIPTION("A simple pseudo 3d racing game")
APP_AUTHOR("Blackfur")
APP_VERSION("0.1.0")

extern "C"
void main() {
	calcInit(); //backup screen and init some variables

	const uint16_t LIGHT_GREEN = color(0, 255, 0);
	const uint16_t LIGHT_RED = color(255, 0, 0);
	const uint16_t GREY = color(128, 128, 128);
	const uint16_t BLUE = color(0, 0, 255);

	int width;
	int height;

	fillScreen(BLUE);

	LCD_Refresh();

	//Example for getKey
	while(true){
		if (Input_IsAnyKeyDown()) {
			break;
		}
	}

	calcEnd(); //restore screen and do stuff
}
