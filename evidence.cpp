#include <iostream>
using namespace std;

// Useful for chaining variables 
int ACSII_converter()
{
    char c1,c2,c3,c4,c5;
    cout << " Enter 5 letters? ";
    cin >> c1>>c2>>c3>>c4>>c5;

    cout << "ACSII message: " << int(c1) << " "<< int(c2) << " "<< int(c3) << " "<< int(c4) << " "<< int(c5);
    return 0;
}

// Use for making flowcharts for flowing
int odd_or_even()
{
    int num;
    cout << "Enter number: ";
    cin >> num;

    if (num % 2 == 0) cout << "Even " << "\n";
    else cout << "Odd " << "\n";

    return 0;
}

// Shows power of flowcharts, 
int triangle_type()
{
    float a,b,c;
    cout <<"What is A,B,C? ";
    cin >> a >> b >> c;

    //cout << int(a) << " "<< int(b) << " "<< int(c) << "\n";

    if (a == b && b == c) cout << "Equailateral Triangle" << "\n";
    else
    {
        if (a != b && a != c && b != c) cout << "Scalene Triangle" << "\n";
        else cout << "Isoleo Triangle" << "\n";
    }
    
    return 0;

}

// The terminal will print out 7, not 8 because it will only increment after the operaiton is done. Print first, then increment
int increment()
{
    int counter = 7;
    cout << counter++ << endl;

    return 0;
}

int bmi_cal()
{
    float weight,height,bmi;

    cout <<"What is your weight(KG), height(m)? ";
    cin >> weight >> height;

    bmi = weight / (height * height);
    cout << "BMI: " << bmi << "\n";

    if (bmi < 18.5) cout << "Underweight" << "\n";
    else
    {
        if (bmi > 25) cout << "Overweight"<< "\n";
        else cout <<"Normal Weight"<< "\n";
    }
    return 0;
}


//Never heard Ternary operators. Just an easier way to do an if and else statement
int guess_game()
{
    int host_num, guest_num;

    cout << "Host : ";
    cin >> host_num;

    cout << "Guest: ";
    cin >> guest_num;

    (host_num == guest_num)? cout << "Correct!" : cout << "Failed!";

    /*
    if(host_num == guest_num) cout << "Correct!";
    else cout << "Incorrect";
    return 0;
    */
   return 0;
}


// Use for logic of finding  digits by not converting into string;
int digit_counter()
{
    int number;
    int counter = 0;
    cout << "Number? ";
    cin >> number;

    while (number > 0)
    {
        number = number / 10;
        counter++;
    }

    cout << "Number contains "<< counter << "digits\n";

    return 0;

}

//Use of algorithm to solve problem, easy to program, hard to figure out algorithm
int reverse_num()
{
    int number, reversed_num = 0;

    cout << "Number: ";
    cin >> number;

    while (number != 0)
    {
        reversed_num = reversed_num * 10;
        int last_digit = number % 10;
        reversed_num = reversed_num + last_digit;
        number = number / 10;
    }

    cout << reversed_num;
    return 0;

}

// Do While Loop
// Difference between while and do while is the placement of condition. In while, condition check is first, in do while, do first then check for condition
int pin_valid()
{
    int users_pin = 1234, pin, error_counter = 0;
    // do this while the condition is true
    do 
    {
        cout << "Enter Pin: ";
        cin >> pin;
        if (pin != users_pin) error_counter++;
    }
    while (error_counter < 3 && pin != users_pin);

    // successful in pin
    if (error_counter < 3) cout << "Loading..."<< "\n";
    else cout << "Blocked" << "\n";

    return 0;
}

//for loops, very simple
int factorial()
{
    int num,i = 1,result = 1;
    cout <<"Enter number: ";
    cin >> num;

    for (i; i <= num;i++)
    {
        result = i * result;
    }
    cout << result << "\n";
    return 0;
}

// simple but show the power of nested for loops
//nested for loops
int multi_tables()
{
    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            cout << i << " * "<< j << " = " << i * j << endl;
        }
    }

    return 0;
}

int draw()
{
    int height,width;
    char symbol;

    cout << "Height: ";
    cin >> height;
    cout << "Width: ";
    cin >> width;
    cout << "Symbol: ";
    cin >> symbol;

    for (int h = 0; h < height; h++)
    {
        for (int w = 0; w < width; w++)
        {
            cout << symbol;
        }

        cout << endl;
    }

    return 0;
}


//Both draws were easy for me because I knew how nested for loops work. Seems like to understand programming, maybe go line by line.
int draw2()
{
    int height;
    char symbol;
    cout << "Height: ";
    cin >>  height;
    cout << "Symbol: ";
    cin >> symbol;

    for (int h = 1; h <= height;h++)
    {
        for (int w = 1; w <= h;w++)
        {
            cout << symbol;
        }
        cout << endl;
    }

    return 0;
}

int draw3()
{
    int height;
    char symbol;
    cout << "Height: ";
    cin >>  height;
    cout << "Symbol: ";
    cin >> symbol;

    for (int h = height; h > 0;h--)
    {
        for (int w = h; w > 0;w--)
        {
            cout << symbol;
        }
        cout << endl;
    }

    return 0;
}


int recursive_sum(int num_1, int num_2)
{
    if (num_1 == num_2)
    {
        return num_1;
    }

    return num_1 + recursive_sum(num_1 + 1, num_2);

}

int main()
{

}
