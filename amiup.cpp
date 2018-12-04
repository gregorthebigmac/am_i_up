#include "command.hpp"

using std::cin;
using std::cout;
using std::endl;
using std::string;

string get_ping_or_curl();
string get_known_host();

command cmd;

int main() {
	string ping_or_curl = get_ping_or_curl();
	string known_host;
	return 0;
}

string get_ping_or_curl() {
	string ping_or_curl_choice;
	bool done = false;
	while (!done) {	
		cout << "are you using ping or curl? [p/c]" << endl;
		getline(cin, ping_or_curl_choice);
		if (ping_or_curl_choice[0] == 'P' || ping_or_curl_choice[0] == 'p') {
			return "ping";
			done = true;
		}
		else if (ping_or_curl_choice[0] == 'C' || ping_or_curl_choice[0] == 'c') {
			return "curl";
			done = true;
		}
		else
			cout << "I don't think you gave me an appropriate response. Try again." << endl;
	}
}

string get_known_host() {
	string host;
	char answer;
	while (answer == 'y' ^ answer == 'Y') {
		cout << "maybe?" << endl;
	}
	cout << "Okay, now give me a known host you want me to check." << endl;
	cout << "If you want me to use curl, I suggest you give me a URL." << endl;
	cout << "If you want me to use ping, I suggest you give me an IP address." << endl;
	getline(cin, host);
	cout << "You entered " << host << ". Is this correct? [y/n]" << endl;
	
}