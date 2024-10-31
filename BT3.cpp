#include <bits/stdc++.h>
using namespace std;

void XuatMang(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

bool SHH(int n){
    int t=0;
    if(n<6){
        return false;
    }
    for(int i=1;i<n;i++){
        if(n%i==0){
            t+=i;
        }
    }
    if(t==n){
        return true;
    } else {
        return false;
    }
}

void FirstSHH(int arr[],int n){
    bool find=false;
    for(int i=0;i<n;i++){
        if(SHH(arr[i])){
            cout<<"So hoan hao dau tien la: "<<arr[i]<<" (nam o so thu "<<i+1<<")";
            find=true;
            break;
        }
    }

    if(find=false) cout<<"Khong co so hoan hao trong mang!";
}

void FindX(int arr[],int n,int x){
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            cout<<"So "<<x<<" nam o so thu "<<i+1;
        }
    }
}

void FindMinMax(int arr[],int n){
    int max=arr[0],min=arr[0];
    for(int i=0;i<n;i++){
        if(max<arr[i]) max=arr[i];
        if(min>arr[i]) min=arr[i];
    }

    cout<<"Max la: "<<max<<", Min la: "<<min;
}

int main(){
    int n,yc;
    system("cls");
    cout<<"Nhap so phan tu: ";
    cin>>n;
    int a[n];

    for(int i=0;i<n;i++){
        a[i]=rand()%100;
    }

    cout<<"Day la mang co "<<n<<" phan tu voi cac gia tri ngau nhien!\n";
    XuatMang(a,n);
    cout<<endl<<"Nhap yeu cau de bai (1-6): ";
    cin>>yc;

    switch(yc){

        case 1:
        system("cls");
        cout<<"Mang: ";XuatMang(a,n);cout<<endl;
        FirstSHH(a,n);
        break;

        case 3:
        system("cls");
        cout<<"Mang: ";XuatMang(a,n);cout<<endl;
        int x;
        cout<<"Nhap X: ";
        cin>>x;
        FindX(a,n,x);
        break;

        case 4:
        system("cls");
        cout<<"Mang: ";XuatMang(a,n);
        cout<<endl;
        FindMinMax(a,n);
        break;
    }
    
}