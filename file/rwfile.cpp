//
// Created by 段卫东 on 2019-04-17.
//

#include <iostream>
#include <fstream>

using namespace std;

const string filename = "example.txt";

int fun1(){
  ofstream myfile;
  myfile.open("example.txt");
  myfile << "Writing this to a file.";
  string s = "Writing this to a file.";
  s.size();
  cout << "size is :"<< s.size() << " bytes . \n";
  myfile.close();
  ifstream ifile;
  ifile.open("example.txt");
  string line;
  if(ifile.is_open()){
      while(getline(ifile, line)){
          cout << line << '\n';
      }
      ifile.close();
  }else{
      cout << "Unable to open file";
  }


  streampos begin, end;
  ifstream  sizefile ("example.txt", ios::binary);
  begin = sizefile.tellg();
  sizefile.seekg(0,ios::end);
  end = sizefile.tellg();
  sizefile.close();
  cout << "size is :" << (end-begin) << " bytes. \n";
  return 0;

}

int fun2(){

    streampos size;
    char* memblock;
    ifstream file(filename, ios::in|ios::binary|ios::ate);
    if(file.is_open()){
        size = file.tellg();
        cout << "size is : "<< size << '\n';
        memblock = new char[size];
        file.seekg(0, ios::beg);
        cout << "pos is :" << file.tellg() << '\n';
        file.read(memblock, size);
        file.close();
        delete[] memblock;
        cout << "the entire file content is in memory";
    }else{
        cout << "Unable to open file.";
    }

}

int main(){
    fun1();
    fun2();
}


