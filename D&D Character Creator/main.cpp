#include <iostream> /* Duh */
#include <cstdio> /* Pretty sure this is for system ("pause") */
#include <cstdlib> /* Standard Library */
#include <time.h> /* Don't forget this for random declarations */

using namespace std;

/* Remember srand(time(NULL)) */

/* srand(time(NULL));

    v1 = rand() % 20 + 20; */

int main()
{
    int select = 0; /* The Relevent Selection */
    int ra = 0; /* Race */
    int cl = 0; /* Class */
    int spd = 0; /* Speed */
    int str = 0; /* Strength */
    int con = 0; /* Constitution */
    int wis = 0; /* wisdom */
    int dex = 0; /* Dexterity */
    int inte = 0; /* intelligence */
    int cha = 0; /* Charisma */
    int d61 = 0; /* Dice to Roll */
    int d62 = 0;
    int d63 = 0;
    int d64 = 0;
    int roll1 = 0; /* Roll Results*/
    int roll2 = 0;
    int roll3 = 0;
    int roll4 = 0;
    int roll5 = 0;
    int roll6 = 0;

    /* Don't forget to add Damage and HP variables! */

    cout << "Welcome to this Dungeons and Dragons Character Creator by Matthew Twine. \n\n";
    cout << "Please Select your Race! \n\n";
    cout << "\t1. Human \n";
    cout << "\t2. Elf \n";
    cout << "\t3. Half-Elf \n";
    cout << "\t4. Dwarf \n";
    cout << "\t5. Gnome \n";
    cout << "\t6. Dragonborn \n";
    cout << "\t7. Halfling \n";
    cout << "\t8. Half-Orc \n";
    cout << "\t9. Tiefling \n";
    /*^Prompts the user to select their race^*/

    cin >> select;





    if (select == 1)
    {
        cout << "You have Selected Human!\n\n";
    }

    else if (select == 2)
{
    cout << "You have selected Elf!\n\n";
}

    else if (select == 3)
{
    cout << "You have selected Half-Elf!\n\n";
}

    else if (select == 4)
{
    cout << "You have selected Dwarf!\n\n";
}

    else if (select == 5)
{
    cout << "You have selected Gnome!\n\n";
}

    else if (select == 6)
{
    cout << "You have selected Dragonborn!\n\n";
}

    else if (select == 7)
{
    cout << "You have selected Halfling!\n\n";
}

    else if (select == 8)
{
    cout << "You have selected Half-Orc!\n\n";
}

    else if (select == 9)
{
    cout << "You have selected Tiefling!\n\n";
}

        cout << "Please Select a Class!\n\n";
        cout << "\t1. Barbarian\n";
        cout << "\t2. Bard\n";
        cout << "\t3. Cleric\n";
        cout << "\t4. Druid\n";
        cout << "\t5. Fighter\n";
        cout << "\t6. Monk\n";
        cout << "\t7. Paladin\n";
        cout << "\t8. Ranger\n";
        cout << "\t9. Rogue\n";
        cout << "\t10. Sorcerer\n";
        cout << "\t11. Warlock\n";
        cout << "\t12. Wizard\n";

        cin >> select;

                if (select == 1)
        {
            cout << "You have selected Barbarian!\n\n";
        }

                else if (select == 2)
        {
            cout << "You have selected Bard!\n\n";
        }

                else if (select == 3)
        {
            cout << "You have selected Cleric!\n\n";
        }

                else if (select == 4)
        {
            cout << "You have selected Druid!\n\n";
        }

                else if (select == 5)
        {
            cout << "You have selected Fighter!\n\n";
        }

                else if (select == 6)
        {
            cout << "You have selected Monk!\n\n";
        }

                else if (select == 7)
        {
            cout << "You have selected Paladin!\n\n";
        }

                else if (select == 8)
        {
            cout << "You have selected Ranger!\n\n";
        }

                else if (select == 9)
        {
            cout << "You have selected Rogue!\n\n";
        }

                else if (select == 10)
        {
            cout << "You have selected Sorcerer!\n\n";
        }

                else if (select == 11)
        {
            cout << "You have selected Warlock!\n\n";
        }

                else if (select == 12)
        {
            cout << "You have selected Wizard!\n\n";
        }


          /* Rolls 4 6-sided dice, removes the lowest one (must be done 6 times)*/
    srand (time(NULL));

d61 = rand() % 6 + 1;
d62 = rand() % 6 + 1;
d63 = rand() % 6 + 1;
d64 = rand() % 6 + 1;

if ((d61 <= d62) && (d61 <= d63) && (d61 <= d64))
    {
        d61 = 0;
        }

else if ((d62 <= d61) && (d62 <= d63) && (d62 <= d64))
{
    d62 = 0;
    }

else if ((d63 <= d62) && (d63 <= d61) && (d63 <= d64))
{
    d63 = 0;
    }

else if ((d64 <= d62) && (d64 <= d63) && (d64 <= d61))
{
    d64 = 0;
    }

roll1 = d61 + d62 + d63 + d64;

d61 = 0;
d62 = 0;
d63 = 0;
d64 = 0;


d61 = rand() % 6 + 1;
d62 = rand() % 6 + 1;
d63 = rand() % 6 + 1;
d64 = rand() % 6 + 1;

if ((d61 <= d62) && (d61 <= d63) && (d61 <= d64))
    {
        d61 = 0;
        }

else if ((d62 <= d61) && (d62 <= d63) && (d62 <= d64))
{
    d62 = 0;
    }

else if ((d63 <= d62) && (d63 <= d61) && (d63 <= d64))
{
    d63 = 0;
    }

else if ((d64 <= d62) && (d64 <= d63) && (d64 <= d61))
{
    d64 = 0;
    }

roll2 = d61 + d62 + d63 + d64;


d61 = 0;
d62 = 0;
d63 = 0;
d64 = 0;


d61 = rand() % 6 + 1;
d62 = rand() % 6 + 1;
d63 = rand() % 6 + 1;
d64 = rand() % 6 + 1;

if ((d61 <= d62) && (d61 <= d63) && (d61 <= d64))
    {
        d61 = 0;
        }

else if ((d62 <= d61) && (d62 <= d63) && (d62 <= d64))
{
    d62 = 0;
    }

else if ((d63 <= d62) && (d63 <= d61) && (d63 <= d64))
{
    d63 = 0;
    }

else if ((d64 <= d62) && (d64 <= d63) && (d64 <= d61))
{
    d64 = 0;
    }

roll3 = d61 + d62 + d63 + d64;


d61 = 0;
d62 = 0;
d63 = 0;
d64 = 0;


d61 = rand() % 6 + 1;
d62 = rand() % 6 + 1;
d63 = rand() % 6 + 1;
d64 = rand() % 6 + 1;

if ((d61 <= d62) && (d61 <= d63) && (d61 <= d64))
    {
        d61 = 0;
        }

else if ((d62 <= d61) && (d62 <= d63) && (d62 <= d64))
{
    d62 = 0;
    }

else if ((d63 <= d62) && (d63 <= d61) && (d63 <= d64))
{
    d63 = 0;
    }

else if ((d64 <= d62) && (d64 <= d63) && (d64 <= d61))
{
    d64 = 0;
    }

roll4 = d61 + d62 + d63 + d64;


d61 = 0;
d62 = 0;
d63 = 0;
d64 = 0;


d61 = rand() % 6 + 1;
d62 = rand() % 6 + 1;
d63 = rand() % 6 + 1;
d64 = rand() % 6 + 1;

if ((d61 <= d62) && (d61 <= d63) && (d61 <= d64))
    {
        d61 = 0;
        }

else if ((d62 <= d61) && (d62 <= d63) && (d62 <= d64))
{
    d62 = 0;
    }

else if ((d63 <= d62) && (d63 <= d61) && (d63 <= d64))
{
    d63 = 0;
    }

else if ((d64 <= d62) && (d64 <= d63) && (d64 <= d61))
{
    d64 = 0;
    }

roll5 = d61 + d62 + d63 + d64;

d61 = 0;
d62 = 0;
d63 = 0;
d64 = 0;


d61 = rand() % 6 + 1;
d62 = rand() % 6 + 1;
d63 = rand() % 6 + 1;
d64 = rand() % 6 + 1;

if ((d61 <= d62) && (d61 <= d63) && (d61 <= d64))
    {
        d61 = 0;
        }

else if ((d62 <= d61) && (d62 <= d63) && (d62 <= d64))
{
    d62 = 0;
    }

else if ((d63 <= d62) && (d63 <= d61) && (d63 <= d64))
{
    d63 = 0;
    }

else if ((d64 <= d62) && (d64 <= d63) && (d64 <= d61))
{
    d64 = 0;
    }

roll6 = d61 + d62 + d63 + d64;  /* The dice rolls have been randomly decided */


    system("pause");
    return 0;
}
