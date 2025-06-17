#include <iostream>

using namespace std;

int main()
{
    int i=0;
    while (i<5) {
        cout << i << endl;
        i++;
    }

// The code above prints 0,1,2,3,4. It prints i as long as i is less than 5. The i++ is used to increase the value of i by 1 after each iteration. So after the first iteration, i becomes 2..... and so on. So the moment the value of i reaches 5, it's no longer less than 5. Then the loop stops. Without the i++, the value of i remains 0 so it creates an endless loop. This means it'll keeping printing 0 (the value for i) forever.
//So basically, the while loops performs an action as long as the condition provided is true (in this case i<5).


   //Do-while loop. This loop runs the code at least once, then checks for the condition. For example; asking for password on a login page. You display "Enter your password: " once, then check if the password is correct. If it's not, you display it again.

   string password;
   do {
    cout << "Enter your password: " << endl;
    cin >> password;
   } while (password != "Kobbyhim");

   //So it'll first do (print "Enter your password: ") , then check for the condition provided.

   //Here's another version that asks a user what they wanna do in a basketball gym.

   int choice;
   do {
    cout << "What do you wanna do?" << endl;
    cout << "1. Shoot\n";
    cout << "2. Dribble\n";
    cout << "3. Exit\n";
    cin >> choice;

    switch (choice) {
    case 1:
        cout << "You chose to practice shooting!\n";
    break;

    case 2:
         cout << "You chose to do some dribbling drills!\n";
    break;

    case 3:
         cout << "Aight man... See you next time!\n";
    break;

    default:
        cout << "Invalid input.\n";
    }
}
    while (choice != 3);
 return 0;
}
 //So this code asks the user what they wanna do and prints stuff according to the choice they make. NB: You cannot attach strings to the cases. If you wanna deal with strings, you gotta use if-else. So this is an application of the switch and the loops to create the program.
