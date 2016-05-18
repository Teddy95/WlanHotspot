#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

int main(void) {
    string ssid, password, setNetwork;
    cout << "WLAN Hotspot erstellen!" << endl << endl << "SSID (Name des Netzwerkes): ";
    getline(cin, ssid);
    cout << "WLAN Passwort: ";
    getline(cin, password);

    setNetwork = "netsh wlan set hostednetwork mode=allow ssid=" + ssid + " password=" + password;

    system(setNetwork.c_str());
    system("netsh wlan start hostednetwork");

    cout << "WLAN Hotspot wurde gestartet!";

    Sleep(2000);

    return 0;
}
