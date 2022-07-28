#include <iostream>
using namespace std;

// functionReturnType(*FunctionPtrName)(argumentList);

int Sum(int array[], int length);
int Average(int array[], int length);
void Output(int array[], int length, int (*Function)(int array[], int length));

int main(int argc, char *argv[])
{
  int array[] { 2, 4, 6, 8, 10 };

  Output(array, 5, Sum);
  Output(array, 5, Average);

  return 0;
}

// Implement Sum function.
int Sum(int array[], int length)
{
  int sum = 0;

  for (int i = 0; i < length; i++)
  {
    sum += array[i];
  }

  return sum;
}

// Implement Average function.
int Average(int array[], int length)
{
  return Sum(array, length) / length;
}

// Implement Output which returns what's passed to it.
void Output(int array[], int length, int (*Function)(int array[], int length))
{
  cout << "Result is: " << Function(array, length) << endl;
}
