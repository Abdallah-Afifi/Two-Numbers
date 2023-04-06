


#include <iostream>   

using namespace std;

int main()
{

    int n1, n2;  //declaring two variables of the type int
    int sum, diff, prod;  //decalring three variables of the type int to store the sum, difference, and product

    cout << "Enter two integars: ";  //prompting the user to enter two integars
    cin >> n1 >> n2;  //reading input from the user and storing it in the already-decalred variables n1, n2

    sum = n1 + n2;  //calculating the sum and storing it in the already-declared variable sum
    diff = n1 - n2; //calculating the difference and storing it in the already-declared variable diff
    prod = n1 * n2; //calculating the product and storing it in the already-declared variable prod

    cout << "The sum of the two numbers is: " << sum << '\n';   //printing the sum to the user
    cout << "The difference of the two numbers is: " << diff << '\n';  //printing the difference to the user
    cout << "The product of the two numbers is: " << prod << '\n';  //printing the product to the user
    

    return 0;
}

