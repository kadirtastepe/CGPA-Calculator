//CGPA Calculator
#include<iostream>
#include<fstream>

int main(){
double array[100], arrayer[100];
std::string strarray[100],strarray1[100];
int firstline = 0;
int endline=70;
std::ifstream in;
in.open("not.txt");
if(in.is_open())
{
for(int i = firstline; i<endline; i++){
in >> array[i] >> strarray[i] >> strarray1[i];

}
in.close();

}
else{
std::cout<<"error!!!";
return 1;
}
/*
for(int i = 0;i<endline;i++){
std::cout<<array[i]<<","<<std::endl;


}
*/

for(int i=firstline; i<endline; i++){
if(strarray[i]=="A1"){arrayer[i]=4.00;}
if(strarray[i]=="A2"){arrayer[i]=3.75;}
if(strarray[i]=="A3"){arrayer[i]=3.50;}
if(strarray[i]=="B1"){arrayer[i]=3.25;}
if(strarray[i]=="B2"){arrayer[i]=3.00;}
if(strarray[i]=="B3"){arrayer[i]=2.75;}
if(strarray[i]=="C1"){arrayer[i]=2.50;}
if(strarray[i]=="C2"){arrayer[i]=2.25;}
if(strarray[i]=="C3"){arrayer[i]=2.00;}
if(strarray[i]=="D"){arrayer[i]=1.75;}
if(strarray[i]=="F3"){arrayer[i]=0.00;}



}




int sum =0;
for(int i =firstline; i<endline; i++){
sum+=array[i];
}

//compute points
double sum1 =0.;

for(int i=firstline; i<endline; i++){
sum1+=array[i]*arrayer[i];

}




std::cout.precision(3); 

std::cout<<"Total Number of Courses Taken:" <<endline-firstline <<std::endl;
std::cout<<"Total ECTS:" <<sum<<std::endl;
std::cout<<"CGPA:" <<sum1/sum<<"/4.00"<<std::endl;



return 0;
}
