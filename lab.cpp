#include <iostream>
using namespace std;


bool isPrime(int num)
{
    if (num < 2)
        return false;

    for (int i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
            return false;
    }

    return true;
}


void bubbleSort(int arr[], int size)
{
    int temp;

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int n;

    cout << "Введіть число n: ";
    cin >> n;

    int divisors[100];
    int count = 0;

    
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0 && isPrime(i))
        {
            divisors[count] = i;
            count++;
        }
    }

    
    cout << "\nПрості дільники числа:" << endl;

    for (int i = 0; i < count; i++)
    {
        cout << divisors[i] << " ";
    }

    
    bubbleSort(divisors, count);

   
    cout << "\n\nМасив після сортування за убуванням:" << endl;

    for (int i = 0; i < count; i++)
    {
        cout << divisors[i] << " ";
    }

    cout << endl;

    return 0;
}
