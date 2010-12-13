#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/time.h>

#include <protocol/TBinaryProtocol.h>
#include <transport/TSocket.h>
#include <transport/TTransportUtils.h>

#include "SimonSays.h"

using namespace std;
using namespace apache::thrift;
using namespace apache::thrift::protocol;
using namespace apache::thrift::transport;

using namespace boost;

int main(int argc, char** argv)
{
    const string email = "hellohello@gmail.com";

    shared_ptr<TTransport> socket(new TSocket("thriftpuzzle.facebook.com", 9032));
    shared_ptr<TTransport> transport(new TBufferedTransport(socket));
    shared_ptr<TProtocol> protocol(new TBinaryProtocol(transport));

    SimonSaysClient client(protocol);

    try
    {
        transport->open();

	cout << "Connecting to Simon..." << endl;
        bool result = client.registerClient(email);
        if (result)
            cout << "Connected!" << endl;
        else
        {
            cout << "Could not connect!" << endl;
            transport->close();
            return 1;
        }

        do
        {
            cout << "Starting turn!" << endl;

            vector<Color> listOfColors;
            client.startTurn(listOfColors);

            for (int i = 0; i < listOfColors.size(); i++)
            {
                cout << "Choosing color " << listOfColors[i] << endl;
                if (!client.chooseColor(listOfColors[i]))
                {
                    cout << "Oops! You didn't send the color Simon asked you to!" << endl;
                    transport->close();
                    return 1;
                }
            }
            cout << endl;
        }
        while (!client.endTurn());

        cout << "Winning game!" << endl;
        string winKey;
        client.winGame(winKey);
        cout << "Your win key is (use in subject line to facebook):" << endl << winKey << endl;

        transport->close();
    }
    catch (TException &tx)
    {
        printf("ERROR: %s\n", tx.what());
    }
}

