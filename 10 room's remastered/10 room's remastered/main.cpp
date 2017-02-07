#include<cstdlib>
#include<ctime>
#include <iostream>
#include<Windows.h>
#include<string>
#include <stdio.h>
#include <allegro5/allegro.h>
#include "allegro5/allegro_image.h"
#include "allegro5/allegro_native_dialog.h"


using namespace std;
int dice(int dice, int room);




void monster();
void annoying();



int main() {
	
	ALLEGRO_DISPLAY *display = NULL;
	ALLEGRO_BITMAP  *image = NULL;

	al_init();


	display = al_create_display(640, 480);

	al_init_image_addon();

	image = al_create_bitmap(640,480);

	
	al_flip_display();

	//al_rest(10.0);




	int dice = 0;
	int room = 1;
	string input = "word";
	string item[5];
	annoying();
	srand(static_cast<unsigned int>(time(0)));

	cout << "in these room's you are ment to go and really you are just at my whim so ha!" << endl;
	cout << "your adgective is to get to the final room there are ten rooms but look out for monsters well end times blah blah blah any way you are just total left alone" << endl;
	cout << "in short the world endede and you just like zelda you are by your self no magic fairy's just what you know and no powers, no upgrades just get to that door and dont die so yes jdust like zelda" << endl;
	cout << "to move from room to room please type in the word or direction like 'east' type in 'east'" << endl;
	cout << "press y to enter the unknown" << endl;
	cin >> input;
	while (1) {
		switch (room) {
		case 1:
			image = al_load_bitmap("door.jpg");
			break;
		case 2:
			image = al_load_bitmap("white hot room.jpg");
			break;
		case 3:
			image = al_load_bitmap("room 1.jpg");
			break;
		case 4:
			image = al_load_bitmap("snow.jpg");
			break;
		case 5:
			image = al_load_bitmap("metal.jpg");
			break;
		case 6:
			image = al_load_bitmap("oil room.jpg");
			break;
		case 7:
			image = al_load_bitmap("bunker.jpg");
			break;
		case 8:
			image = al_load_bitmap("treasure.jpg");
			break;
		case 9:
			image = al_load_bitmap("clothes.jpg");
			break;
		case 10:
			image = al_load_bitmap("white room.jpg");
			break;
		}
		al_draw_bitmap(image,0,0,0);
		al_flip_display();
		switch (room){

		case 1:
			cout << "east there are is a door that that has some glowing spill over it outside " << endl;
			cout << "go in to the east room (east)" << endl;
			cin >> input;

			if (input == "north")
				room = 2;

			else if (input == "east")
				room = 3;
			else
				cout << "not valid input" << endl;
			break;
		case 2:
			cout << "the light in this room is warm this room is named the white hot room and this where all beggins and ends" << endl;
			cout << "you dead" << endl;
			return 0;

			break;
		case 3:
			cout << " you have entered room 2, in this room there are cans on the floor that the paint spilled and it glows providing light but there is a door behind the cans but there is large monster to not awake" << endl;
			cout << "you can go west to exit room (west), go north to remove the cans and go to the next door(north)" << endl;
			cin >> input;
			annoying();
			if (input == "north")
				room = 4;
			else if (input == "south")
				room = 1;
			else
				cout << "not valid input" << endl;
			break;
		case 4:
			cout << "this is room three there is light and droping in temperature there is a door at the other end of the room but also there is screaming at both ends." << endl;
			cout << "you can go north to the next door(north), you can go south to go back to room 2 (south)" << endl;
			cin >> input;

			if (input == "north")
				room = 5;

			else if (input == "south")
				room = 3;
			else
				cout << "not valid input" << endl;
			break;
		case 5:
			cout << "this is room four the room full of metal and many metal objects in this room there is a collection of metal in hanging wall swords and they make out a letter to the west there is door covered by giant sword " << endl;
			cout << "go west to get to the door (west), head south back to room 3 (south)" << endl;
			cin >> input;


			if (input == "west")
				room = 6;
			else if (input == "south")
				room = 3;
			else
				cout << "not valid input" << endl;
			break;
		case 6:
			cout << "this is room five it has oil driping from auto mobile parts and there is deep part of the oil where it goes waist high, there is door east to the oil pond." << endl;
			cout << "go west to the next door (west), go east to go back to room 5(east)" << endl;
			cin >> input;
			if (input == "west")
				room = 7;
			else if (input == "east")
				room = 5;
			else
				cout << "not valid input" << endl;
			break;
		case 7:
			cout << "welcome to room six the most peacefull room in all of this game this is like a bunker with food and water and a place to sleep there are to doors one west to you and east door " << endl;
			cout << "you can go west to get to the door (west), or go east to open the north door (north)" << endl;
			cin >> input;

			if (input == "north")
				room = 8;
			else if (input == "west")
				room = 7;
			else
				cout << "not valid input" << endl;
			break;
		case 8:
			cout << "great you took the right door now shall we contiue in this room there is treasure but it there is a pile of gold bricks in there is other door " << endl;
			cout << "you can go west to a  room (west)" << endl;
			cin >> input;

			if (input == "west")
				int dice(room);
			else
				cout << "not valid input" << endl;
			break;
		case 9:
			cout << "well not the room that was expected a room full of clothes, there is a key lock up ahaed" << endl;
			cout << "you can go north to the key lock(n)" << endl;
			cin >> input;

			if (input == "north")
				room = 10;
			else
				if (item[2].compare("keys") == 0) {
					cout << "door unlocked" << endl;
				}
			if (item[2].compare("keys") != 0) {
				cout << "door is locked go find keys ." << endl;
			}
			break;

		case 10:
			cout << "in this room there is white hall way it feels welcoming and like it was expecting you, in this is they is being that looks like you it ask do you wish to continue or end your journey " << endl;
			cout << "(Y) for continue or (N) to end " << endl;
			cin >> input;

			if (input == "YES")
				return 0;

			else if (input == "NO")
				return 0;
			else
				cout << "not valid input" << endl;
			break;

		}

	}

	al_destroy_display(display);
}
void monster() {
	int number = rand() % 31 + 1;
	if (number> 11)
		cout << "this is a very feathrly like creature you woke up in room 2 this creature has a skull like face, with light green feathers, on clawed wings, and snake tail." << endl;
	else if (number> 21)
		cout << "this creature is awalking oil monster imagine three old puppet mask with oil around it and four steaming pipes and it also can breath fire oh yeah it is also the oil pond since you did step on him." << endl;
	else if (number> 31)
		cout << "imageane a three headead dog with black fur and red lava glow, long cainaine teeth, and is wearing a bit of armour oh and there is more than one about 50." << endl;
}
int dice(int dice, int room) {
	dice = rand() % 10 + 1;

	if (dice == 1)
		room = 1;
	else if (dice == 2)
		room = 2;
	else if (dice == 3)
		room = 3;
	else if (dice == 4)
		room = 4;
	else if (dice == 5)
		room = 5;
	else if (dice == 6)
		room = 6;
	else if (dice == 7)
		room = 7;
	else if (dice == 8)
		room = 8;
	else if (dice == 9)
		room = 9;
	else
		room = 10;

	return 0;
}
void annoying() {
	system("color 2d");
	system("color 5D");
}