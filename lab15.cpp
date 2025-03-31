#include<iostream>
using namespace std;

// Function prototypes
void getInfo(int&, int&);
double computeWays(int, int);
double factorial(int);

void getInfo(int &n, int &k) {
while (n < 1 || n > 12) {
    cout << "How many balls (1-12) are in the pool to pick from? ";
    cin >> n;

    if (n < 1 || n > 12) {
        cout << "Invalid input! Please enter a number between 1 and 12!\n";
        continue;
    }
while (k < 1 || k > 7) {
    cout << "How many balls (1-7) will be drawn? ";
    cin >> k;

    if (k < 1 || k > 7) {
        cout << "Invalid input!\n";
    }

}
}
}


/*******************************************************************
* computeWays                                                      *
* Computes and returns the number of different possible sets       *
* of k numbers that can be chosen from a set of n numbers.         *
* The formula for this is     k!(n- k)!                            *
*                             --------                             *
*                                 n!                               */


double computeWays(int n, int k) {
       return ((factorial(k) * factorial(n - k))/factorial(n));
}

double factorial(int n) {
    if (n == 0) {
        return 1;
    } else if (n == 1) {
        return 1;
    }else {
        return n * factorial(n - 1);
    }
}



/*******************************************************************
* getLotteryInfo                                                   *
* Gets and validates lottery info from the user and places it in   *
* reference parameters referencing variables in the main function. *
********************************************************************/







/*******************************************************************
* factorial                                                        *
* This function computes factorials recursively.                   *
*******************************************************************/


