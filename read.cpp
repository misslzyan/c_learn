//
// Created by 段卫东 on 2019-04-17.
//

#include "hello.pb.h"

#include <fstream>

using namespace std;

int main() {

    he::hello msg;

    {
        // Read the existing address book.
        fstream input("/Users/duanweidong/hello.data", ios::in | ios::binary);
        if (!msg.ParseFromIstream(&input)) {
            cerr << "Failed to parse address book." << endl;
            return -1;
        }
    }

    cout << msg.id() << endl;

    // Optional:  Delete all global objects allocated by libprotobuf.
    google::protobuf::ShutdownProtobufLibrary();

    return 0;

}