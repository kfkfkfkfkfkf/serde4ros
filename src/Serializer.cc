#include <fstream>
#include <iostream>
#include <string>
#include"Serializer.h"


bool Serializer::setOutputFile(std::string &fname) {
  ofs_.open(fname, std::ios::out | std::ios::binary);
  if (!ofs_) {
    std::cerr << "Failed to open file `" << fname << "`" << std::endl;
    return false;
  }
  return true;
}