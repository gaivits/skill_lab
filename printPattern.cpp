#include <iostream>
using namespace std;

int main() {

	int dec;
	int binary;
	int i=0;
	int arr[128];
	cin >> dec;

	while (dec != 0)
    {
		binary = dec % 2;
        arr[i] = binary;
        dec /= 2;
        i++;
	}

	for (int cnt=0; cnt<10; cnt++)
        {
		for (int j=i-1; j>=0; j--)
		{
            if (arr[j] == 1)
			{
				cout << "**" << "  ";
			}
            else
            {

				if (cnt == 0 || cnt == 1 || cnt == 8 || cnt == 9)
				{
					cout << "*******" << "  ";
				}
                else
                {
					cout << "**   **" << "  ";
				}
			}
		}
		cout << endl;
	}


}
