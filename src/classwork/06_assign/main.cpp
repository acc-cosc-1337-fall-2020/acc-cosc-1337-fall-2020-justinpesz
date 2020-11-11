#include<iostream>
#include<fstream>
#include<string>

int main()
{
  std::ofstream out_file;

  std::cout<<"Open File: \n";
  out_file.open("names.dat");

  out_file<<"joe"<<std::endl;
  out_file<<"mary"<<std::endl;
  out_file<<"john"<<std::endl;

  std::cout<<"Close file\n";

  std::ifstream in_file;
  std::cout<<"\nOpen file:\n";
  in_file.open("names.dat");

  std::string name;
  std::cout<<"Names\n";
 
  while(in_file>>name)
  {
    std::cout<<name<<std::endl;
  }

  in_file.close();

  std::cout<<"Done";
	return 0;
}