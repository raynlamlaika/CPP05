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


typedef struct s_troll
{
    int id;
    int x;
    int harvest_power;
    int y;
    int movement_speed;
} t_troll;

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
        for (int i_s = 0  ; line.size() > i_s  ;i_s++)
        {
            if (line[i_s] == '1')
            {
                t_data tmp;
                tmp.x = i_s;
                tmp.y = i;
                data_holder.push_back(tmp);
            }
        }
        
        

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
        vector<t_troll> troll_data;
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
            if (player == 0)
            {
                t_troll tmp;
                tmp.id = id;
                tmp.x = x;
                tmp.y = y;
                tmp.movement_speed = movement_speed;
                tmp.harvest_power = harvest_power;
                troll_data.push_back(tmp);
            }

            
        }

        // check if the troll is full of farming
        if (shack_x != -1 && shack_y != -1)
        {
            cout << "MOVE " << troll_data[0].id << " " << shack_x << " " << shack_y << endl;
        }
        else
        {
            // if there is no shack move to the nearest tree
            if (!data_holder.empty())
            {
                t_data nearest_tree = data_holder[0];
                int min_distance = abs(nearest_tree.x) + abs(nearest_tree.y);
                for (size_t i = 1; i < data_holder.size(); ++i)
                {
                    int distance = abs(data_holder[i].x) + abs(data_holder[i].y);
                    if (distance < min_distance)
                    {
                        min_distance = distance;
                        nearest_tree = data_holder[i];
                    }
                }
                cout << "MOVE " << troll_data[0].id << " " << nearest_tree.x << " " << nearest_tree.y << endl;
            }
            else
            {
                // if there is no tree move to the center of the map
                cout << "MOVE "<< troll_data[0].id << " " << width / 2 << " " << height / 2 << endl;
            }
        }
       
    }
}
