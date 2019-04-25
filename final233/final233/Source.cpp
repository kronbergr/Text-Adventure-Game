#include<iostream>
#include<string>
#include<vector>

using namespace std;

class Room
{
public:
	Room(string name, string desc, string descExt);
	void pRoomName();
	void pRoomDesc();
	void pRoomDescExtended();
	void Add(Room anItem);


	/*vector<string> roomThings;*/
	vector<Room> roomThings;




	Room* pNorth;
	Room* pSouth;
	Room* pEast;
	Room* pWest;




private:
	string rName;
	string rDesc;
	string rDescExt;

};


Room::Room(string name, string desc, string descExt)
{
	rName = name;
	rDesc = desc;
	rDescExt = descExt;
}

void Room::Add(Room anItem)
{

	roomThings.push_back(anItem);
}

void Room::pRoomName()
{
	cout << rName << endl;

}


void Room::pRoomDesc()
{
	cout << rDesc << endl;

}

void Room::pRoomDescExtended()
{
	cout << rDescExt << endl;
}


class Map
{
public:
	Map();
	~Map();

	Room* mStart;
};


Map::~Map()
{
	delete mStart->pNorth;
	delete mStart->pSouth;
	delete mStart->pEast;
	delete mStart->pWest;

}

Map::Map()
{

	Room* p1 = new Room("Home", "You wake in your bedrooom the morning after Eurydice dies.", "The the memory of her death rushes back to you.  One minute she’s dancing in the moonlight, at the celebration after your wedding.  You turn away only for a second, and when you turn back she’s gone, fallen into the tall grass clutching her ankle where two pinprick wounds reveal the fatal truth-she has been bitten by a snake, and she is dead.  You rub the salt and sleep from your eyes and stand.  ");
	mStart = p1;

	Room* p2 = new Room("The Road to Taenarum", "The road goes south.  Home is behind you, to the north.", " ");
	Room* p3 = new Room("The Gate at Taenarum", "You get to the gate to the Underworld in Taenarum, a cave in a small inlet.  To the north, the cave is blocked by a heavy gate.  To the south, water.", " ");
	Room* p4 = new Room("Entrance to the Underworld", "Upon the gate, a plaque reads: THIS IS THE GATE OF THE DEAD.  ONLY THOSE WHOSE BLOOD HAS BEEN SPILLED MAY ENTER.  AN OFFERING OF BLOOD IS REQUIRED TO PASS.", " ");
	Room* p5 = new Room("A Sharp Turn", "The path curves sharply to the east and begins a gradual slope downward.  There are stone walls to either side of you.  Visibility is low, thick mist creeps forth from the depths and curls around your ankles.", " ");
	Room* p6 = new Room("Cerberus", "In the dim light, you hear the gnashing and snapping of three huge sets of jaws, and the growls rumbling forth from three massive throats shake the ground beneath your feet.  Cerberus guards your way.  ", " ");
	Room* p7 = new Room("Coin Room", "You enter through a huge wooden door.  Ahead of you is a candelabra buried under thousands of years of candle drippings, flames flickering dully  from within the mounds of wax.", " ");
	Room* p8 = new Room("Crossing Styx", "Beyond the door, you think you hear the slow sound of water lapping against a shore, but if you listen closely the sound mimics a low mournful sigh-a sound of heartache and resignation.  Ahead, a tall thin figure stands.  Approaching the man, you see his gaunt face and bony outstretched hand.  You know him, even though you've never seen his face.  Charon, the ferryman.", " ");
	Room * p9 = new Room("The Shore of Souls", "Reaching the shore, you get off the boat.  The spirits walk shoulder to shoulder, and closer.  Despite their wispy transparency, you cannot move through them.  You look over your shoulder tosee if Charon is still there, if he has any help to offer, but the spirits have filled in the small space between you and the water, blocking it from your view completely.", " ");
	Room* p10 = new Room("Fates", "Standing together in the center of the stone alled room, the three women fall silent.  WE'VE BEEN WAITING FOR YOU.   The voice comes from all three of them, but none have opened their mouths.  IF YOU WANT TO PASS, A LIFE IS THE TOLL.", " ");

	Room* p11 = new Room("Hall of Clotho", "Clotho sits at a spinning wheel in the center of the room.", " ");
	Room* p12 = new Room("Hall of Lachesis", "Lachesis stands at a lon work bench against the north wall. There are doors ahead of you and to your right.  They are both locked.", "Lachesis is gone, the doors on the west and east walls are gone.  The only choice is to move south, toward the third sister.");
	Room* p13 = new Room("Scissors Room", "A tiny, closet-like room lies behind a small, unadorned door.  Ahead of you, a pair of silver scissors hang on the wall.", " ");
	Room * p14 = new Room("Hall of Atropos", "Atropos sits in the center of this room, watching you through one couldy eye.  She is surrounded by piles of threads much shorter than the one you carry.", "“Do you have the scissors?” she demands, her voice vibrating through your skull from all directions.  Hands shaking, you present them.  “And the thread.”  You hold it forward also.  “I will not cut this thread.  It must be you.  A life is the toll.”");
	Room * p15 = new Room("Hecate", "Hecate stands at a crossroads between you and your goal-an audience with Hades and Persephone.  You must give offerings to Hecate to prove you are wirthy to enter.", "You present her your offerings and she unlocks the gate blocking your path. ");
	Room * p16 = new Room("Cyprus Grove", "You see a large tree ahead of you, with a mound of disturbed earth at its base.", " ");
	Room* p17 = new Room("Hades and Persephone", "Hades reclines in an enormous, intricately carved onyx throne against the wall farthest from you.  Persephone paces from his throne to a small painting of a bright field, anxious to return to her home in the light.", " ");
	Room * p18 = new Room("Hypnos", "You move south, into a care with poppies growing along the cave walls.  Hypnos walks toward you from the far wall.", " ");

	Room* p19 = new Room("Shadow of Erebus", "You enter a room full of a dense darkness.  It is difficult to breathe.", " ");
	Room* p20 = new Room("Pit of Erebus", "You have fallen into the Pit of Erebus.  You and Eurydice are trapped together for eternity in the tarry darkness.", " ");
	Room* p21 = new Room("Schedon Ekei", "You have nearly fought your way through Erebus' impossible darkness and finally feel the light on your face.", " ");
	Room * p22 = new Room("Outside the Gates", "You collapse into each others arms on the shore o the inlet where you last saw sunlight.  Your quest succeeded, and you rescued your wife.  The two of you will live your days together, and when the time comes,s you will stroll back through the gate to the Underworld hand in hand, down the slope toward eternity", " ");

	p1->pNorth = 0;
	p1->pSouth = p2;
	p1->pEast = 0;
	p1->pWest = 0;

	p2->pNorth = p1;
	p2->pSouth = p3;
	p2->pEast = 0;
	p2->pWest = 0;

	p3->pNorth = p4;
	p3->pSouth = 0;
	p3->pEast = 0;
	p3->pWest = 0;

	p4->pNorth = 0;
	p4->pSouth = p3;
	p4->pEast = p5;
	p4->pWest = 0;

	p5->pNorth = p6;
	p5->pSouth = 0;
	p5->pEast = 0;
	p5->pWest = p4;

	p6->pNorth = p7;
	p6->pSouth = p5;
	p6->pEast = 0;
	p6->pWest = 0;

	p7->pNorth = 0;
	p7->pSouth = p6;
	p7->pEast = p8;
	p7->pWest = 0;

	p8->pNorth = 0;
	p8->pSouth = 0;
	p8->pEast = p9;
	p8->pWest = p7;

	p9->pNorth = p10;
	p9->pSouth = p18;
	p9->pEast = p8;
	p9->pWest = 0;

	p10->pNorth = 0;
	p10->pSouth = p9;
	p10->pEast = p11;
	p10->pWest = 0;

	p11->pNorth = 0;
	p11->pSouth = 0;
	p11->pEast = p12;
	p11->pWest = p10;

	p12->pNorth = 0;
	p12->pSouth = p14;
	p12->pEast = p13;
	p12->pWest = p11;

	p13->pNorth = 0;
	p13->pSouth = 0;
	p13->pEast = 0;
	p13->pWest = p12;

	p14->pNorth = p12;
	p14->pSouth = p15;
	p14->pEast = 0;
	p14->pWest = 0;

	p15->pNorth = p14;
	p15->pSouth = p17;
	p15->pEast = p16;
	p15->pWest = p18;

	p16->pNorth = 0;
	p16->pSouth = 0;
	p16->pEast = 0;
	p16->pWest = p15;

	p17->pNorth = p15;
	p17->pSouth = 0;
	p17->pEast = 0;
	p17->pWest = p19;

	p18->pNorth = p9;
	p18->pSouth = 0;
	p18->pEast = p15;
	p18->pWest = 0;

	p19->pNorth = p20;
	p19->pSouth = 0;
	p19->pEast = p17;
	p19->pWest = p21;

	p20->pNorth = 0;
	p20->pSouth = 0;
	p20->pEast = 0;
	p20->pWest = 0;

	p21->pNorth = 0;
	p21->pSouth = 0;
	p21->pEast = p19;
	p21->pWest = p22;

	p22->pNorth = 0;
	p22->pSouth = 0;
	p22->pEast = p21;
	p22->pWest = 0;
}




class Player :public Map
{
public:
	Player();
	Room* pLocation = 0;
	vector<string> orphSatchel;

};

Player::Player()
{
	pLocation = mStart;
}


