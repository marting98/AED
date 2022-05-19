#include<string>
#include<cassert>
int main() {
    //bool
   assert(false== not true);
   assert((true and true)==true);
   assert((true or false)==true);
   assert((false or false)==not true);

   //double
    assert(1.4<1.8);
    assert(4.5!=42.3);
    assert(2.6==1.3+1.3);
  // unssigned
   assert(2==1*2);
   assert(8>2);
   assert(321!=3*43);
   assert(24/2==12);
   assert(3<7);
   //char

   assert('a'!='d');
   assert(65=='A');
   assert(65+32=='a');
   assert(65+1=='B');
//string
   assert(10==std::string("hola q tal").length());


}
