#include <iostream>

using namespace std;

int gcd(int a, int b)
{
  if (b == 0){
    return a;
  }

  else
  {
    return gcd(b, a%b);
  }
}

int main()
{
    int a,b;
    cout << "Please enter a value for a" << endl;
    cin >> a;

    cout << "Please enter a value for b" << endl;
    cin >> b;

    int result = gcd(a,b);

    cout << "Greatest common divider of "<< a <<" and " << b << " = " << result;

    return 0;
}
