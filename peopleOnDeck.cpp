/* 
You’re given:

T → number of hours

Array E[] → guests entering at each hour

Array L[] → guests leaving at each hour

🔧 You need to simulate the flow hour-by-hour and keep track of:

Current guest count after each hour

Track the maximum guests present at any point
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int entering[n], leaving[n];
    for (int i = 0; i < n; i++){
        cin >> entering[i];
    }
    for (int i = 0; i < n; i++){
        cin >> leaving[i];
    }
    int currentGuests = 0;
    int maxGuests = 0;
    for (int i = 0; i < n; i++) {
        currentGuests += entering[i] - leaving[i];
        if (currentGuests > maxGuests) {
            maxGuests = currentGuests;
        }
    }
    cout << maxGuests;
    return 0;
}