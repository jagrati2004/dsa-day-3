#include <iostream>
using namespace std;
 
int main() {
        int n;
        cin>>n;
        int dup = n;;
        int res = 0;
 
        
        while (n > 0) {
            int rem = n % 10;
            res = (res) + (rem * rem * rem);
            n = n / 10;
        }
          if (dup== res) {
            cout<<(" It is Armstrong No.");
        }
        else {
            cout<<(" It is not an Armstrong No.");
        }
    return 0;
}
 
