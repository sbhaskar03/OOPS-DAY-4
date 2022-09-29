#include <iostream>
#include <iomanip>
using namespace std;
void no_5_count_from_min_to_max_skip_two(int min, int max);
int main()
{

    int min;
    int max;
    int first;
    int second; 

    cout<<"Enter first number:";
    cin>>first;
    cout<<endl;
    cout<<"Enter second number:";
    cin>>second;
    cout<<endl;

    if (first>second){
        max = first;
        min = second;
    }
    else{
        max = second;
        min = first;
    }

    no_5_count_from_min_to_max_skip_two(min,max);

    return 0;
}

void no_5_count_from_min_to_max_skip_two(int min, int max){
    cout<<"5.Counting from min to max but skip two:";
    cout<<endl;

    for(int i=min; i<=max; i++){
        int count = 0;
        count++;
        if (count==3){
            cout<<setw(4)<<"X";
            count = 0;
        }
        cout<<setw(4)<<i;
    }
cout<<endl;
}
