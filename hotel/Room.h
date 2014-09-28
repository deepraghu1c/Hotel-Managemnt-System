#include <string>
#include <conio.h>
#include <fstream>
using namespace std;
class Room
{
	int roomno;
	string roomtype;
	string status;
public:
	Room(int no, string type, string stts)
	{
		roomno = no;
		type = roomtype;
		status = stts;
	}
};