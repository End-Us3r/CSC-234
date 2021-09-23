//James Atkins
//CSC-234-0902
//M2HW1 Adventure Call (Second iteration)
//09-20-2021
#include <iostream>
#include <windows.h>

using namespace std;

//key locations
void home();
void livingRoom();
void field();
void forest();
void mountain();
void cave();



//Key Events
void bearAttack();

//Key Items
bool hasSword = false;



int main()
{

    cout << "******************************************************************************************" << endl;
    cout << "*                                        Welcome                                         *" << endl;
    cout << "*                                          To                                            *" << endl;
    cout << "*                                     The Nightmare                                      *" << endl;
    cout << "*                                    by James Atkins                                     *" << endl;
    cout << "******************************************************************************************" << endl;

    char play;
    cout << endl;

    string intro = "Are you ready to begin your Quest?(Y/n) ";
    string endIntro = "And so begins your quest!";
    int x = 0;
    while (intro[x] != '\0')
    {
            cout << intro[x];
            Sleep(50);
            x++;

    }

    cin >> play;
    int y = 0;
        if (play == 'Y' || play == 'y')
        {
            while (endIntro[y] != '\0')
                {

                    cout << endIntro[y];
                    Sleep(50);
                    y++;

                }
            cout << endl;
            //Field
            field();
        }
        else
        {
            cout << "There's always next time." << endl;
        }

    return 0;
}
//Player starts here
void field() {
    string input;
    cout << endl;
    cout << "The sun is blazing down on you as you toil in the FIELD." << endl;
    cout << "All of a sudden you hear screams from your HOME. ";
    cout << "Instantly, dread creeps into your bones." << endl;
    cout << "What do you do?" << endl;
    cout << endl;
    cin >> input;
    cout << endl;
        if (input == "home" || input == "HOME" ) {
            home();

        }
        else {
            cout << "That is not a valid command, please try another command." << endl;
            cout << endl;
            field();

        }
}
//Quest begins here
//Leads to forest
void home() {
    string input;
    cout << "You run towards HOME and bust through the door." << endl;
    cout << "You find the mangled corpses of your entire family, ";
    cout << "piled in the center of the living room." << endl;
    cout << "The mother of your children lies on top, hand loosely gripping the SWORD your father"
    " gifted so many years ago." << endl;
    cout << endl;
    cout << "Staring in disbelief, you fall to your knees sobbing uncontrollably, reaching for"
     " the bodies of your loved ones who were, " << endl;
    cout << "hours before, smiling and laughing with glee..." << endl;
    cout << endl;
    cout << "Eyes downcast, you notice a trail of blood that you didn't see before,"
     " leading out of the house towards the FOREST." << endl;
    cout << endl;
    cin >> input;
    cout << endl;
        if (input == "forest" || input == "FOREST" ) {
            forest();

        } else if (input == "sword" || input == "SWORD" ) {
            hasSword = true;
            cout << "You lean down, kissing your wife one final time and pry the sword from her dead hands." << endl;
            livingRoom();
        }
        else {
            cout << "That is not a valid command, please try another command." << endl;
            home();
        }
}
//Multiple paths from here
//Events
void forest() {
    cout << "Following the blood-trail, you rush into the FOREST in a desperate attempt to the find the murderer, " << endl;
    cout << "so you can avenge your family." << endl;
    bearAttack();//Add more here


}
//Multiple paths from here
//Major Event
void mountain() {
    string input;
    cout << "Afraid for your life, you turn away from the bear and run as fast as you can!" << endl;
    cout << "You have successfully ran away from the bear!" << endl;
    cout << "After running for what seems like forever, you finally stop to catch your breath, "
    "only to notice that you've reached the mountains." << endl;
    cout << "In the distance, you see a cave entrance, where you can hear a dark muttering from with-in it's depths." << endl;
    cout << "Unsure about life anymore, you decide to either go into the CAVE or go HOME." << endl;
    cout << endl;
    cin >> input;
    cout << endl;
        if (input == "cave" || input == "CAVE") {
            cave();

        }
        else if (input == "home" || input == "HOME") {
            home();

        }
}
//Final path
//Major Event--end game
void cave() {
    cout << "With nothing left to lose, except your own life, you walk into the cave "
    "despite the evil mutterings reverberating throughout the cave system. " << endl;
    cout << "After what seems like hours stumbling through the cave, " << endl;
    cout << "you finally have come close to the source of the dark mutterings." << endl;
    cout << "You hear a voice not far from you, performing a dark ritual." << endl;
    cout << "Turning a corner, the voice goes silent, and you notice a dark hooded figure standing in the middle of a large cavern." << endl;
    cout << "As the figure looks up from the ritual markings on the floor, "
    "his eyes connects with yours, forcing you to take a step back." << endl;
    cout << "His eyes seem to be completely covered in blood." << endl;
    cout << "You know this to be an evil warlock." << endl;
    cout << "Laughing manically, \"I had a feeling that you would find me.\" he says to you." << endl;
    cout << endl;
        if (hasSword == true) {
            cout << "Without thought or question, you run straight at the warlock, screaming with an intensity you've never felt." << endl;
            cout << "Your screams catch the Warlock of guard and upon reaching him, "
            "you plunge the sword deep into his chest." << endl;
            cout << "THE END" << endl;

        } else if (hasSword == false ) {
            cout << "Screaming with hate, you wish you had a weapon of some sort to kill this evil creature." << endl;
            cout << "The Warlock smiles at you and throws a fireball at you, catching you aflame." << endl;
            cout << "As your entire body goes up in flame, you see the Warlock mocking you." << endl;
            cout << endl;
            cout << "YOU ARE DEAD!!!" << endl;
            cout << endl;
            cout << "Would you like to play again?(Y/n) ";
            char input;
            cin >> input;
            if (input == 'y' || input == 'Y') {
                main();
            }
            else {
                cout << "Goodbye!!!" << endl;
            }
        }
}

void bearAttack() {
    string input;
    cout << "Out of nowhere, a giant bear runs out of the nearby bushes, directly towards you." << endl;
    cout << "With only a split second to think, deciding to either FIGHT the bear or RUN away, you..." << endl;
    cout << endl;
    cin >> input;
    cout << endl;
        if (input == "fight" || input == "FIGHT") {
            cout << "You bravely decide to fight the bear, running towards the giant creature "
            "to meet him in battle. " << endl;
            cout << "As you come face to face with the bear, he swipes his huge claw at you, "
            "tearing open your chest and knocking you to the ground!" << endl;
            cout << "Looking up one final time, you see the bears massive jaws coming down around your throat, "
            "ripping your head off your body!!!" << endl;
            cout << "Your last thought is at least you get to be with your family." << endl;
            cout << endl; //FIX Quotes
            cout << "You are dead." << endl;
            cout << endl;
            cout << "Would you like to play again?(Y/n) ";
            char input;
            cin >> input;
            if (input == 'y' || input == 'Y') {
                bearAttack();
            }
            else {
                cout << "Goodbye!!!" << endl;
            }
        }
        else if (input == "run" || input == "RUN") {
                mountain();
            //FIX
        }
}

void livingRoom() {
    string input;
    cout << "The trail of blood lies before you,"
     " leading out of the house towards the FOREST." << endl;
     cin >> input;
     if (input == "forest" || input == "FOREST" ) {
            forest();
        }
        else {
            cout << "That is not a valid command, please try another command." << endl;
            home();
        }
}
