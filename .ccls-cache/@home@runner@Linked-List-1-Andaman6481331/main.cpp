#include <iostream>

using namespace std;
#include "ll.h"

int main(int argc, char **argv){
	    LL l;
 		
		for(int i =0; i<(argc-1)/2;i++) {
			l.insert_node(atoi(argv[i * 2 + 1]), argv[i * 2 + 2]);
      }
	 	l.print_all();

}//automatically call destructor