int main()
{

	bool gameOver = false;
	Map orphMap;

	Player Orpheus;



	if (!gameOver)

	{

		cout << "KATABASIS\n";
		cout << "You are Orpheus the Thracian.  Your wife has died and you must\n";
		cout << "rescue her from Hades himself.  This is a game of choices and tasks.\n";
		cout << "Make the wrong choices, and you will fail.  Make the right ones\n";
		cout << "and you will see Eurydice's face again.\n";
		cout << "Your choices will be displayed as such: (ChoiceOne - 1, ChoiceTwo - 2)\n";
		cout << "Simply enter the number that corresponds to your choice, then press enter\n";
		cout << "Make your choices wisely.\n";
		cout << endl;



		//Begin at home(p1)
		Orpheus.pLocation->pRoomName();
		Orpheus.pLocation->pRoomDesc();
		Orpheus.pLocation->pRoomDescExtended();


		cout << "Near the window on the north wall a slip of paper drifts to the floor,\n";
		cout << "having fallen seemingly from nowhere at all.\n";
		bool pickUpNote = false;
		do {
			cout << "Do you pick up the paper?\n";
			cout << "(Yes - 1, No - 2)\n";
			int choice = 0;
			cin >> choice;
			if (choice == 1)
			{
				pickUpNote = true;
				//take note out of roomStuff
				//add note to orphSatchel
				Orpheus.orphSatchel.push_back("note");


				cout << "You pick up the note.  It reads:  \n";
				cout << "“There is a chance you can retrieve her soul from Hades himself.\n";
				cout << "Go to him, make your plea.”  The note is unsigned.\n";
				cout << "You have heard rumors of a gate to The Underworld, \n";
				cout << "in a small inlet between two peninsulas on Taenarum,\n";
				cout << "far to the south.\n";
				bool toTaenarum = false;
				do {
					cout << "Do you go ? \n";
					cout << "(Yes - 1, No - 2)\n";
					int choice = 0;
					cin >> choice;

					if (choice == 1)
					{
						toTaenarum = true;
						cout << "You pack few things in your satchel - your magic lyre,\n";
						cout << "the note, and a pomegranate.\n";

						// add lyre and pomegranate to inventory
						Orpheus.orphSatchel.push_back("lyre");
						Orpheus.orphSatchel.push_back("pomegranate");

						cout << "Your satchel now contains:  \n";
						for (int i = 0; i < Orpheus.orphSatchel.size(); ++i)
						{
							cout << Orpheus.orphSatchel[i] << endl;
						}

						//Move south to Road to Taenarum(p2)
						Orpheus.pLocation = Orpheus.pLocation->pSouth;
						Orpheus.pLocation->pRoomName();
						cout << endl;
						Orpheus.pLocation->pRoomDesc();
						cout << endl;
						bool keepSouth = false;
						do {
							cout << "Do you continue south?\n";
							cout << "(North - 1, South - 2)";
							int choice = 0;
							cin >> choice;
							if (choice == 1)
							{
								cout << "If you move north you will return home.\n";
								cout << "It's far too soon to give up.\n";
								keepSouth = false;
							}
							else if (choice == 2)
							{
								keepSouth = true;
								//go to the gate at Taenarum
								Orpheus.pLocation = Orpheus.pLocation->pSouth;
								Orpheus.pLocation->pRoomName();
								cout << endl;
								Orpheus.pLocation->pRoomDesc();
								cout << endl;
								bool northtoGate = false;
								do {
									cout << "Do you move north, toward the gate?\n";
									cout << "(North - 1, South - 2)\n";
									int choice = 0;
									cin >> choice;
									if (choice == 1)
									{
										northtoGate = true;
										//Move north to Entrance (p4)
										Orpheus.pLocation = Orpheus.pLocation->pNorth;
										Orpheus.pLocation->pRoomName();
										cout << endl;
										Orpheus.pLocation->pRoomDesc();
										cout << endl;
										Orpheus.pLocation->pRoomDescExtended();
										//at 
										cout << "You remember the pomegranate in your satchel.\n";
										cout << "A symbol of the dead, you wonder if your small sacrifice will be enough.\n";
										bool usePomegranate = false;
										do {
											cout << "Use pomegranate?\n";
											cout << "(Yes - 1, No - 2)\n";
											int choice = 0;
											cin >> choice;
											if (choice == 1)
											{
												cout << "You tear the pomegranate open with your hands and present it to the gate.\n";
												cout << "Crimson juice pours forth from the wound in the fruit, dripping to the ground. \n";
												usePomegranate = true;
												// remove pomegranate from inventory
												Orpheus.orphSatchel.pop_back();



												cout << "The gate accepts your offering, relaxes its chains and swings open.  \n";

												cout << "Your satchel now contains:  \n";
												for (int i = 0; i < Orpheus.orphSatchel.size(); ++i)
												{
													cout << Orpheus.orphSatchel[i] << endl;
												}

												//Move east to Sharp Turn (p5)
												Orpheus.pLocation = Orpheus.pLocation->pEast;
												Orpheus.pLocation->pRoomName();
												cout << endl;
												Orpheus.pLocation->pRoomDesc();
												cout << endl;
												Orpheus.pLocation->pRoomDescExtended();


												//Move north to Cerberus(p6)

												Orpheus.pLocation = Orpheus.pLocation->pNorth;
												Orpheus.pLocation->pRoomName();
												cout << endl;
												Orpheus.pLocation->pRoomDesc();
												cout << endl;
												bool sleepDoggies = false;
												do {
													cout << "Panicked and desperate, you remember the power of your lyre\n";
													cout << "Do you play the lyre?\n";
													cout << "(Yes - 1, No - 2)\n";
													int choice = 0;
													cin >> choice;
													if (choice == 1)
													{
														sleepDoggies = true;
														cout << "You pull out your lyre and begin to play.  The first head falls asleep, \n";
														cout << "then the second, then the third.The path goes forward, forcing you to \n";
														cout << "step over the sleeping beast’s enormous paws.  ";
														cout << "Beyond the snooring heads to the north, you see a large wooden door.\n";
														bool walkThruDoor = false;
														do {
															cout << "Do you walk through the door?\n";
															cout << "( North - 1, South - 2)\n";
															int choice = 0;
															cin >> choice;
															if (choice == 1)
															{

																//Move north to Coin Room(p7)

																Orpheus.pLocation = Orpheus.pLocation->pNorth;
																Orpheus.pLocation->pRoomName();
																cout << endl;
																Orpheus.pLocation->pRoomDesc();
																cout << endl;
																walkThruDoor = true;

																cout << "The light glints off of two coins that lay on a table against the \n";
																cout << "west wall.\n";
																bool pickUpCoins = false;
																do {
																	cout << "Do you pick up the coins?\n";
																	cout << "(Yes - 1, No - 2)\n";
																	int choice = 0;
																	cin >> choice;
																	if (choice == 1)
																	{
																		pickUpCoins = true;
																		//remove coins from room array
																		//add coins to inventory
																		Orpheus.orphSatchel.push_back("coins");

																		cout << "Your satchel now contains:  ";
																		for (int i = 0; i < Orpheus.orphSatchel.size(); ++i)
																		{
																			cout << Orpheus.orphSatchel[i] << endl;
																		}

																		cout << "When you pick up the coins, you hear the sound of metal clanking\n";
																		cout << "against metal, and turn around to see an open door has appeared \n";
																		cout << "in the east wall.\n";
																		cout << "Walk east through the door?\n";
																		bool eastThruDoor = false;
																		do {
																			cout << "(East - 1, West - 2)\n";
																			int choice = 0;
																			cin >> choice;
																			if (choice == 1)
																			{
																				eastThruDoor = true;
																				cout << "You walk through the door.";
																				////Move east to Crossing Styx(p8)

																				Orpheus.pLocation = Orpheus.pLocation->pEast;
																				Orpheus.pLocation->pRoomName();
																				cout << endl;
																				Orpheus.pLocation->pRoomDesc();
																				cout << endl;
																				cout << "You remove the coins you found from your satchel and hand them to him\n";
																				Orpheus.orphSatchel.pop_back();

																				cout << "Your satchel now contains:  \n";
																				for (int i = 0; i < Orpheus.orphSatchel.size(); ++i)
																				{
																					cout << Orpheus.orphSatchel[i] << endl;
																				}
																				cout << "The boat ahead of you rises and falls with the low, gradual tide.\n";
																				bool boardBoat = false;
																				do {
																					cout << "Do you board?\n";
																					cout << "(Yes - 1, No - 2)\n";
																					int choice = 0;
																					cin >> choice;
																					if (choice == 1)
																					{
																						cout << "He raises the staff, which you see now is an oar, into the\n";
																						cout << "water, shoving the vessel away from the shore and out onto the\n";
																						cout << "water.Each time Charon’s oar jabs down toward the water, a dim\n";
																						cout << "glow illuminates the sides of the boat.You look over the edge\n";
																						cout << "and see faces contorted in sorrow flowing past, slipping toward\n";
																						cout << "either side of the boat and occasionally reaching toward you, \n";
																						cout << "leaving a trail through the mist.\n";
																						boardBoat = true;

																						////Move east to Shore of Souls(p9)

																						Orpheus.pLocation = Orpheus.pLocation->pEast;
																						Orpheus.pLocation->pRoomName();
																						cout << endl;
																						Orpheus.pLocation->pRoomDesc();
																						cout << endl;

																						cout << "You have nothing but your lyre and the note which inspired your journey. \n";
																						bool playLyre = false;
																						do {
																							cout << "Do you play your lyre ?\n";
																							cout << "(Yes - 1, No - 2)\n";
																							int choice = 0;
																							cin >> choice;

																							if (choice == 1)
																							{
																								playLyre = true;
																								cout << "You play your lyre.The spirits begin to watch you, eyes almost alive\n";
																								cout << "with the music, and their whisper - like sorrowful sounds quiet to near \n";
																								cout << "silence.They shuffle, if spirits could shuffle, into a formation.They move\n";
																								cout << "toward one another, compressing themselves into walls to the north and \n";
																								cout << "south sides, leaving a path for you to move forward.\n";
																								bool moveForward = false;
																								do {
																									cout << "Do you move forward?";
																									cout << "(Yes - 1, No - 2)\n";
																									int choice = 0;
																									cin >> choice;
																									if (choice == 1)
																									{
																										moveForward = true;
																										cout << "Your focus is on your path forward and you let the lyre fall to your\n";
																										cout << "side, stopping the music.The spirits ripple restlessly when you stop \n";
																										cout << "playing, and the walls begin to loosen and close in on you.\n";
																										bool continuePlaying = false;
																										do {
																											cout << "Do you continue to play ?\n";
																											cout << "(Yes - 1, No - 2)\n";
																											int choice = 0;
																											cin >> choice;
																											if (choice == 1)
																											{
																												continuePlaying = true;
																												cout << "When you begin to play again, the walls re - form, this time \n";
																												cout << "opening paths to the north and south.\n";
																												bool northSouthChoice = false;
																												do {
																													cout << "Do you move north or south?\n";
																													cout << "(North - 1, South - 2)\n";
																													int choice = 0;
																													cin >> choice;
																													if (choice == 1)
																													{
																														northSouthChoice = true;
																														cout << "You hear three voices in the distance blending together perfectly, \n";
																														cout << "like a silken piece of finely woven fabric.There is a door ahead of you.  \n";
																														cout << "You walk through it.\n\n";

																														////Move north to the Fates(p10)

																														Orpheus.pLocation = Orpheus.pLocation->pNorth;
																														Orpheus.pLocation->pRoomName();
																														cout << endl;
																														Orpheus.pLocation->pRoomDesc();
																														cout << endl;
																														bool acceptFates = false;
																														do {
																															cout << "Do you accept?\n";
																															cout << "(Yes - 1, No - 2)\n";
																															int choice = 0;
																															cin >> choice;

																															if (choice == 1)
																															{
																																acceptFates = true;
																																cout << "They disappear, leaving you alone in the room.On the east wall,\n";
																																cout << "there is a locked door.On the west wall, there hangs a skeleton\n";
																																cout << "with a key in its hand.\n";
																																bool takeKey = false;
																																do {
																																	cout << "Do you take the key?\n";
																																	cout << "(Yes - 1. No - 2)\n";
																																	int choice = 0;
																																	cin >> choice;
																																	if (choice == 1)
																																	{
																																		takeKey = true;
																																		Orpheus.orphSatchel.push_back("key");
																																		cout << "Your satchel now contains:  \n";
																																		for (int i = 0; i < Orpheus.orphSatchel.size(); ++i)
																																		{
																																			cout << Orpheus.orphSatchel[i] << endl;
																																		}
																																		cout << "You use the key to unlock the door on the east wall.\n";
																																		Orpheus.orphSatchel.pop_back();

																																		////Move east to Clotho (p11)

																																		Orpheus.pLocation = Orpheus.pLocation->pEast;
																																		Orpheus.pLocation->pRoomName();
																																		cout << endl;
																																		Orpheus.pLocation->pRoomDesc();
																																		cout << endl;

																																		cout << "“In order to pass, you must help me spin a lifetime, ” she says,\n";
																																		cout << "not looking up to meet your eyes.She stands up and gestures for you to sit.  \n";
																																		cout << "You spin the thread, watching the wool slip through your fingers, feeling as \n";
																																		cout << "though your only purpose has ever been to spin this thread.With a shriek, \n";
																																		cout << "Clotho slams her hand onto the wheel, forcing the spinning to a stop.\n";
																																		cout << "“None may be too long, ” she says.She clips the thread from the spool and \n";
																																		cout << "puts it in your hand. In the span of a blink, she disappears.\n";


																																		Orpheus.orphSatchel.push_back("thread");
																																		cout << "\nYour satchel now contains: \n";

																																		for (int i = 0; i < Orpheus.orphSatchel.size(); ++i)
																																		{
																																			cout << Orpheus.orphSatchel[i] << endl;

																																		}
																																		bool eastFate = false;
																																		do {
																																			cout << "The only door is ahead of you, to the east.  \n";
																																			cout << "(East - 1, West - 2)";
																																			int choice = 0;
																																			cin >> choice;
																																			if (choice == 1)
																																			{
																																				eastFate = true;
																																				////Move east to Laechesis (p12)
																																				Orpheus.pLocation = Orpheus.pLocation->pEast;
																																				Orpheus.pLocation->pRoomName();
																																				cout << endl;
																																				Orpheus.pLocation->pRoomDesc();
																																				cout << endl;

																																				cout << "She takes the thread from your hand and stretches it into a straight \n";
																																				cout << "line against the notched wood surface.Raising her face toward you, she nods.\n";
																																				cout << "You notice her eyelids cave inward, and do not open.She hands the thread back \n";
																																				cout << "to you, and it feels somehow heavier.You understand without words that this life\n";
																																				cout << "has been measured, and now bears the weight of its years.\n";

																																				bool scissorsFound = false;
																																				bool scissorsOrBust = false;
																																				do {
																																					cout << "The two doors unlock, one on the east wall and one on the south wall.  You must choose one\n";
																																					cout << "(East - 1, South - 2)\n";
																																					int choice = 0;
																																					cin >> choice;
																																					if (choice == 1)
																																					{
																																						scissorsOrBust = true;
																																						////move east to Scissors Room(p13)
																																						Orpheus.pLocation = Orpheus.pLocation->pEast;
																																						Orpheus.pLocation->pRoomName();
																																						cout << endl;
																																						Orpheus.pLocation->pRoomDesc();
																																						cout << endl;
																																						bool takeScissors = false;
																																						do {
																																							cout << "\nDo you take the scissors?\n";
																																							cout << "(Yes - 1, No - 2)\n";

																																							int choice = 0;
																																							cin >> choice;
																																							if (choice == 1)
																																							{
																																								takeScissors = true;
																																								Orpheus.orphSatchel.push_back("scissors");
																																								cout << "\nYour satchel now contains: \n";

																																								for (int i = 0; i < Orpheus.orphSatchel.size(); ++i)
																																								{
																																									cout << Orpheus.orphSatchel[i] << endl;

																																								}

																																								//////move back west to Laechesis(p12)
																																								Orpheus.pLocation = Orpheus.pLocation->pWest;
																																								Orpheus.pLocation->pRoomName();
																																								cout << endl;
																																								Orpheus.pLocation->pRoomDescExtended();
																																								cout << endl;

																																								bool southtoAtropos = false;
																																								do {

																																									cout << "\n(South - 1)\n";
																																									int choice = 0;
																																									cin >> choice;
																																									if (choice == 1)
																																									{
																																										southtoAtropos = true;
																																										////move south to Atropos(p14)
																																										Orpheus.pLocation = Orpheus.pLocation->pSouth;
																																										Orpheus.pLocation->pRoomName();
																																										cout << endl;
																																										Orpheus.pLocation->pRoomDesc();
																																										cout << endl;
																																										Orpheus.pLocation->pRoomDescExtended();
																																										bool cutThread = false;
																																										do {
																																											cout << "Do you cut the thread?\n";
																																											cout << "(Yes - 1, No - 2)\n";
																																											int choice = 0;
																																											cin >> choice;
																																											if (choice == 1)
																																											{
																																												cutThread = true;
																																												cout << "When the scissors meet the thread, it feels like cutting through flesh.\n";
																																												cout << "You are overcome with searing pain in your head and your vision goes dark.\n";
																																												cout << "Your mind flashes with the images of a life that was not your own, from the \n";
																																												cout << "blinding light of birth to the sudden darkness of death, and all the pains and \n";
																																												cout << "joys in between.For a moment, you feel your heart stop, and from a vantage point\n";
																																												cout << "above you watch everyone you love file past your prone corpse leaving coins and \n";
																																												cout << "offerings for your journey into the Underworld.\n\n";
																																												cout << "Your heart jolts and starts to beat again, and your vision clears.You have taken a \n";
																																												cout << "life to save a life.Like her sisters, Atropos disappeared as soon as the deed was done.\n";
																																												cout << "On the south wall, there is a door. \n";
																																												bool southtoHecate = false;

																																												do {
																																													cout << "Do you move south?\n";
																																													cout << "(Yes - 1, No - 2)\n";
																																													int choice = 0;
																																													cin >> choice;
																																													if (choice == 1)
																																													{
																																														southtoHecate = true;
																																														////move south to Hecate(p15)
																																														Orpheus.pLocation = Orpheus.pLocation->pSouth;
																																														Orpheus.pLocation->pRoomName();
																																														cout << endl;
																																														Orpheus.pLocation->pRoomDesc();
																																														cout << endl;
																																														cout << "Hecate stands at crossroads between you and your goal - an audience\n";
																																														cout << "with Hades and Persephone.You must give offerings to Hecate to\n";
																																														cout << "prove you are worth to enter.There is a Cyprus grove to the east.\n";

																																														bool easttoGrove = false;
																																														do {
																																															int choice = 0;
																																															cout << "(East - 1, West - 2)\n";
																																															cin >> choice;
																																															if (choice == 1)
																																															{
																																																easttoGrove = true;


																																																////move east to Cyprus Grove(p16)
																																																Orpheus.pLocation = Orpheus.pLocation->pEast;
																																																Orpheus.pLocation->pRoomName();
																																																cout << endl;
																																																Orpheus.pLocation->pRoomDesc();
																																																cout << endl;


																																																cout << "You go to the Cyprus tree,\n";
																																																cout << "cut off branch to give her and, digging in the upturned earth at the base of\n";
																																																cout << "tree, you find a key to give her.\n";

																																																Orpheus.orphSatchel.push_back("cyprus branch");
																																																Orpheus.orphSatchel.push_back("key");

																																																cout << "\nYour satchel now contains: \n";

																																																for (int i = 0; i < Orpheus.orphSatchel.size(); ++i)
																																																{
																																																	cout << Orpheus.orphSatchel[i] << endl;

																																																}

																																																bool backwestHecate = false;
																																																do {
																																																	cout << "Do you move back west to Hecate?";
																																																	cout << "(Yes - 1, No - 2)\n";
																																																	int choice = 0;
																																																	cin >> choice;
																																																	if (choice == 1)
																																																	{
																																																		backwestHecate = true;
																																																		////move back west to Hecate(p15)
																																																		Orpheus.pLocation = Orpheus.pLocation->pWest;
																																																		Orpheus.pLocation->pRoomName();
																																																		cout << endl;
																																																		Orpheus.pLocation->pRoomDescExtended();
																																																		cout << endl;
																																																		Orpheus.orphSatchel.pop_back();
																																																		Orpheus.orphSatchel.pop_back();

																																																		cout << "\nYour satchel now contains: \n";

																																																		for (int i = 0; i < Orpheus.orphSatchel.size(); ++i)
																																																		{
																																																			cout << Orpheus.orphSatchel[i] << endl;

																																																		}
																																																		bool toHades = false;
																																																		do {
																																																			cout << "Continue to Hades?\n";
																																																			cout << "(Yes - 1, No - 2)\n";
																																																			int choice = 0;
																																																			cin >> choice;
																																																			if (choice == 1)
																																																			{
																																																				toHades = true;

																																																				////move south to Hades and Persephone (p17)
																																																				Orpheus.pLocation = Orpheus.pLocation->pSouth;
																																																				Orpheus.pLocation->pRoomName();
																																																				cout << endl;
																																																				Orpheus.pLocation->pRoomDesc();
																																																				cout << endl;
																																																				cout << "You present the note to them and plead your case-Eurydice was taken from \n";
																																																				cout << "you before her time.  Looking at the entirety of eternity, a lifetime \n";
																																																				cout << "is such a small piece of it.  You beg them, please let you borrow her \n";
																																																				cout << "back only for the span of her lifetime, and then she will be returned \n";
																																																				cout << "to them.  You play your lyre and sing the most beautiful song you’ve \n";
																																																				cout << "ever sung-a lament for your lost love, a plea, a wish, everything \n";
																																																				cout << "contained within your heart.  Your song softens Persephone, and her \n";
																																																				cout << "influence over Hades is stronger than he would admit.  They will \n";
																																																				cout << "return her to you only for the span of her lifetime, not for yours.  But, if you \n";
																																																				cout << "turn to look at her before you both get all the way out of the Underworld and back \n";
																																																				cout << "into the sunlight of the living world, her spirit will be drawn\n";
																																																				cout << "backand your whole quest would have been for naught.  To escape, you must follow a straight path\n";
																																																				cout << "Deviate even a little, and you and Eurydice could be trapped forever.\n";
																																																				cout << "You thank them profusely, and without looking at Eurydice, you take her hand\n";
																																																				cout << "and begin your ascension.  There is a door on the west wall.\n";
																																																				bool westoutofHades = false;
																																																				do {
																																																					cout << "(West - 1)\n";
																																																					int choice = 0;
																																																					cin >> choice;
																																																					if (choice == 1)
																																																					{
																																																						westoutofHades = true;
																																																						////move west to shadow of erebus(p19)
																																																						Orpheus.pLocation = Orpheus.pLocation->pWest;
																																																						Orpheus.pLocation->pRoomName();
																																																						cout << endl;
																																																						Orpheus.pLocation->pRoomDesc();
																																																						cout << endl;
																																																						cout << "\nYou feel a pulling at your right side, not the pulling of hands,\n";
																																																						cout << "but the pulling of the Underworld.  A gravity drawing you, forcing your\n";
																																																						cout << "path to curve to the right.\n";
																																																						bool resisttheDarkness = false;
																																																						do {
																																																							cout << "Do you resist?\n";
																																																							cout << "(Yes - 1, No - 2)";
																																																							int choice = 0;
																																																							cin >> choice;
																																																							if (choice == 1)
																																																							{
																																																								resisttheDarkness = true;
																																																								cout << "You force yourself to move against the tide of darkness\n";
																																																								////move west to Shedon Ekei(p21)
																																																								Orpheus.pLocation = Orpheus.pLocation->pWest;
																																																								Orpheus.pLocation->pRoomName();
																																																								cout << endl;
																																																								Orpheus.pLocation->pRoomDesc();
																																																								cout << endl;

																																																								cout << "You have nearly fought your way through Erebus’s impossible darkness \n";
																																																								cout << "and finally feel the light on your face.  Behind you, Eurydice stumbles \n";
																																																								cout << "and her hand slips from yours.  Fearing a trick, and feeling yourself \n";
																																																								cout << "fully in the light, you feel yourself instinctively begin to turn and check on her. \n";

																																																								bool dontTurnAround = false;
																																																								do {
																																																									cout << "Do you stop yourself?\n";
																																																									cout << "(Yes - 1, No - 2)\n";
																																																									int choice = 0;
																																																									cin >> choice;
																																																									if (choice == 1)
																																																									{
																																																										dontTurnAround = true;
																																																										cout << "You stop yourself, remembering Hades’ warning.  \n";
																																																										cout << "Pausing, you reach back and wait to feel her hand in \n";
																																																										cout << "yours once more.  You continue forward until both of you \n";
																																																										cout << "are safely outside of the shadow of the gate to the Underworld.\n";

																																																										////move west to outside the gates(p22)
																																																										Orpheus.pLocation = Orpheus.pLocation->pWest;
																																																										Orpheus.pLocation->pRoomName();
																																																										cout << endl;
																																																										Orpheus.pLocation->pRoomDesc();
																																																										cout << endl;




																																																									}
																																																									else if (choice == 2)
																																																									{

																																																										cout << "no You turn around to see your empty hand reaching back to where Eurydice should have been,\n";
																																																										cout << "your fingertips still shrouded in Erebus’ inky shadow.   Her spirit is rescinded back into \n";
																																																										cout << "the Underworld, irretrievable to you until the time of your own death.  Your quest has \n";
																																																										cout << "failed.  You must return home, bereft and broken.\n";
																																																										gameOver;
																																																									}
																																																									else
																																																									{
																																																										cout << "That is not a valid option\n";
																																																										dontTurnAround = false;
																																																									}


																																																								} while (!dontTurnAround);





																																																							}
																																																							else if (choice == 2)
																																																							{
																																																								cout << "You give in to the draw of the abyss and allow yourself\n";
																																																								cout << "and your beloved to be pulled down into the Pit of Erebus,\n";
																																																								cout << "trapped forever in the inky darkness\n";
																																																								gameOver = true;
																																																							}
																																																							else
																																																							{
																																																								cout << "That is not a valid option\n";
																																																								resisttheDarkness = false;
																																																							}
																																																						} while (!resisttheDarkness);

																																																					}
																																																					else
																																																					{
																																																						cout << "\nYou really want to stay here?  Is it the ambiance?\n";
																																																						westoutofHades = false;
																																																					}
																																																				} while (!westoutofHades);

																																																			}
																																																			else if (choice == 2)
																																																			{
																																																				cout << "\nYou've come this far to give up?  Really?\n";
																																																				toHades = false;
																																																			}
																																																			else
																																																			{
																																																				cout << "That is not a valid choice.\n";
																																																				toHades = false;
																																																			}



																																																		} while (!toHades);

																																																	}
																																																	else if (choice == 2)
																																																	{
																																																		cout << "Are you sure?  You will be trapped in this Cypress Grove forever.\n";
																																																		backwestHecate = false;
																																																	}
																																																	else
																																																	{
																																																		cout << "\nThat was not a valid choice.\n";
																																																	}
																																																} while (!backwestHecate);

																																															}
																																															else if (choice == 2)
																																															{
																																																cout << "\nThere is nothing to the West\n";
																																																easttoGrove = false;

																																															}
																																															else
																																															{
																																																cout << "\nThat is not a valid choice.\n";
																																																easttoGrove = false;
																																															}

																																														} while (!easttoGrove);
																																													}
																																													else if (choice == 2)
																																													{
																																														cout << "Are you sure?  You'll be stuck.\n";
																																														southtoHecate = false;
																																													}
																																													else
																																													{
																																														cout << "That is not a valid choice.\n";
																																														southtoHecate = false;
																																													}



																																												} while (!southtoHecate);
																																											}
																																											else if (choice == 2)
																																											{
																																												cout << "A life is the toll.  Is that a sacrifice you're willing to make?\n";
																																												cutThread = false;
																																											}
																																											else {
																																												cout << "That is not a valid choice.\n";
																																												cutThread = false;
																																											}

																																										} while (!cutThread);
																																									}
																																									else
																																									{
																																										cout << "You will be stuck here forever.\n";
																																										southtoAtropos = false;
																																									}
																																								} while (!southtoAtropos);

																																							}
																																							else if (choice == 2)
																																							{
																																								cout << "You really might need them\n";
																																								takeScissors = false;
																																							}
																																							else
																																							{
																																								cout << "\nThat is not a valid choice.\n";
																																								takeScissors = false;
																																							}
																																						} while (!takeScissors);



																																					}
																																					else if (choice == 2)
																																					{
																																						cout << "That door is locked\n";
																																						scissorsOrBust = false;
																																					}
																																					else
																																					{
																																						cout << "That is not a valid choice.\n";
																																						scissorsOrBust = false;
																																					}
																																				} while (!scissorsOrBust);

																																			}
																																			else if (choice == 2)
																																			{
																																				cout << "There is nothing for you to the west.\n";
																																				eastFate = false;
																																			}
																																			else
																																			{
																																				cout << "That is not a valid choice.\n";
																																				eastFate = false;
																																			}
																																		} while (!eastFate);
																																	}
																																	else if (choice == 2)
																																	{
																																		takeKey = true;
																																		cout << "You are trapped in this locked room for eternity. \n";
																																		gameOver = true;
																																	}
																																	else
																																	{
																																		takeKey = false;
																																		cout << "That is not a valid choice.";
																																	}
																																} while (!takeKey);
																															}
																															else if (choice == 2)
																															{
																																acceptFates = true;
																																cout << "Your life is taken as the Fates' toll, and your quest has failed.\n";
																																gameOver = true;
																															}
																															else
																															{
																																acceptFates = false;
																																cout << "That is not a valid choice.\n";
																															}
																														} while (!acceptFates);
																													}
																													else if (choice == 2)
																													{
																														northSouthChoice = true;
																														////Move south to the Hypnos(p18)

																														Orpheus.pLocation = Orpheus.pLocation->pSouth;
																														Orpheus.pLocation->pRoomName();
																														cout << endl;
																														Orpheus.pLocation->pRoomDesc();
																														cout << endl;

																														cout << "“Who are you?  What do you want?” he demands of you. \n";
																														cout << "You tell him your quest, and his face softens.  \n";
																														cout << "“I will help you, but I can only help in one way.  \n";
																														cout << "Think of the thing you desire, and your dream will take you there.” \n";
																														cout << "Against the wall from which he came to you is a small bed made with threadbare linens. \n";

																														bool layDown = false;
																														do {
																															cout << "Do you lay down?\n";
																															cout << "(Yes - 1, No - 2)\n";
																															int choice = 0;
																															cin >> choice;
																															if (choice == 1)
																															{
																																cout << "As soon as you lay down \n";
																																cout << "your head, you are asleep and dreaming of your Eurydice. \n";
																																layDown = true;
																																bool southtoHecate = false;

																																do {
																																	cout << "In your dreams, Eurydice tells you to move east.  Do you obey?\n";
																																	cout << "(Yes - 1, No - 2)\n";
																																	int choice = 0;
																																	cin >> choice;
																																	if (choice == 1)
																																	{
																																		southtoHecate = true;
																																		////move east to Hecate(p15)
																																		Orpheus.pLocation = Orpheus.pLocation->pEast;
																																		Orpheus.pLocation->pRoomName();
																																		cout << endl;
																																		Orpheus.pLocation->pRoomDesc();
																																		cout << endl;
																																		cout << "Hecate stands at crossroads between you and your goal - an audience\n";
																																		cout << "with Hades and Persephone.You must give offerings to Hecate to\n";
																																		cout << "prove you are worth to enter.There is a Cyprus grove to the east.\n";

																																		bool easttoGrove = false;
																																		do {
																																			int choice = 0;
																																			cout << "(East - 1, West - 2)\n";
																																			cin >> choice;
																																			if (choice == 1)
																																			{
																																				easttoGrove = true;


																																				////move east to Cyprus Grove(p16)
																																				Orpheus.pLocation = Orpheus.pLocation->pEast;
																																				Orpheus.pLocation->pRoomName();
																																				cout << endl;
																																				Orpheus.pLocation->pRoomDesc();
																																				cout << endl;


																																				cout << "You go to the Cyprus tree,\n";
																																				cout << "cut off branch to give her and, digging in the upturned earth at the base of\n";
																																				cout << "tree, you find a key to give her.\n";

																																				Orpheus.orphSatchel.push_back("cyprus branch");
																																				Orpheus.orphSatchel.push_back("key");

																																				cout << "\nYour satchel now contains: \n";

																																				for (int i = 0; i < Orpheus.orphSatchel.size(); ++i)
																																				{
																																					cout << Orpheus.orphSatchel[i] << endl;

																																				}

																																				bool backwestHecate = false;
																																				do {
																																					cout << "Do you move back west to Hecate?";
																																					cout << "(Yes - 1, No - 2)\n";
																																					int choice = 0;
																																					cin >> choice;
																																					if (choice == 1)
																																					{
																																						backwestHecate = true;
																																						////move back west to Hecate(p15)
																																						Orpheus.pLocation = Orpheus.pLocation->pWest;
																																						Orpheus.pLocation->pRoomName();
																																						cout << endl;
																																						Orpheus.pLocation->pRoomDescExtended();
																																						cout << endl;
																																						Orpheus.orphSatchel.pop_back();
																																						Orpheus.orphSatchel.pop_back();

																																						cout << "\nYour satchel now contains: \n";

																																						for (int i = 0; i < Orpheus.orphSatchel.size(); ++i)
																																						{
																																							cout << Orpheus.orphSatchel[i] << endl;

																																						}
																																						bool toHades = false;
																																						do {
																																							cout << "Continue to Hades?\n";
																																							cout << "(Yes - 1, No - 2)\n";
																																							int choice = 0;
																																							cin >> choice;
																																							if (choice == 1)
																																							{
																																								toHades = true;

																																								////move south to Hades and Persephone (p17)
																																								Orpheus.pLocation = Orpheus.pLocation->pSouth;
																																								Orpheus.pLocation->pRoomName();
																																								cout << endl;
																																								Orpheus.pLocation->pRoomDesc();
																																								cout << endl;
																																								cout << "You present the note to them and plead your case-Eurydice was taken from \n";
																																								cout << "you before her time.  Looking at the entirety of eternity, a lifetime \n";
																																								cout << "is such a small piece of it.  You beg them, please let you borrow her \n";
																																								cout << "back only for the span of her lifetime, and then she will be returned \n";
																																								cout << "to them.  You play your lyre and sing the most beautiful song you’ve \n";
																																								cout << "ever sung-a lament for your lost love, a plea, a wish, everything \n";
																																								cout << "contained within your heart.  Your song softens Persephone, and her \n";
																																								cout << "influence over Hades is stronger than he would admit.  They will \n";
																																								cout << "return her to you only for the span of her lifetime, not for yours.  But, if you \n";
																																								cout << "turn to look at her before you both get all the way out of the Underworld and back \n";
																																								cout << "into the sunlight of the living world, her spirit will be drawn\n";
																																								cout << "backand your whole quest would have been for naught.  To escape, you must follow a straight path\n";
																																								cout << "Deviate even a little, and you and Eurydice could be trapped forever.\n";
																																								cout << "You thank them profusely, and without looking at Eurydice, you take her hand\n";
																																								cout << "and begin your ascension.  There is a door on the west wall.\n";
																																								bool westoutofHades = false;
																																								do {
																																									cout << "(West - 1)\n";
																																									int choice = 0;
																																									cin >> choice;
																																									if (choice == 1)
																																									{
																																										westoutofHades = true;
																																										////move west to shadow of erebus(p19)
																																										Orpheus.pLocation = Orpheus.pLocation->pWest;
																																										Orpheus.pLocation->pRoomName();
																																										cout << endl;
																																										Orpheus.pLocation->pRoomDesc();
																																										cout << endl;
																																										cout << "\nYou feel a pulling at your right side, not the pulling of hands,\n";
																																										cout << "but the pulling of the Underworld.  A gravity drawing you, forcing your\n";
																																										cout << "path to curve to the right.\n";
																																										bool resisttheDarkness = false;
																																										do {
																																											cout << "Do you resist?\n";
																																											cout << "(Yes - 1, No - 2)";
																																											int choice = 0;
																																											cin >> choice;
																																											if (choice == 1)
																																											{
																																												resisttheDarkness = true;
																																												cout << "You force yourself to move against the tide of darkness\n";
																																												////move west to Shedon Ekei(p21)
																																												Orpheus.pLocation = Orpheus.pLocation->pWest;
																																												Orpheus.pLocation->pRoomName();
																																												cout << endl;
																																												Orpheus.pLocation->pRoomDesc();
																																												cout << endl;

																																												cout << "You have nearly fought your way through Erebus’s impossible darkness \n";
																																												cout << "and finally feel the light on your face.  Behind you, Eurydice stumbles \n";
																																												cout << "and her hand slips from yours.  Fearing a trick, and feeling yourself \n";
																																												cout << "fully in the light, you feel yourself instinctively begin to turn and check on her. \n";

																																												bool dontTurnAround = false;
																																												do {
																																													cout << "Do you stop yourself?\n";
																																													cout << "(Yes - 1, No - 2)\n";
																																													int choice = 0;
																																													cin >> choice;
																																													if (choice == 1)
																																													{
																																														dontTurnAround = true;
																																														cout << "You stop yourself, remembering Hades’ warning.  \n";
																																														cout << "Pausing, you reach back and wait to feel her hand in \n";
																																														cout << "yours once more.  You continue forward until both of you \n";
																																														cout << "are safely outside of the shadow of the gate to the Underworld.\n";

																																														////move west to outside the gates(p22)
																																														Orpheus.pLocation = Orpheus.pLocation->pWest;
																																														Orpheus.pLocation->pRoomName();
																																														cout << endl;
																																														Orpheus.pLocation->pRoomDesc();
																																														cout << endl;




																																													}
																																													else if (choice == 2)
																																													{

																																														cout << "no You turn around to see your empty hand reaching back to where Eurydice should have been,\n";
																																														cout << "your fingertips still shrouded in Erebus’ inky shadow.   Her spirit is rescinded back into \n";
																																														cout << "the Underworld, irretrievable to you until the time of your own death.  Your quest has \n";
																																														cout << "failed.  You must return home, bereft and broken.\n";
																																														gameOver;
																																													}
																																													else
																																													{
																																														cout << "That is not a valid option\n";
																																														dontTurnAround = false;
																																													}


																																												} while (!dontTurnAround);





																																											}
																																											else if (choice == 2)
																																											{
																																												cout << "You give in to the draw of the abyss and allow yourself\n";
																																												cout << "and your beloved to be pulled down into the Pit of Erebus,\n";
																																												cout << "trapped forever in the inky darkness\n";
																																												resisttheDarkness = true;
																																												gameOver = true;
																																											}
																																											else
																																											{
																																												cout << "That is not a valid option\n";
																																												resisttheDarkness = false;
																																											}
																																										} while (!resisttheDarkness);

																																									}
																																									else
																																									{
																																										cout << "\nYou really want to stay here?  Is it the ambiance?\n";
																																										westoutofHades = false;
																																									}
																																								} while (!westoutofHades);

																																							}
																																							else if (choice == 2)
																																							{
																																								cout << "\nYou've come this far to give up?  Really?\n";
																																								toHades = false;
																																							}
																																							else
																																							{
																																								cout << "That is not a valid choice.\n";
																																								toHades = false;
																																							}



																																						} while (!toHades);

																																					}
																																					else if (choice == 2)
																																					{
																																						cout << "Are you sure?  You will be trapped in this Cypress Grove forever.\n";
																																						backwestHecate = false;
																																					}
																																					else
																																					{
																																						cout << "\nThat was not a valid choice.\n";
																																					}
																																				} while (!backwestHecate);

																																			}
																																			else if (choice == 2)
																																			{
																																				cout << "\nThere is nothing to the West\n";
																																				easttoGrove = false;

																																			}
																																			else
																																			{
																																				cout << "\nThat is not a valid choice.\n";
																																				easttoGrove = false;
																																			}

																																		} while (!easttoGrove);
																																	}
																																	else if (choice == 2)
																																	{
																																		cout << "Are you sure?  You'll be stuck.\n";
																																		southtoHecate = false;
																																	}
																																	else
																																	{
																																		cout << "That is not a valid choice.\n";
																																		southtoHecate = false;
																																	}



																																} while (!southtoHecate);



																															}
																															else if (choice == 2)
																															{
																																cout << "This is the only way Hypnos can help you.  If you refuse him, you\n";
																																cout << "will be stuck here forever.\n";
																																layDown = false;
																															}
																															else
																															{
																																cout << "That is not a valid choice.\n";
																																layDown = false;
																															}

																														} while (!layDown);



																													}
																													else {
																														northSouthChoice = false;
																														cout << "That is not a valid choice.\n";
																													}
																												} while (!northSouthChoice);
																											}
																											else if (choice == 2)
																											{
																												continuePlaying = true;
																												cout << "The spirits press in until you cannot breathe.  You have failed, and you\n";
																												cout << "are ejected from the underworld.  \n";

																												gameOver = true;

																											}
																											else
																											{
																												continuePlaying = false;
																												cout << "That is not a valid choice.\n";
																											}
																										} while (!continuePlaying);
																									}
																									else if (choice == 2)
																									{
																										moveForward = true;
																										cout << "The spirits press in until you cannot breathe.  You have failed, and you\n";
																										cout << "are ejected from the underworld.  \n";
																										gameOver = true;
																									}
																									else
																									{
																										cout << "That is not a valid choice.\n";
																										moveForward = false;
																									}
																								} while (!moveForward);
																							}
																							else if (choice == 2)
																							{
																								cout << "You are stuck, with the spirits closing in you ever more tightly.You can\n";
																								cout << "just move your arms enough to reach your satchel.The spirits continue to \n";
																								cout << "close in on you.Will you try to soothe them with your lyre, or do you \n";
																								cout << "resign yourself to a lifetime trapped in the underworld ? \n";
																								playLyre = false;

																							}
																							else
																							{
																								cout << "That is not a valid option.\n";
																								playLyre = false;
																							}
																						} while (!playLyre);



																					}
																					else if (choice == 2)
																					{
																						cout << "If you refuse to board the boat, you will be stuck here for eternity\n";
																						boardBoat = false;
																					}
																					else
																					{
																						cout << "that is not a valid option.\n";
																						boardBoat = false;
																					}

																				} while (!boardBoat);

																			}
																			else if (choice == 2)
																			{
																				cout << "There is nothing to the west.\n";
																				eastThruDoor = false;
																			}
																			else
																			{
																				cout << "That is not a valid choice.";
																				eastThruDoor = false;
																			}
																		} while (!eastThruDoor);
																	}
																	else if (choice == 2)
																	{
																		cout << "If you do not take the coins, you travel without the\n";
																		cout << "ability to pay your debts, should you accrue them.\n";
																		pickUpCoins = false;
																	}
																	else
																	{
																		cout << "That is not a valid option.\n";
																		pickUpCoins = false;
																	}
																} while (!pickUpCoins);

															}
															else if (choice == 2)
															{
																cout << "There is nothing for you to the south.\n";
																walkThruDoor = false;
															}
															else
															{
																cout << "That is not a valid option.\n";
																walkThruDoor = false;
															}
														} while (!walkThruDoor);

													}
													else if (choice == 2)
													{
														cout << "If you do not play youre lyre, you will not escape this alive.";
														cout << "Please rethink your choice.\n";
														sleepDoggies = false;

													}
													else
													{
														cout << "That is not a valid option.";
														sleepDoggies = false;

													}
												} while (!sleepDoggies);
											}
											else if (choice == 2)
											{
												cout << "You have nothing else to offer, unless you wish to sacrifice yourself.\n";
												usePomegranate = false;
											}
											else
											{
												cout << "That is not a valid choice.\n";
												usePomegranate = false;
											}
										} while (!usePomegranate);

									}
									else if (choice == 2)
									{
										northtoGate = false;
										cout << "There is nothing to the south\n";
									}
									else
									{
										cout << "That is not a valid choice.";
										northtoGate = false;
									}
								} while (!northtoGate);
							}
							else
							{
								cout << "That is not a valid choice.\n";
								keepSouth = false;
							}
						} while (!keepSouth);
					}
					else if (choice == 2)
					{
						toTaenarum = false;
						bool toTaenarumStillFalse = true;
						do {
							cout << "If you are unwilling to fight for her, you must\n";
							cout << "not have loved her in the first place.Will you lay \n";
							cout << "down and accept your lonely fate, or will you trudge \n";
							cout << "through the Underworld for her ?\n";
							cout << "(Yes - 1, No - 2)\n";
							int choice = 0;
							cin >> choice;

							if (choice == 1)
							{
								toTaenarumStillFalse = true;
								cout << "Good job.  Go to the road.";
								cout << "You pack few things in your satchel - your magic lyre,\n";
								cout << "the note, and a pomegranate.\n";

								// add lyre, note, pomegranate to inventory
								// add lyre and pomegranate to inventory
								Orpheus.orphSatchel.push_back("lyre");
								Orpheus.orphSatchel.push_back("pomegranate");

								cout << "Your satchel now contains:  \n";
								for (int i = 0; i < Orpheus.orphSatchel.size(); ++i)
								{
									cout << Orpheus.orphSatchel[i] << endl;
								}

								//Move south to Road to Taenarum(p2)
								Orpheus.pLocation = Orpheus.pLocation->pSouth;
								Orpheus.pLocation->pRoomName();
								cout << endl;
								Orpheus.pLocation->pRoomDesc();
								cout << endl;
								bool continueSouth = false;
								do {
									cout << "Do you continue south?\n";
									cout << "(North - 1, South - 2)";
									int choice = 0;
									cin >> choice;
									if (choice == 1)
									{
										continueSouth = false;
										cout << "Home is to the north.  Are you giving up already?.\n";
									}
									else if (choice == 2)
									{
										continueSouth = true;
										//go to the gate at Taenarum
										Orpheus.pLocation = Orpheus.pLocation->pSouth;
										Orpheus.pLocation->pRoomName();
										cout << endl;
										Orpheus.pLocation->pRoomDesc();
										cout << endl;
										bool northToGate = false;
										do {
											cout << "Do you move north, toward the gate?\n";
											cout << "(North - 1, South - 2)\n";
											int choice = 0;
											cin >> choice;
											if (choice == 1)
											{
												northToGate = true;
												//Move north to Entrance (p4)
												Orpheus.pLocation = Orpheus.pLocation->pNorth;
												Orpheus.pLocation->pRoomName();
												cout << endl;
												Orpheus.pLocation->pRoomDesc();
												cout << endl;
												//at 
												cout << "You remember the pomegranate in your satchel.\n";
												cout << "A symbol of the dead, you wonder if your small sacrifice will be enough.\n";
												bool usePomegranate = false;
												do {
													cout << "Use pomegranate?\n";
													cout << "(Yes - 1, No - 2)\n";
													int choice = 0;
													cin >> choice;
													if (choice == 1)
													{
														cout << "You tear the pomegranate open with your hands and present it to the gate.\n";
														cout << "Crimson juice pours forth from the wound in the fruit, dripping to the ground. \n";
														usePomegranate = true;
														// remove pomegranate from inventory
														Orpheus.orphSatchel.pop_back();



														cout << "The gate accepts your offering, relaxes its chains and swings open.  \n";

														cout << "Your satchel now contains:  \n";
														for (int i = 0; i < Orpheus.orphSatchel.size(); ++i)
														{
															cout << Orpheus.orphSatchel[i] << endl;
														}

														//Move east to Sharp Turn (p5)
														Orpheus.pLocation = Orpheus.pLocation->pEast;
														Orpheus.pLocation->pRoomName();
														cout << endl;
														Orpheus.pLocation->pRoomDesc();
														cout << endl;
														Orpheus.pLocation->pRoomDescExtended();


														//Move north to Cerberus(p6)

														Orpheus.pLocation = Orpheus.pLocation->pNorth;
														Orpheus.pLocation->pRoomName();
														cout << endl;
														Orpheus.pLocation->pRoomDesc();
														cout << endl;
														bool sleepDoggies = false;
														do {
															cout << "Panicked and desperate, you remember the power of your lyre\n";
															cout << "Do you play the lyre?\n";
															cout << "(Yes - 1, No - 2)\n";
															int choice = 0;
															cin >> choice;
															if (choice == 1)
															{
																sleepDoggies = true;
																cout << "You pull out your lyre and begin to play.  The first head falls asleep, \n";
																cout << "then the second, then the third.The path goes forward, forcing you to \n";
																cout << "step over the sleeping beast’s enormous paws.  ";
																cout << "Beyond the snooring heads to the north, you see a large wooden door.\n";
																bool walkThruDoor = false;
																do {
																	cout << "Do you walk through the door?\n";
																	cout << "( North - 1, South - 2)\n";
																	int choice = 0;
																	cin >> choice;
																	if (choice == 1)
																	{

																		//Move north to Coin Room(p7)

																		Orpheus.pLocation = Orpheus.pLocation->pNorth;
																		Orpheus.pLocation->pRoomName();
																		cout << endl;
																		Orpheus.pLocation->pRoomDesc();
																		cout << endl;
																		walkThruDoor = true;

																		cout << "The light glints off of two coins that lay on a table against the \n";
																		cout << "west wall.\n";
																		bool pickUpCoins = false;
																		do {
																			cout << "Do you pick up the coins?\n";
																			cout << "(Yes - 1, No - 2)\n";
																			int choice = 0;
																			cin >> choice;
																			if (choice == 1)
																			{
																				pickUpCoins = true;
																				//remove coins from room array
																				//add coins to inventory
																				Orpheus.orphSatchel.push_back("coins");

																				cout << "Your satchel now contains:  ";
																				for (int i = 0; i < Orpheus.orphSatchel.size(); ++i)
																				{
																					cout << Orpheus.orphSatchel[i] << endl;
																				}

																				cout << "When you pick up the coins, you hear the sound of metal clanking\n";
																				cout << "against metal, and turn around to see an open door has appeared \n";
																				cout << "in the east wall.\n";
																				cout << "Walk east through the door?\n";
																				bool eastThruDoor = false;
																				do {
																					cout << "(East - 1, West - 2)\n";
																					int choice = 0;
																					cin >> choice;
																					if (choice == 1)
																					{
																						eastThruDoor = true;
																						cout << "You walk through the door.";
																						////Move east to Crossing Styx(p8)

																						Orpheus.pLocation = Orpheus.pLocation->pEast;
																						Orpheus.pLocation->pRoomName();
																						cout << endl;
																						Orpheus.pLocation->pRoomDesc();
																						cout << endl;
																						cout << "You remove the coins you found from your satchel and hand them to him\n";
																						Orpheus.orphSatchel.pop_back();

																						cout << "Your satchel now contains:  \n";
																						for (int i = 0; i < Orpheus.orphSatchel.size(); ++i)
																						{
																							cout << Orpheus.orphSatchel[i] << endl;
																						}
																						cout << "The boat ahead of you rises and falls with the low, gradual tide.\n";
																						bool boardBoat = false;
																						do {
																							cout << "Do you board?\n";
																							cout << "(Yes - 1, No - 2)\n";
																							int choice = 0;
																							cin >> choice;
																							if (choice == 1)
																							{
																								cout << "He raises the staff, which you see now is an oar, into the\n";
																								cout << "water, shoving the vessel away from the shore and out onto the\n";
																								cout << "water.Each time Charon’s oar jabs down toward the water, a dim\n";
																								cout << "glow illuminates the sides of the boat.You look over the edge\n";
																								cout << "and see faces contorted in sorrow flowing past, slipping toward\n";
																								cout << "either side of the boat and occasionally reaching toward you, \n";
																								cout << "leaving a trail through the mist.\n";
																								boardBoat = true;

																								////Move east to Shore of Souls(p9)

																								Orpheus.pLocation = Orpheus.pLocation->pEast;
																								Orpheus.pLocation->pRoomName();
																								cout << endl;
																								Orpheus.pLocation->pRoomDesc();
																								cout << endl;

																								cout << "You have nothing but your lyre and the note which inspired your journey. \n";
																								bool playLyre = false;
																								do {
																									cout << "Do you play your lyre ?\n";
																									cout << "(Yes - 1, No - 2)\n";
																									int choice = 0;
																									cin >> choice;

																									if (choice == 1)
																									{
																										playLyre = true;
																										cout << "You play your lyre.The spirits begin to watch you, eyes almost alive\n";
																										cout << "with the music, and their whisper - like sorrowful sounds quiet to near \n";
																										cout << "silence.They shuffle, if spirits could shuffle, into a formation.They move\n";
																										cout << "toward one another, compressing themselves into walls to the north and \n";
																										cout << "south sides, leaving a path for you to move forward.\n";
																										bool moveForward = false;
																										do {
																											cout << "Do you move forward?";
																											cout << "(Yes - 1, No - 2)\n";
																											int choice = 0;
																											cin >> choice;
																											if (choice == 1)
																											{
																												moveForward = true;
																												cout << "Your focus is on your path forward and you let the lyre fall to your\n";
																												cout << "side, stopping the music.The spirits ripple restlessly when you stop \n";
																												cout << "playing, and the walls begin to loosen and close in on you.\n";
																												bool continuePlaying = false;
																												do {
																													cout << "Do you continue to play ?\n";
																													cout << "(Yes - 1, No - 2)\n";
																													int choice = 0;
																													cin >> choice;
																													if (choice == 1)
																													{
																														continuePlaying = true;
																														cout << "When you begin to play again, the walls re - form, this time \n";
																														cout << "opening paths to the north and south.\n";
																														bool northSouthChoice = false;
																														do {
																															cout << "Do you move north or south?\n";
																															cout << "(North - 1, South - 2)\n";
																															int choice = 0;
																															cin >> choice;
																															if (choice == 1)
																															{
																																northSouthChoice = true;
																																cout << "You hear three voices in the distance blending together perfectly, \n";
																																cout << "like a silken piece of finely woven fabric.There is a door ahead of you.  \n";
																																cout << "You walk through it.\n\n";

																																////Move north to the Fates(p10)

																																Orpheus.pLocation = Orpheus.pLocation->pNorth;
																																Orpheus.pLocation->pRoomName();
																																cout << endl;
																																Orpheus.pLocation->pRoomDesc();
																																cout << endl;
																																bool acceptFates = false;
																																do {
																																	cout << "Do you accept?\n";
																																	cout << "(Yes - 1, No - 2)\n";
																																	int choice = 0;
																																	cin >> choice;

																																	if (choice == 1)
																																	{
																																		acceptFates = true;
																																		cout << "They disappear, leaving you alone in the room.On the east wall,\n";
																																		cout << "there is a locked door.On the west wall, there hangs a skeleton\n";
																																		cout << "with a key in its hand.\n";
																																		bool takeKey = false;
																																		do {
																																			cout << "Do you take the key?\n";
																																			cout << "(Yes - 1. No - 2)\n";
																																			int choice = 0;
																																			cin >> choice;
																																			if (choice == 1)
																																			{
																																				takeKey = true;
																																				Orpheus.orphSatchel.push_back("key");
																																				cout << "Your satchel now contains:  \n";
																																				for (int i = 0; i < Orpheus.orphSatchel.size(); ++i)
																																				{
																																					cout << Orpheus.orphSatchel[i] << endl;
																																				}
																																				cout << "You use the key to unlock the door on the east wall.\n";
																																				Orpheus.orphSatchel.pop_back();

																																				////Move east to Clotho (p11)

																																				Orpheus.pLocation = Orpheus.pLocation->pEast;
																																				Orpheus.pLocation->pRoomName();
																																				cout << endl;
																																				Orpheus.pLocation->pRoomDesc();
																																				cout << endl;

																																				cout << "“In order to pass, you must help me spin a lifetime, ” she says,\n";
																																				cout << "not looking up to meet your eyes.She stands up and gestures for you to sit.  \n";
																																				cout << "You spin the thread, watching the wool slip through your fingers, feeling as \n";
																																				cout << "though your only purpose has ever been to spin this thread.With a shriek, \n";
																																				cout << "Clotho slams her hand onto the wheel, forcing the spinning to a stop.\n";
																																				cout << "“None may be too long, ” she says.She clips the thread from the spool and \n";
																																				cout << "puts it in your hand. In the span of a blink, she disappears.\n";


																																				Orpheus.orphSatchel.push_back("thread");
																																				cout << "\nYour satchel now contains: \n";

																																				for (int i = 0; i < Orpheus.orphSatchel.size(); ++i)
																																				{
																																					cout << Orpheus.orphSatchel[i] << endl;

																																				}
																																				bool eastFate = false;
																																				do {
																																					cout << "The only door is ahead of you, to the east.  \n";
																																					cout << "(East - 1, West - 2)";
																																					int choice = 0;
																																					cin >> choice;
																																					if (choice == 1)
																																					{
																																						eastFate = true;
																																						////Move east to Laechesis (p12)
																																						Orpheus.pLocation = Orpheus.pLocation->pEast;
																																						Orpheus.pLocation->pRoomName();
																																						cout << endl;
																																						Orpheus.pLocation->pRoomDesc();
																																						cout << endl;

																																						cout << "She takes the thread from your hand and stretches it into a straight \n";
																																						cout << "line against the notched wood surface.Raising her face toward you, she nods.\n";
																																						cout << "You notice her eyelids cave inward, and do not open.She hands the thread back \n";
																																						cout << "to you, and it feels somehow heavier.You understand without words that this life\n";
																																						cout << "has been measured, and now bears the weight of its years.\n";

																																						bool scissorsFound = false;
																																						bool scissorsOrBust = false;
																																						do {
																																							cout << "The two doors unlock, one on the east wall and one on the south wall.  You must choose one\n";
																																							cout << "(East - 1, South - 2)\n";
																																							int choice = 0;
																																							cin >> choice;
																																							if (choice == 1)
																																							{
																																								scissorsOrBust = true;
																																								////move east to Scissors Room(p13)
																																								Orpheus.pLocation = Orpheus.pLocation->pEast;
																																								Orpheus.pLocation->pRoomName();
																																								cout << endl;
																																								Orpheus.pLocation->pRoomDesc();
																																								cout << endl;
																																								bool takeScissors = false;
																																								do {
																																									cout << "\nDo you take the scissors?\n";
																																									cout << "(Yes - 1, No - 2)\n";

																																									int choice = 0;
																																									cin >> choice;
																																									if (choice == 1)
																																									{
																																										takeScissors = true;
																																										Orpheus.orphSatchel.push_back("scissors");
																																										cout << "\nYour satchel now contains: \n";

																																										for (int i = 0; i < Orpheus.orphSatchel.size(); ++i)
																																										{
																																											cout << Orpheus.orphSatchel[i] << endl;

																																										}

																																										//////move back west to Laechesis(p12)
																																										Orpheus.pLocation = Orpheus.pLocation->pWest;
																																										Orpheus.pLocation->pRoomName();
																																										cout << endl;
																																										Orpheus.pLocation->pRoomDescExtended();
																																										cout << endl;

																																										bool southtoAtropos = false;
																																										do {

																																											cout << "\n(South - 1)\n";
																																											int choice = 0;
																																											cin >> choice;
																																											if (choice == 1)
																																											{
																																												southtoAtropos = true;
																																												////move south to Atropos(p14)
																																												Orpheus.pLocation = Orpheus.pLocation->pSouth;
																																												Orpheus.pLocation->pRoomName();
																																												cout << endl;
																																												Orpheus.pLocation->pRoomDesc();
																																												cout << endl;
																																												Orpheus.pLocation->pRoomDescExtended();
																																												bool cutThread = false;
																																												do {
																																													cout << "Do you cut the thread?\n";
																																													cout << "(Yes - 1, No - 2)\n";
																																													int choice = 0;
																																													cin >> choice;
																																													if (choice == 1)
																																													{
																																														cutThread = true;
																																														cout << "When the scissors meet the thread, it feels like cutting through flesh.\n";
																																														cout << "You are overcome with searing pain in your head and your vision goes dark.\n";
																																														cout << "Your mind flashes with the images of a life that was not your own, from the \n";
																																														cout << "blinding light of birth to the sudden darkness of death, and all the pains and \n";
																																														cout << "joys in between.For a moment, you feel your heart stop, and from a vantage point\n";
																																														cout << "above you watch everyone you love file past your prone corpse leaving coins and \n";
																																														cout << "offerings for your journey into the Underworld.\n\n";
																																														cout << "Your heart jolts and starts to beat again, and your vision clears.You have taken a \n";
																																														cout << "life to save a life.Like her sisters, Atropos disappeared as soon as the deed was done.\n";
																																														cout << "On the south wall, there is a door. \n";
																																														bool southtoHecate = false;

																																														do {
																																															cout << "Do you move south?\n";
																																															cout << "(Yes - 1, No - 2)\n";
																																															int choice = 0;
																																															cin >> choice;
																																															if (choice == 1)
																																															{
																																																southtoHecate = true;
																																																////move south to Hecate(p15)
																																																Orpheus.pLocation = Orpheus.pLocation->pSouth;
																																																Orpheus.pLocation->pRoomName();
																																																cout << endl;
																																																Orpheus.pLocation->pRoomDesc();
																																																cout << endl;
																																																cout << "Hecate stands at crossroads between you and your goal - an audience\n";
																																																cout << "with Hades and Persephone.You must give offerings to Hecate to\n";
																																																cout << "prove you are worth to enter.There is a Cyprus grove to the east.\n";

																																																bool easttoGrove = false;
																																																do {
																																																	int choice = 0;
																																																	cout << "(East - 1, West - 2)\n";
																																																	cin >> choice;
																																																	if (choice == 1)
																																																	{
																																																		easttoGrove = true;


																																																		////move east to Cyprus Grove(p16)
																																																		Orpheus.pLocation = Orpheus.pLocation->pEast;
																																																		Orpheus.pLocation->pRoomName();
																																																		cout << endl;
																																																		Orpheus.pLocation->pRoomDesc();
																																																		cout << endl;


																																																		cout << "You go to the Cyprus tree,\n";
																																																		cout << "cut off branch to give her and, digging in the upturned earth at the base of\n";
																																																		cout << "tree, you find a key to give her.\n";

																																																		Orpheus.orphSatchel.push_back("cyprus branch");
																																																		Orpheus.orphSatchel.push_back("key");

																																																		cout << "\nYour satchel now contains: \n";

																																																		for (int i = 0; i < Orpheus.orphSatchel.size(); ++i)
																																																		{
																																																			cout << Orpheus.orphSatchel[i] << endl;

																																																		}

																																																		bool backwestHecate = false;
																																																		do {
																																																			cout << "Do you move back west to Hecate?";
																																																			cout << "(Yes - 1, No - 2)\n";
																																																			int choice = 0;
																																																			cin >> choice;
																																																			if (choice == 1)
																																																			{
																																																				backwestHecate = true;
																																																				////move back west to Hecate(p15)
																																																				Orpheus.pLocation = Orpheus.pLocation->pWest;
																																																				Orpheus.pLocation->pRoomName();
																																																				cout << endl;
																																																				Orpheus.pLocation->pRoomDescExtended();
																																																				cout << endl;
																																																				Orpheus.orphSatchel.pop_back();
																																																				Orpheus.orphSatchel.pop_back();

																																																				cout << "\nYour satchel now contains: \n";

																																																				for (int i = 0; i < Orpheus.orphSatchel.size(); ++i)
																																																				{
																																																					cout << Orpheus.orphSatchel[i] << endl;

																																																				}
																																																				bool toHades = false;
																																																				do {
																																																					cout << "Continue to Hades?\n";
																																																					cout << "(Yes - 1, No - 2)\n";
																																																					int choice = 0;
																																																					cin >> choice;
																																																					if (choice == 1)
																																																					{
																																																						toHades = true;

																																																						////move south to Hades and Persephone (p17)
																																																						Orpheus.pLocation = Orpheus.pLocation->pSouth;
																																																						Orpheus.pLocation->pRoomName();
																																																						cout << endl;
																																																						Orpheus.pLocation->pRoomDesc();
																																																						cout << endl;
																																																						cout << "You present the note to them and plead your case-Eurydice was taken from \n";
																																																						cout << "you before her time.  Looking at the entirety of eternity, a lifetime \n";
																																																						cout << "is such a small piece of it.  You beg them, please let you borrow her \n";
																																																						cout << "back only for the span of her lifetime, and then she will be returned \n";
																																																						cout << "to them.  You play your lyre and sing the most beautiful song you’ve \n";
																																																						cout << "ever sung-a lament for your lost love, a plea, a wish, everything \n";
																																																						cout << "contained within your heart.  Your song softens Persephone, and her \n";
																																																						cout << "influence over Hades is stronger than he would admit.  They will \n";
																																																						cout << "return her to you only for the span of her lifetime, not for yours.  But, if you \n";
																																																						cout << "turn to look at her before you both get all the way out of the Underworld and back \n";
																																																						cout << "into the sunlight of the living world, her spirit will be drawn\n";
																																																						cout << "backand your whole quest would have been for naught.  To escape, you must follow a straight path\n";
																																																						cout << "Deviate even a little, and you and Eurydice could be trapped forever.\n";
																																																						cout << "You thank them profusely, and without looking at Eurydice, you take her hand\n";
																																																						cout << "and begin your ascension.  There is a door on the west wall.\n";
																																																						bool westoutofHades = false;
																																																						do {
																																																							cout << "(West - 1)\n";
																																																							int choice = 0;
																																																							cin >> choice;
																																																							if (choice == 1)
																																																							{
																																																								westoutofHades = true;
																																																								////move west to shadow of erebus(p19)
																																																								Orpheus.pLocation = Orpheus.pLocation->pWest;
																																																								Orpheus.pLocation->pRoomName();
																																																								cout << endl;
																																																								Orpheus.pLocation->pRoomDesc();
																																																								cout << endl;
																																																								cout << "\nYou feel a pulling at your right side, not the pulling of hands,\n";
																																																								cout << "but the pulling of the Underworld.  A gravity drawing you, forcing your\n";
																																																								cout << "path to curve to the right.\n";
																																																								bool resisttheDarkness = false;
																																																								do {
																																																									cout << "Do you resist?\n";
																																																									cout << "(Yes - 1, No - 2)";
																																																									int choice = 0;
																																																									cin >> choice;
																																																									if (choice == 1)
																																																									{
																																																										resisttheDarkness = true;
																																																										cout << "You force yourself to move against the tide of darkness\n";
																																																										////move west to Shedon Ekei(p21)
																																																										Orpheus.pLocation = Orpheus.pLocation->pWest;
																																																										Orpheus.pLocation->pRoomName();
																																																										cout << endl;
																																																										Orpheus.pLocation->pRoomDesc();
																																																										cout << endl;

																																																										cout << "You have nearly fought your way through Erebus’s impossible darkness \n";
																																																										cout << "and finally feel the light on your face.  Behind you, Eurydice stumbles \n";
																																																										cout << "and her hand slips from yours.  Fearing a trick, and feeling yourself \n";
																																																										cout << "fully in the light, you feel yourself instinctively begin to turn and check on her. \n";

																																																										bool dontTurnAround = false;
																																																										do {
																																																											cout << "Do you stop yourself?\n";
																																																											cout << "(Yes - 1, No - 2)\n";
																																																											int choice = 0;
																																																											cin >> choice;
																																																											if (choice == 1)
																																																											{
																																																												dontTurnAround = true;
																																																												cout << "You stop yourself, remembering Hades’ warning.  \n";
																																																												cout << "Pausing, you reach back and wait to feel her hand in \n";
																																																												cout << "yours once more.  You continue forward until both of you \n";
																																																												cout << "are safely outside of the shadow of the gate to the Underworld.\n";

																																																												////move west to outside the gates(p22)
																																																												Orpheus.pLocation = Orpheus.pLocation->pWest;
																																																												Orpheus.pLocation->pRoomName();
																																																												cout << endl;
																																																												Orpheus.pLocation->pRoomDesc();
																																																												cout << endl;




																																																											}
																																																											else if (choice == 2)
																																																											{

																																																												cout << "no You turn around to see your empty hand reaching back to where Eurydice should have been,\n";
																																																												cout << "your fingertips still shrouded in Erebus’ inky shadow.   Her spirit is rescinded back into \n";
																																																												cout << "the Underworld, irretrievable to you until the time of your own death.  Your quest has \n";
																																																												cout << "failed.  You must return home, bereft and broken.\n";
																																																												gameOver;
																																																											}
																																																											else
																																																											{
																																																												cout << "That is not a valid option\n";
																																																												dontTurnAround = false;
																																																											}


																																																										} while (!dontTurnAround);





																																																									}
																																																									else if (choice == 2)
																																																									{
																																																										cout << "You give in to the draw of the abyss and allow yourself\n";
																																																										cout << "and your beloved to be pulled down into the Pit of Erebus,\n";
																																																										cout << "trapped forever in the inky darkness\n";
																																																										gameOver = true;
																																																									}
																																																									else
																																																									{
																																																										cout << "That is not a valid option\n";
																																																										resisttheDarkness = false;
																																																									}
																																																								} while (!resisttheDarkness);

																																																							}
																																																							else
																																																							{
																																																								cout << "\nYou really want to stay here?  Is it the ambiance?\n";
																																																								westoutofHades = false;
																																																							}
																																																						} while (!westoutofHades);

																																																					}
																																																					else if (choice == 2)
																																																					{
																																																						cout << "\nYou've come this far to give up?  Really?\n";
																																																						toHades = false;
																																																					}
																																																					else
																																																					{
																																																						cout << "That is not a valid choice.\n";
																																																						toHades = false;
																																																					}



																																																				} while (!toHades);

																																																			}
																																																			else if (choice == 2)
																																																			{
																																																				cout << "Are you sure?  You will be trapped in this Cypress Grove forever.\n";
																																																				backwestHecate = false;
																																																			}
																																																			else
																																																			{
																																																				cout << "\nThat was not a valid choice.\n";
																																																			}
																																																		} while (!backwestHecate);

																																																	}
																																																	else if (choice == 2)
																																																	{
																																																		cout << "\nThere is nothing to the West\n";
																																																		easttoGrove = false;

																																																	}
																																																	else
																																																	{
																																																		cout << "\nThat is not a valid choice.\n";
																																																		easttoGrove = false;
																																																	}

																																																} while (!easttoGrove);
																																															}
																																															else if (choice == 2)
																																															{
																																																cout << "Are you sure?  You'll be stuck.\n";
																																																southtoHecate = false;
																																															}
																																															else
																																															{
																																																cout << "That is not a valid choice.\n";
																																																southtoHecate = false;
																																															}



																																														} while (!southtoHecate);
																																													}
																																													else if (choice == 2)
																																													{
																																														cout << "A life is the toll.  Is that a sacrifice you're willing to make?\n";
																																														cutThread = false;
																																													}
																																													else {
																																														cout << "That is not a valid choice.\n";
																																														cutThread = false;
																																													}

																																												} while (!cutThread);
																																											}
																																											else
																																											{
																																												cout << "You will be stuck here forever.\n";
																																												southtoAtropos = false;
																																											}
																																										} while (!southtoAtropos);

																																									}
																																									else if (choice == 2)
																																									{
																																										cout << "You really might need them\n";
																																										takeScissors = false;
																																									}
																																									else
																																									{
																																										cout << "\nThat is not a valid choice.\n";
																																										takeScissors = false;
																																									}
																																								} while (!takeScissors);



																																							}
																																							else if (choice == 2)
																																							{
																																								cout << "That door is locked\n";
																																								scissorsOrBust = false;
																																							}
																																							else
																																							{
																																								cout << "That is not a valid choice.\n";
																																								scissorsOrBust = false;
																																							}
																																						} while (!scissorsOrBust);

																																					}
																																					else if (choice == 2)
																																					{
																																						cout << "There is nothing for you to the west.\n";
																																						eastFate = false;
																																					}
																																					else
																																					{
																																						cout << "That is not a valid choice.\n";
																																						eastFate = false;
																																					}
																																				} while (!eastFate);
																																			}
																																			else if (choice == 2)
																																			{
																																				takeKey = true;
																																				cout << "You are trapped in this locked room for eternity. \n";
																																				gameOver = true;
																																			}
																																			else
																																			{
																																				takeKey = false;
																																				cout << "That is not a valid choice.";
																																			}
																																		} while (!takeKey);
																																	}
																																	else if (choice == 2)
																																	{
																																		acceptFates = true;
																																		cout << "Your life is taken as the Fates' toll, and your quest has failed.\n";
																																		gameOver = true;
																																	}
																																	else
																																	{
																																		acceptFates = false;
																																		cout << "That is not a valid choice.\n";
																																	}
																																} while (!acceptFates);
																															}
																															else if (choice == 2)
																															{
																																northSouthChoice = true;
																																////Move south to the Hypnos(p18)

																																Orpheus.pLocation = Orpheus.pLocation->pSouth;
																																Orpheus.pLocation->pRoomName();
																																cout << endl;
																																Orpheus.pLocation->pRoomDesc();
																																cout << endl;

																																cout << "“Who are you?  What do you want?” he demands of you. \n";
																																cout << "You tell him your quest, and his face softens.  \n";
																																cout << "“I will help you, but I can only help in one way.  \n";
																																cout << "Think of the thing you desire, and your dream will take you there.” \n";
																																cout << "Against the wall from which he came to you is a small bed made with threadbare linens. \n";

																																bool layDown = false;
																																do {
																																	cout << "Do you lay down?\n";
																																	cout << "(Yes - 1, No - 2)\n";
																																	int choice = 0;
																																	cin >> choice;
																																	if (choice == 1)
																																	{
																																		cout << "As soon as you lay down \n";
																																		cout << "your head, you are asleep and dreaming of your Eurydice. \n";
																																		layDown = true;
																																		bool southtoHecate = false;

																																		do {
																																			cout << "In your dreams, Eurydice tells you to move east.  Do you obey?\n";
																																			cout << "(Yes - 1, No - 2)\n";
																																			int choice = 0;
																																			cin >> choice;
																																			if (choice == 1)
																																			{
																																				southtoHecate = true;
																																				////move east to Hecate(p15)
																																				Orpheus.pLocation = Orpheus.pLocation->pEast;
																																				Orpheus.pLocation->pRoomName();
																																				cout << endl;
																																				Orpheus.pLocation->pRoomDesc();
																																				cout << endl;
																																				cout << "Hecate stands at crossroads between you and your goal - an audience\n";
																																				cout << "with Hades and Persephone.You must give offerings to Hecate to\n";
																																				cout << "prove you are worth to enter.There is a Cyprus grove to the east.\n";

																																				bool easttoGrove = false;
																																				do {
																																					int choice = 0;
																																					cout << "(East - 1, West - 2)\n";
																																					cin >> choice;
																																					if (choice == 1)
																																					{
																																						easttoGrove = true;


																																						////move east to Cyprus Grove(p16)
																																						Orpheus.pLocation = Orpheus.pLocation->pEast;
																																						Orpheus.pLocation->pRoomName();
																																						cout << endl;
																																						Orpheus.pLocation->pRoomDesc();
																																						cout << endl;


																																						cout << "You go to the Cyprus tree,\n";
																																						cout << "cut off branch to give her and, digging in the upturned earth at the base of\n";
																																						cout << "tree, you find a key to give her.\n";

																																						Orpheus.orphSatchel.push_back("cyprus branch");
																																						Orpheus.orphSatchel.push_back("key");

																																						cout << "\nYour satchel now contains: \n";

																																						for (int i = 0; i < Orpheus.orphSatchel.size(); ++i)
																																						{
																																							cout << Orpheus.orphSatchel[i] << endl;

																																						}

																																						bool backwestHecate = false;
																																						do {
																																							cout << "Do you move back west to Hecate?";
																																							cout << "(Yes - 1, No - 2)\n";
																																							int choice = 0;
																																							cin >> choice;
																																							if (choice == 1)
																																							{
																																								backwestHecate = true;
																																								////move back west to Hecate(p15)
																																								Orpheus.pLocation = Orpheus.pLocation->pWest;
																																								Orpheus.pLocation->pRoomName();
																																								cout << endl;
																																								Orpheus.pLocation->pRoomDescExtended();
																																								cout << endl;
																																								Orpheus.orphSatchel.pop_back();
																																								Orpheus.orphSatchel.pop_back();

																																								cout << "\nYour satchel now contains: \n";

																																								for (int i = 0; i < Orpheus.orphSatchel.size(); ++i)
																																								{
																																									cout << Orpheus.orphSatchel[i] << endl;

																																								}
																																								bool toHades = false;
																																								do {
																																									cout << "Continue to Hades?\n";
																																									cout << "(Yes - 1, No - 2)\n";
																																									int choice = 0;
																																									cin >> choice;
																																									if (choice == 1)
																																									{
																																										toHades = true;

																																										////move south to Hades and Persephone (p17)
																																										Orpheus.pLocation = Orpheus.pLocation->pSouth;
																																										Orpheus.pLocation->pRoomName();
																																										cout << endl;
																																										Orpheus.pLocation->pRoomDesc();
																																										cout << endl;
																																										cout << "You present the note to them and plead your case-Eurydice was taken from \n";
																																										cout << "you before her time.  Looking at the entirety of eternity, a lifetime \n";
																																										cout << "is such a small piece of it.  You beg them, please let you borrow her \n";
																																										cout << "back only for the span of her lifetime, and then she will be returned \n";
																																										cout << "to them.  You play your lyre and sing the most beautiful song you’ve \n";
																																										cout << "ever sung-a lament for your lost love, a plea, a wish, everything \n";
																																										cout << "contained within your heart.  Your song softens Persephone, and her \n";
																																										cout << "influence over Hades is stronger than he would admit.  They will \n";
																																										cout << "return her to you only for the span of her lifetime, not for yours.  But, if you \n";
																																										cout << "turn to look at her before you both get all the way out of the Underworld and back \n";
																																										cout << "into the sunlight of the living world, her spirit will be drawn\n";
																																										cout << "backand your whole quest would have been for naught.  To escape, you must follow a straight path\n";
																																										cout << "Deviate even a little, and you and Eurydice could be trapped forever.\n";
																																										cout << "You thank them profusely, and without looking at Eurydice, you take her hand\n";
																																										cout << "and begin your ascension.  There is a door on the west wall.\n";
																																										bool westoutofHades = false;
																																										do {
																																											cout << "(West - 1)\n";
																																											int choice = 0;
																																											cin >> choice;
																																											if (choice == 1)
																																											{
																																												westoutofHades = true;
																																												////move west to shadow of erebus(p19)
																																												Orpheus.pLocation = Orpheus.pLocation->pWest;
																																												Orpheus.pLocation->pRoomName();
																																												cout << endl;
																																												Orpheus.pLocation->pRoomDesc();
																																												cout << endl;
																																												cout << "\nYou feel a pulling at your right side, not the pulling of hands,\n";
																																												cout << "but the pulling of the Underworld.  A gravity drawing you, forcing your\n";
																																												cout << "path to curve to the right.\n";
																																												bool resisttheDarkness = false;
																																												do {
																																													cout << "Do you resist?\n";
																																													cout << "(Yes - 1, No - 2)";
																																													int choice = 0;
																																													cin >> choice;
																																													if (choice == 1)
																																													{
																																														resisttheDarkness = true;
																																														cout << "You force yourself to move against the tide of darkness\n";
																																														////move west to Shedon Ekei(p21)
																																														Orpheus.pLocation = Orpheus.pLocation->pWest;
																																														Orpheus.pLocation->pRoomName();
																																														cout << endl;
																																														Orpheus.pLocation->pRoomDesc();
																																														cout << endl;

																																														cout << "You have nearly fought your way through Erebus’s impossible darkness \n";
																																														cout << "and finally feel the light on your face.  Behind you, Eurydice stumbles \n";
																																														cout << "and her hand slips from yours.  Fearing a trick, and feeling yourself \n";
																																														cout << "fully in the light, you feel yourself instinctively begin to turn and check on her. \n";

																																														bool dontTurnAround = false;
																																														do {
																																															cout << "Do you stop yourself?\n";
																																															cout << "(Yes - 1, No - 2)\n";
																																															int choice = 0;
																																															cin >> choice;
																																															if (choice == 1)
																																															{
																																																dontTurnAround = true;
																																																cout << "You stop yourself, remembering Hades’ warning.  \n";
																																																cout << "Pausing, you reach back and wait to feel her hand in \n";
																																																cout << "yours once more.  You continue forward until both of you \n";
																																																cout << "are safely outside of the shadow of the gate to the Underworld.\n";

																																																////move west to outside the gates(p22)
																																																Orpheus.pLocation = Orpheus.pLocation->pWest;
																																																Orpheus.pLocation->pRoomName();
																																																cout << endl;
																																																Orpheus.pLocation->pRoomDesc();
																																																cout << endl;




																																															}
																																															else if (choice == 2)
																																															{

																																																cout << "no You turn around to see your empty hand reaching back to where Eurydice should have been,\n";
																																																cout << "your fingertips still shrouded in Erebus’ inky shadow.   Her spirit is rescinded back into \n";
																																																cout << "the Underworld, irretrievable to you until the time of your own death.  Your quest has \n";
																																																cout << "failed.  You must return home, bereft and broken.\n";
																																																gameOver;
																																															}
																																															else
																																															{
																																																cout << "That is not a valid option\n";
																																																dontTurnAround = false;
																																															}


																																														} while (!dontTurnAround);





																																													}
																																													else if (choice == 2)
																																													{
																																														cout << "You give in to the draw of the abyss and allow yourself\n";
																																														cout << "and your beloved to be pulled down into the Pit of Erebus,\n";
																																														cout << "trapped forever in the inky darkness\n";
																																														resisttheDarkness = true;
																																														gameOver = true;
																																													}
																																													else
																																													{
																																														cout << "That is not a valid option\n";
																																														resisttheDarkness = false;
																																													}
																																												} while (!resisttheDarkness);

																																											}
																																											else
																																											{
																																												cout << "\nYou really want to stay here?  Is it the ambiance?\n";
																																												westoutofHades = false;
																																											}
																																										} while (!westoutofHades);

																																									}
																																									else if (choice == 2)
																																									{
																																										cout << "\nYou've come this far to give up?  Really?\n";
																																										toHades = false;
																																									}
																																									else
																																									{
																																										cout << "That is not a valid choice.\n";
																																										toHades = false;
																																									}



																																								} while (!toHades);

																																							}
																																							else if (choice == 2)
																																							{
																																								cout << "Are you sure?  You will be trapped in this Cypress Grove forever.\n";
																																								backwestHecate = false;
																																							}
																																							else
																																							{
																																								cout << "\nThat was not a valid choice.\n";
																																							}
																																						} while (!backwestHecate);

																																					}
																																					else if (choice == 2)
																																					{
																																						cout << "\nThere is nothing to the West\n";
																																						easttoGrove = false;

																																					}
																																					else
																																					{
																																						cout << "\nThat is not a valid choice.\n";
																																						easttoGrove = false;
																																					}

																																				} while (!easttoGrove);
																																			}
																																			else if (choice == 2)
																																			{
																																				cout << "Are you sure?  You'll be stuck.\n";
																																				southtoHecate = false;
																																			}
																																			else
																																			{
																																				cout << "That is not a valid choice.\n";
																																				southtoHecate = false;
																																			}



																																		} while (!southtoHecate);



																																	}
																																	else if (choice == 2)
																																	{
																																		cout << "This is the only way Hypnos can help you.  If you refuse him, you\n";
																																		cout << "will be stuck here forever.\n";
																																		layDown = false;
																																	}
																																	else
																																	{
																																		cout << "That is not a valid choice.\n";
																																		layDown = false;
																																	}

																																} while (!layDown);



																															}
																															else {
																																northSouthChoice = false;
																																cout << "That is not a valid choice.\n";
																															}
																														} while (!northSouthChoice);
																													}
																													else if (choice == 2)
																													{
																														continuePlaying = true;
																														cout << "The spirits press in until you cannot breathe.  You have failed, and you\n";
																														cout << "are ejected from the underworld.  \n";

																														gameOver = true;

																													}
																													else
																													{
																														continuePlaying = false;
																														cout << "That is not a valid choice.\n";
																													}
																												} while (!continuePlaying);
																											}
																											else if (choice == 2)
																											{
																												moveForward = true;
																												cout << "The spirits press in until you cannot breathe.  You have failed, and you\n";
																												cout << "are ejected from the underworld.  \n";
																												gameOver = true;
																											}
																											else
																											{
																												cout << "That is not a valid choice.\n";
																												moveForward = false;
																											}
																										} while (!moveForward);
																									}
																									else if (choice == 2)
																									{
																										cout << "You are stuck, with the spirits closing in you ever more tightly.You can\n";
																										cout << "just move your arms enough to reach your satchel.The spirits continue to \n";
																										cout << "close in on you.Will you try to soothe them with your lyre, or do you \n";
																										cout << "resign yourself to a lifetime trapped in the underworld ? \n";
																										playLyre = false;

																									}
																									else
																									{
																										cout << "That is not a valid option.\n";
																										playLyre = false;
																									}
																								} while (!playLyre);



																							}
																							else if (choice == 2)
																							{
																								cout << "If you refuse to board the boat, you will be stuck here for eternity\n";
																								boardBoat = false;
																							}
																							else
																							{
																								cout << "that is not a valid option.\n";
																								boardBoat = false;
																							}

																						} while (!boardBoat);

																					}
																					else if (choice == 2)
																					{
																						cout << "There is nothing to the west.\n";
																						eastThruDoor = false;
																					}
																					else
																					{
																						cout << "That is not a valid choice.";
																						eastThruDoor = false;
																					}
																				} while (!eastThruDoor);
																			}
																			else if (choice == 2)
																			{
																				cout << "If you do not take the coins, you travel without the\n";
																				cout << "ability to pay your debts, should you accrue them.\n";
																				pickUpCoins = false;
																			}
																			else
																			{
																				cout << "That is not a valid option.\n";
																				pickUpCoins = false;
																			}
																		} while (!pickUpCoins);

																	}
																	else if (choice == 2)
																	{
																		cout << "There is nothing for you to the south.\n";
																		walkThruDoor = false;
																	}
																	else
																	{
																		cout << "That is not a valid option.\n";
																		walkThruDoor = false;
																	}
																} while (!walkThruDoor);

															}
															else if (choice == 2)
															{
																cout << "If you do not play youre lyre, you will not escape this alive.";
																cout << "Please rethink your choice.\n";
																sleepDoggies = false;

															}
															else
															{
																cout << "That is not a valid option.";
																sleepDoggies = false;

															}
														} while (!sleepDoggies);
													}
													else if (choice == 2)
													{
														cout << "You have nothing else to offer, unless you wish to sacrifice yourself.\n";
														usePomegranate = false;
													}
													else
													{
														cout << "That is not a valid choice.\n";
														usePomegranate = false;
													}
												} while (!usePomegranate);
											}
											else if (choice == 2)
											{
												cout << "There is nothing but water to the south.\n";
												northToGate = false;
											}
											else
											{
												cout << "That is not a valid choice.";
												northToGate = false;
											}
										} while (!northToGate);
									}
									else
									{
										cout << "That is not a valid choice.\n";
										continueSouth = false;
									}
								} while (!continueSouth);
							}
							else if (choice == 2)
							{
								toTaenarumStillFalse = true;
								cout << "Lay down and sleep again, and hope she forgives you\n";
								cout << "when you see her again in the Underworld.\n";

								gameOver = true;
							}
							else
							{

								cout << "That is not a valid choice.";
								toTaenarumStillFalse = false;
							}
						} while (!toTaenarumStillFalse);
					}
					else {

						cout << "That is not a valid choice.";
						toTaenarum = false;
					}
				} while (!toTaenarum);
			}
			else if (choice == 2)
			{
				pickUpNote = true;
				cout << "You are so forlorn you cannot even bring yourself\n";
				cout << "to leave your bed.\n";
				gameOver = true;
			}
			else
			{
				cout << "That is not a valid choice.\n";
				pickUpNote = false;
			}
		} while (!pickUpNote);
	}
	else
	{
		if (gameOver = true)
		{
			cout << "GAME OVER" << endl;
			cout << "You have failed.\n\n";
		}
	}
	system("pause");
	return 0;
}










