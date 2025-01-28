#include <print>

using namespace std;

class Computer
{
  Private:
    bool _.ComesWithMonitor = true;    

  Public:
    string CPUType = "Intel";
    int RAMSize = 4096;
}

void TurnOn()
{
  
}

void Shutdown()
{
  
}

void SetComesWithMonitor(bool ComesWithMonitor)
{
  _ComesWithMonitor = ComesWithMonitor;
}

bool GetComesWithMonitor()
{
  return _ComesWithMonitor;
}

int main()
{
  Computer MyComputer;
  MyComputer.CPUType = "AMD" ;
  MyComputer.SetComesWithMonitor(false);

  Computer *pMyComputer = new Computer(); // method2

  pMyComputer->CPUType = "AMD";
  pMyComputer->SetComesWithMonitor(false);
}

