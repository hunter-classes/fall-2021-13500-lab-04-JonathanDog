#include <iostream>

std::string box(int width, int height) {
	
	std::string output; 
	std::cout << "Shape: \n";
	
	for(int row = 0; row < height; row++) {
		for(int col = 0; col < width; col++) {
			output += "*";
		}
		output +=  "\n";
	}

	return output;
}

std::string checkerBoard(int width, int height) {
	std::string output;
	std::cout << "Shape: \n";

	for(int row = 0; row < height; row++) {
		for(int col = 0; col < width/2; col++) {
			//print board
			output += "* ";
		}
		
		if(width % 2 != 0 && row % 2 == 0) {
			output += "*";
		}
	
		output += "\n";

		if(row % 2 == 0) {
			output += " ";
		} 
	
	}	

	return output;
}

std::string cross(int size) {
	size += 1;
	std::string output;
	std::cout << "Shape: \n";
	
	for(int row = 1; row<size; row++) {
		for(int col=1; col<size; col++) {
			if(row == col || size - row == col ) {
				output += "*";
			} else {
				output += " ";
			}
		}
	output += "\n";
	} 
	
	return output;
}

std::string lower(int length) {
	std::string output;	

	for(int row = 0; row < length; row++) {
		for(int col = 0; col <= row; col++) {
			output += "*";
		}
		output += "\n";
	}
	return output;
}


std::string upper(int length) {
    std::string output;

    for(int row = 0; row < length; row++) {
        for(int col = 0; col < length; col++) {
            if(col >= row) {
				output += "*";
        	} else {
				output += " ";
			}
		}
        output += "\n";
    }
    return output;
}

std::string trapezoid(int width, int height) { 
    if((width + 1) / 2 < height) {
		return "Impossible shape!";
	}
	std::string output;
	width += 1;
    
	for(int row = 0; row < height; row++) {
        for(int col = 0; col < width; col++) {
            if( row <= col && col < width - row ) {
                output += "*";
            } else {
                output += " ";
            }
        }
        output += "\n";
    }
    return output;
}

std::string checkerboard3x3(int width, int height) {
	std::string output;
    //Does a row of 3x3's
	for(int row = 0; row < height; row++) {
		for(int col = 0; col < width; col++) {
			if((row/3) % 2 == 0) {
				//Odd
				//Check odd or even width
				if((col/3) % 2 == 0) {
					output += "*";
				} else {
					output += " ";
				}		
			} else {
				//Even row
				if((col/3) % 2 == 0) {
					output += " ";
				} else {
					output += "*";
				}
			} 
		}
		output += "\n";
	}
	return output;
}
