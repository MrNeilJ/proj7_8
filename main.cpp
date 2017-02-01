// This program uses a class with a Boolean function that determines
// If a new value sent to it is the largest value received so far.
#include <iostream>
using namespace std;

class SimpleStat
{
private:
    int largest;            // The largest number received so far
    int sum;                // The sum of the numbers received
    int count;              // How many numbers have been received

    bool isNewLargest(int); // This is a private class function

public:

};