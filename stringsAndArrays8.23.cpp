#include <iostream>

using namespace std;

int main()
{

    string userinput;

// Greeting
    cout << "  Welcome to my demo for Arrays and Strings! " << endl << endl;

//Prompt for name
    cout << " Please enter your name: " << endl;
//user input
    cin >> userinput;

    cout << "\n\n Welcome " << userinput << " Lets get started! " << endl;

    int myNums [12];
    myNums[0] = 11;
    myNums[1] = 2;
    myNums[2] = 555;
    myNums[11] = 56848;

    cout << "\n\n Expected is 11...." << myNums[1] << endl;
    cout << "\n\n Expected to be 0...." << myNums[2] << endl;
    //cout << "\n\n ?? out of bounds ??...." << myNums[13] << endl;

    //Lets code up a for loop.
    for (int i = 0; i < 12; i++ )
        {
        cout << "\n\n " << i << " " << myNums[i];
    }
    cout << endl << endl;
// first [] is Row Major
// second [] is Column.
// three rows and two columns
int myTwoDarrray[3][2] = {
    {1,2}, // each is an element
    {3,4}, // each element has 2 elements/arrays
    {5,6}
// hard code
//int myTwoDarray;
// myTwoDarray [0][0] = 11;joh
//myTwoDarray [0][1] = 12;


};
// goes through row elements
for(int i = 0; i< 3; i++){
        //handles column elements/arrays
    for(int j = 0; j < 2; j++) {
        cout << myTwoDarrray[i][j] << "  ";
    }
    cout << endl << endl;
}

int row0col0 = 71;

// Fill 2d array with a nested for() statement
for(int i = 0; i< 3; i++){
        //handles column elements/arrays
    for(int j = 0; j < 2; j++) {
        myTwoDarrray[i][j] = row0col0++;

    }
    //subtract 2 because of the increment set on row0col0
    row0col0 -= 2;
    row0col0 +=10;
    cout << endl << endl;
}
for(int i = 0; i< 3; i++){
        //handles column elements/arrays
    for(int j = 0; j < 2; j++) {
        cout << myTwoDarrray[i][j] << "  ";
    }
    cout << endl << endl;
}






    return 0;
}
