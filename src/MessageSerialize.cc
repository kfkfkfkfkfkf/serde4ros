#include"Message.h"

void Message::serialize(std::string &fname){
  setOutputFile(fname);
  this->serialize_Message();
}

void Message::serialize_Message(void){

  this->serialize_string(this->name);
  this->serialize_string(this->message);
}
