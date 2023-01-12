#include <iostream>

enum LogType{
 Error = 1,
 Complete = 2,
 Warning = 3
};

namespace TurtleLog {

void Log(std::string message, LogType Type){

   if(Type > 3){
     std::cout << "[Error] " << "Log Type " << Type << " Does Not Exist Try Again Using LogType::Error, LogType::Complete or LogType::Warning" << "\n";
   }
   if(0 > Type){
     std::cout << "[Error] " << "Log Type " << Type << " Does Not Exist Try Again Using LogType::Error, LogType::Complete or LogType::Warning" << "\n";
    }
  
   if(Type == 1){
     std::cout << "[Error]   " << message << "\n";
   }
  
   if(Type == 2){
      std::cout << "[Sucess]  " << message << "\n";
   }
  
   if(Type == 3){
     std::cout << "[Warning] " << message << "\n";
   }
  
 }

}
