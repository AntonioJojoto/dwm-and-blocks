//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/

	{"CPU:", "CPU_thinkpad",								5,		0},
	{"MEM: ", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",	15,		0},

	{"", "date | awk '{print $1,$2,$3}'",				360,		0},
	{"", "date | awk '{print $4,$5,$6}'",				1,		0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = '|';
