// James Atkins
// CSC-234-0901
// M3LAB1
// 10-11-2021

#include <iostream>

using namespace std;

class Room {
public:
    int id;
    string name;
    string description;

    Room() {
    };

    Room(int id, string name, string description) {
        this->id = id;
        this->name = name;
        this->description = description;
    };

    void describe() {
        cout << name << endl;
        cout << description << endl;
        cout << endl;
    }

};

int main()
{
    cout << "Room info" << endl;
    cout << endl;
    cout << "First room" << endl;

    Room livingRoom;
    livingRoom.name = "Living Room";
    livingRoom.id = 1;
    livingRoom.description = "A simple living room with the carpet and a couch.";

    cout << livingRoom.name << endl;
    cout << livingRoom.id << endl;
    cout << livingRoom.description << endl;
    cout << endl;
    cout << "Next room" << endl;

    Room kitchen = Room(2, "Kitchen", "A small, dimly lit kitchen.");
    cout << kitchen.name << endl;
    cout << kitchen.id << endl;
    cout << kitchen.description << endl;
    cout << endl;
    cout << "Next room" << endl;

    Room bedroom = Room(3, "Bedroom", "A bedroom with no closet");
    cout << bedroom.name << endl;
    cout << bedroom.id << endl;
    cout << bedroom.description << endl;
    cout << endl;
    cout << "Next room" << endl;

    Room bathroom;
    bathroom.name = "Bathroom";
    bathroom.id = 4;
    bathroom.description = "A tiny bathroom with a stand-up shower.";

    cout << bathroom.name << endl;
    cout << bathroom.id << endl;
    cout << bathroom.description << endl;
    cout << endl;
    cout << "Last room" << endl;

    Room hallway = Room(5, "Hallway", "A short hallway leading to all the other rooms.");
    cout << hallway.name << endl;
    cout << hallway.id << endl;
    cout << hallway.description << endl;
    cout << endl;

    cout << "With description function" << endl;
    cout << endl;
    livingRoom.describe();
    kitchen.describe();
    bedroom.describe();
    bathroom.describe();
    hallway.describe();


    return 0;
}
