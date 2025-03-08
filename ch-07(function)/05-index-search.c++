#include <iostream>

int search(int A[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (key == A[i])
        {
            return i;
        }
    }
}
using namespace std;
int main()
{
    int A[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int k;
    cout << "enter the number to search the index\n";
    cin >> k;
    int index = search(A, 9, k);
    cout << "the index of the number is\n"
         << index;

    return 0;
}