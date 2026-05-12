#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/




typedef struct s_data
{
    int x;
    int y;
} t_data;

int main()
{
    int width;
    int height;
    cin >> width >> height; cin.ignore();
    vector<t_data> data_holder;
    int shack_x = -1;
    int shack_y = -1;
    for (int i = 0; i < height; i++) {
        string line; // map . 0 1
        getline(cin, line);
        // here is shack
        int  it  = line.find("0");
        if (it != string::npos)
            {shack_x = i; shack_y = (int)it;}
        t_data tmp;
        

    }

    // game loop
    while (1) {
        for (int i = 0; i < 2; i++) {
            int plum; // amount stored
            int lemon;
            int apple;
            int banana;
            int iron; // next
            int wood;   //next
            cin >> plum >> lemon >> apple >> banana >> iron >> wood; cin.ignore();
        }
        int trees_count;
        cin >> trees_count; cin.ignore();
        for (int i = 0; i < trees_count; i++) {
            string type; // type of it
            int x;// the cordinat of tree
            int y;
            int size;
            int health;
            int fruits; // amout of fruits in tree in 0 ra khawya
            int cooldown; // tress need to grow some fruits
            cin >> type >> x >> y >> size >> health >> fruits >> cooldown; cin.ignore();
        }
        int trolls_count;
        cin >> trolls_count; cin.ignore();
        for (int i = 0; i < trolls_count; i++) {
            int id; // id to move specific troll
            int player; // 0 for my troll
            int x;
            int y;
            int movement_speed;
            int carry_capacity;// capacity of holding the fruits
            int harvest_power; // amount of fruits can troll hold
            int chop_power;
            int carry_plum; // hold amout of plum
            int carry_lemon;
            int carry_apple;
            int carry_banana;
            int carry_iron;
            int carry_wood;
            cin >> id >> player >> x >> y >> movement_speed >> carry_capacity >> harvest_power >> chop_power >> carry_plum >> carry_lemon >> carry_apple >> carry_banana >> carry_iron >> carry_wood; cin.ignore();
        }

        // // Write an action using cout. DON'T FORGET THE "<< endl"
        // // To debug: cerr << "Debug messages..." << endl;


        // // valid actions:
        // // MOVE <id> <x> <y>
        // // HARVEST <id> - when you are on the same cell as a tree
        // // DROP <id> - when you are next to your shack and carry items

        // // search for the smallest path for  tree
        // int i_tree = 0,z_tree = 0, y_tree = 0;



        // // check bag if u can hold up more otherwise put the fruit in home






        // cout << "MOVE 0 7 7" << endl;
    }
}
