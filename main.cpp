
/*
 * STEPS
 *greet user and ask for name
 * display welcome message with user name
 * generate 2 random numbers
 * display the numbers
 * ask user for the sum of the 2 numbers
 * add the numbers
 * compare user input with sum of the 2 numbers
 * display correct/incorrect message IF STaTEMENT
 * display school style number addition problem with correct answer under 4 dashes
 * END STEPS
 * 
 * VaRIaBLES
 * /TYPE string/
 * user name: user_name
 *
 * /TYPE int/
 * random number 1: a
 * random number 2: num_2
 * user number: user_num
 * add the 2 numbers = : sum
 * width of school style problem display: width_output
 * END VaRIaBLES
 *
 *
 * */
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

int main() {

    // Variables - 2 random numbers, user number, sum of the 2 numbers, width_output of output
    int num_1, num_2, user_num, sum;
    int width_output = 4;
    string user_name;

    //Greet user
    /* UNHIDE FOR FINaL PROGRaM
     * cout << "Hi! Welcome to Carrie's Number Calculator! What is your name? ";
    cin >> user_name;
    cout << "Hi " << user_name <<"! Let's play!"<<endl;
     */
    // Generate 2 random numbers
    /*UNHIDE FOR FINaL PROGRaM
     * srand((unsigned) time(nullptr));
    //random numbers must be between 1 & 99
    a = rand() % 98 + 1;
    num_2 = rand() % 98 + 1;
     */
    num_1=11;
    num_2=9;
    //add the two random numbers
    sum = num_1 + num_2;

    //switch random numbers if 1st number is single digits for appearance purposes
    if ((num_1 < 10) and (num_2 >=10)) {
        num_1 = num_1 + num_2;
        num_2 = num_1 - num_2;
        num_1 = num_1 - num_2;
    }

        // ask user for their calculation
        cout << "What is the sum of " << num_1 << " and " << num_2 << "?" << endl;
        cin >> user_num;
        // compare user answer to correct answer
        if (user_num == sum) {
            // answer is correct
            cout << "Yes! The correct answer is: " <<sum<<"! Great job!" << endl;
        }

        else
        {
            // answer is incorrect.
            cout << "Sorry, that is incorrect. The correct answer is : " <<sum << endl;
        }

        // Display school-style math problem numbers, stacked
        cout << setiosflags(ios::right);
            cout << setw(width_output) << num_1 << endl;
            cout << "+ " << setw(2) << num_2 << endl;
            // display dashes underneath 2nd number and answer
            width_output = 4;
            cout << setfill('-') << setw(width_output) << "-" << endl;
            cout << setfill(' ') << setw(width_output) << sum << endl;

        /*
        else {
            // ask user for their calculation
            cout << "What is the sum of " << a << " and " << num_2 << "?" << endl;
            cin >> user_num;
            // compare user answer to correct answer
            if (user_num == sum) {
                // answer is correct
                cout << "Yes! The correct answer is: " <<sum<<"! Great job!" << endl;
            }
            else
            {
                // answer is incorrect.
                cout << "Sorry, that is incorrect. The correct answer is : " <<sum << endl;
            }


        // Display school-style math problem numbers, stacked
        cout << setiosflags(ios::right);
        cout << setw(width_output) << a << endl;
        cout << "+ " << setw(2) << num_2 << endl;
        // display dashes underneath 2nd number and answer
        width_output = 4;
        cout << setfill('-') << setw(width_output) << "-" << endl;
        cout << setfill(' ') << setw(width_output) << sum << endl;
*/






    return 0;
}
