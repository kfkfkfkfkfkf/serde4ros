#include "primitives/Deserializer.h"
#include <fstream>
#include <iostream>
#include <string>

bool Deserializer::setInputFile(std::string &fname) {
  ifs_.open(fname, std::ios::in | std::ios::binary);
  if (!ifs_) {
    std::cerr << "Failed to open file `" << fname << "`" << std::endl;
    return false;
  }
  return true;
}

void Deserializer::closeInputFile(void) { ifs_.close(); }
