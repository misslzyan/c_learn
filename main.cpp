#include <iostream>

#include <fstream>



#include "hello.pb.h"

using namespace std;

using namespace he;

int main() {
    hello msg;

    msg.set_id(12);

//    fstream input("/Users/duanweidong/hello.data", ios::in | ios::binary);
//    msg.ParseFromIstream(&input);
    fstream output("/Users/duanweidong/hello.data", ios::out | ios::trunc | ios::binary);
//    msg.SerializeToOstream(&output);
    if (!msg.SerializeToOstream(&output)) {
        cerr << "Failed to write address book." << endl;
        return -1;
    }
    output.close();
    google::protobuf::ShutdownProtobufLibrary();
    return 0;
}