#include <iostream>
#include <unistd.h>
#include <stdlib.h>

using namespace std;

int main(int argc, char * argv[]) {
	char* args[] = {"/home/fpgafun/Documents/ethminer2/build/ethminer/ethminer", "-G", "--cl-global-work", "128", "-M", "0", NULL};
	//char* args[] = {"/home/fpgafun/Documents/ethminer/build/ethminer/ethminer", "--list-devices", NULL};
	//char* args[] = {"/home/fpgafun/Documents/ethminer2/build/ethminer/ethminer", "-G", "--cl-global-work", "128", "--report-hashrate", "--api-port", "3334", "--HWMON", "0", "-P", "stratum1+tcp://0xbAD1DAA23A1DcB697986c9d9054998087277E9dc.PC1:x@naw-eth.hiveon.net:4444", NULL};

	char * dir = getcwd(NULL, 0);
	cout << endl;
	cout << dir << endl;

	int num = 0;
	char* curr = args[0];
	while (curr != NULL) {
		cout << curr << " ";
		num++;
		curr = args[num];
	}
	cout << endl;

	int r1 = execvp(args[0], args);
	cout << endl << r1 << endl;
	return 0;
}
