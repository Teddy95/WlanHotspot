#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

int main(void) {
    string ssid, password, setNetwork;
    cout << "Create WLAN hotspot!" << endl << endl << "SSID (Network name): ";
    getline(cin, ssid);
    cout << "WLAN Password: ";
    getline(cin, password);

    setNetwork = "netsh wlan set hostednetwork mode=allow ssid=" + ssid + " password=" + password;

    system(setNetwork.c_str());
    system("netsh wlan start hostednetwork");

    cout << "WLAN hotspot has been started!";

    Sleep(2000);

    return 0;
}
