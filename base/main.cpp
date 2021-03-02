#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <sstream>


int main(){
    
    //wacky variables
    std::ifstream file("input.txt");
    std::string data;
    int sum = 0;
    int i = 0;
    std::string line;
    
    int lcount = 0;
    std::string textout;    

    //get each line
    while (std::getline(file, line)){
        std::stringstream linestream(line);

        
        //seperate by commas
        while (std::getline(linestream, data, ',')){
            i = 0;
            std::cout << lcount;            

            //print word sum times
            if (lcount % 2 == 1) {
                
                for (i = 0; i < sum + 1; i++) {
                    std::cout << data << std::endl;
		    textout.append(data);
		    textout.append(","); 

                }
                //set sum to 0
                sum = 0;
                std::cout << "linec = 1";
            }
            
            //convert string to int and add to sum
            else {
                std::stringstream num(data);
                int x = 0;
                num >> x;
                sum = x + sum;
                std::cout << sum;
            }
	std::ofstream file("output.txt");
    	file << textout;
    	file.close();
            
        }
    lcount = lcount + 1;
    }
    file.close();
    
    return 0;
}
