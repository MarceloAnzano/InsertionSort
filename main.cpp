#include <iostream>
#include <fstream>
#include<string>
#include<sstream>

using namespace std;

void insertion_sort(int numbers[], int n)
{
    for(int i =0; i<n; i++)
    {
        int key = numbers[i];
        int j = i-1;

        while(j>=0&&numbers[j]>key)
        {
            numbers[j+1]=numbers[j];
            j = j-1;
        }
        numbers[j+1]=key;
    }
}

int main()
{
    int c = 0, n=10000;
    int numbers[10000];
    string line;
    fstream myfile;
    myfile.open("data10k.txt");
    while(myfile.good())
    {
        getline(myfile,line);
        stringstream(line)>>numbers[c];
        c++;
    }

    //Laman ng Array
    /*for(c = 0; c<n; c++)
    {
        cout<<numbers[c]<<endl;
    }*/

    cout<<"\n\n\nSorting\n";
    insertion_sort(numbers, n);

    //Laman ng Sorted Array
    for(c = 0; c<n; c++)
    {
        cout<<numbers[c]<<endl;
    }
    myfile.close();

    return 0;
}
