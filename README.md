# TurtleLog

Only Existing Types Are Error Sucess And Warning

Example   

#include "TurtleLog.hpp"

int main() {
  TurtleLog::Log("Hello World!   ", LogType::Error);
  TurtleLog::Log("Hello World!   ", LogType::Complete);
  TurtleLog::Log("Hello World!   ", LogType::Warning);
}
