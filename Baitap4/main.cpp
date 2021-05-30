#include <iostream>

using namespace std;

int main()
{
    cout<<"Nhap n:";
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cout<<"Nhap so thu "<<i+1<<" : ";
        cin>>a[i];
    }
    cout<<"Mang vua nhap la :";
    for (int i=0; i<n; i++)
    {
        cout<<" "<<a[i];
    }
    int max = a[0];
    for (int i=1; i<n; i++)
    {
        if(a[i]>=max)
        {
            max=a[i];
        }
    }
    cout<<"\n So lon nhat la :"<<max;
    int max2 =a[0];
    for(int i=1; i<n; i++)
    {
        if( a[i]!= max && max2 <a[i])
        {
            max2=a[i];

        }
    }
    cout<<"\n So lon thu hai la :"<<max2;
    int flag;
    for (int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>=a[j]){
                flag=a[i];
                a[i]=a[j];
                a[j]=flag;
            }
        }
    }
    cout<<"\n Day so sau khi sap xep la :";
    for (int i=0;i<n;i++){
        cout<<" "<<a[i];
    }
        cout<<"\n So lon nhat la :"<<a[n-1];
        cout<<"\n So lon thu hai la :"<<a[n-2];
}
