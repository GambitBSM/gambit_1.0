//
//  TagCustomisable.cpp
//  TagDispatchDemo
//
//  Created by Hugh Dickinson on 16/10/2012.
//  Copyright (c) 2012 Hugh Dickinson. All rights reserved.
//

#include "TagCustomisable.h"

// A short main which uses the tag-dispatched class method
int main(int argc, char * argv[]){
	
	HelloWorld hw;
	// Fully specialised
	hw.sayHello<Tags::Cruel>();
	// Only contents specialised
	hw.sayHello<Tags::BraveNew>();
	// Generated from macro
	hw.sayHello<Tags::Waynes>();

	return 0;
}