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

 //So this code asks the user what they wanna do and prints stuff according to the choice they make. NB: You cannot attach strings to the cases. If you wanna deal with strings, you gotta use if-else. So this is an application of the switch and the loops to create the program.

  //The following code does a countdown and wishes you Happy New Year
    int countdown=5;
    while (countdown>0) {
    cout << countdown<<endl;
    countdown--;
    }
    cout << "Happy New Year\n";


    //The For loop is used when you know exactly how many times you want the loop to iterate. It looks like the While loop rearranged, but ah well....
    for (int i=0; i < 5; i++) {
        cout << i;
    }
    // So this code prints i as long as it's less than 5. You might think it's the same as the While loop, but here's the difference:
    // You see in the previous code, the loop runs until the user chooses "exit". So the code basically has no definite amount of iteration times. It'll keep iterating until the user selects "exit". But with the For loop, we know exactly how many times we want the code to run. So in that particular block of code, we can't use the For loop because it has to iterate until the user selects "exit". So even though the For loop can be used to run some programs the same way as the While loop, that's the difference between them.

    for (int i = 0; i < 10; i++) {
    if (i == 5) {
        break;
    }
    cout << i << " ";
}
// In this code, the output is 1234. The moment i is equal to 5, it says, "Aight.. I'm out." This is because of the break; It doesn't even bother to check i = 5 to 9



for (int i = 0; i < 5; i++) {
    if (i == 2) {
        continue;
    }
    cout << i << " ";
}
// For this, it'll skip the value specified in the if statement and continue with the rest of the code.

}

 