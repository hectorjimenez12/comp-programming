# include <iostream> 
using namespace std;
# include <stack>

int main() {
  cout << "We are going to create a stack of cars: \n";
  stack<string> cars;
  cars.push("Mazda");
  cars.push("Volvo");
  cars.push("Ferrari");
  
  cout << "Size of the cars stack: " << cars.size() << "\n";

  cout << "We will print the top: " << cars.top() << "\n";
  
  cout << "We will change the top: \n";
  cars.top() = "Lambo";
  cout << "New top: " << cars.top() << "\n";
  
  cout << "We will pop all cars: \n";

  while (!cars.empty())
  {
    //string c = cars.pop(); // this generates an error because the pop() function is a void function
    cars.pop();
  }

  cout << "Size of the stack after pops:" << cars.size() << "\n";
    
  return 0;
} 