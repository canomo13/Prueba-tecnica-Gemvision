#include <iostream>
#include <fstream>
#include <stdio.h>
#include <vector>

using namespace std;

int main()
{
    std::ofstream result("txt/resultado.txt"); 
    std::ifstream filein("txt/Input.txt");
    std::string line,cleanline;
    int cont=0;
    if (filein.is_open()){
        
        while(!filein.eof())
        {
            getline(filein,line);
           
        }
        
        std::cout << line[1] << std::endl;
    }

    line.erase(line.begin(),line.end(),",");
    while(cont < line.size())
    {
        if(line[cont] == 1)
        {
            line[line[cont+3]]=line[line[cont+1]+line[line[cont+2]]];
        }else if(line[cont]==2)
        {
            line[line[cont+3]]=line[line[cont+1]*line[line[cont+2]]];
        }
        cont+=4;
    }
    if(result.is_open()){
        result << line << std::endl;
    }
   
    filein.close();
}