#define PATH(name)                      "~/.dwm/blocks/"name  
//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	 /*Icon*/	/*Command*/				  /*Update Interval*/ /*Update Signal*/
  {  "",		PATH("memory.sh"),        10,                 14},
  {  "",		PATH("disk.sh"),          1,                  8},
  {  "",		PATH("battery.sh"),       5,                  3},
  {  "",		PATH("cpu.sh"),			  10,                 18},
  {  "",		PATH("internet.sh"),      5,                  4},
  {  "",		PATH("volume.sh"),        1,                  10},
  {	 "", 		PATH("backlight.sh"),     1,                  10},
  {	 "",		PATH("clock.sh"),         60,                 1},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
