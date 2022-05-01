#include <iostream>
#include <algorithm>
#include<vector>
using namespace std;
int main()
{
    int ar[] = {1, 2, 5, 4, 3, 1, 5, 6,3,2};
    int ar_size = sizeof ar/sizeof ar[0];
    int max = *max_element(ar, ar + ar_size);
    int frq_size = max + 1;
    int freq[frq_size] = {0};

    for (int i = 0; i < ar_size; i++)
    {
        freq[ar[i]]++;
    }
    for (int i = 0; i < frq_size; i++)
    {
        cout << freq[i] << " ";
    }
    cout << endl;

	vector<int> duplicates;

    for (int i = 0; i < frq_size; i++)
    {
        if (freq[i] > 1)
        {
            duplicates.push_back(i);
        }
    }
	cout<<"the duplicate elements are : ";

	for(int i=0;i<duplicates.size();i++){
		if(i==duplicates.size()-1)
			cout<<duplicates[i];
		else if(i==duplicates.size()-2)
			cout<<duplicates[i]<<" and ";
		else
			cout<<duplicates[i]<<", ";
	}
	cout<<endl;
}