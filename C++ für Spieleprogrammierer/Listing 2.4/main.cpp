/* 
 * C++ für Spieleprogrammierer
 * Listing 2.4
 * sizeof() variables
 * 
 * Author:	Aaron
 * Date:	20.7.2018
 */
#include <iostream>

int main(int argc, char* argv[])
{
	std::cout << "Needed space for datatypes.\n\n";
	std::cout	<< "bool needs  : " << sizeof(bool)		<< "Bytes\n"
				<< "int needs   : " << sizeof(int)		<< "Bytes\n"
				<< "short needs : " << sizeof(short)	<< "Bytes\n"
				<< "long needs  : " << sizeof(long)		<< "Bytes\n"
				<< "char needs  : " << sizeof(char)		<< "Bytes\n"
				<< "float needs : " << sizeof(float)	<< "Bytes\n"
				<< "double needs: " << sizeof(double)	<< "Bytes\n";
	
	system("PAUSE");
	return 0;
}
