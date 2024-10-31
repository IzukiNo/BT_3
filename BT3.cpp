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

    if(find==false) cout<<"Khong co so hoan hao trong mang!";
}

void LastSHH(int arr[],int n){
    bool find=false;
    for(int i=n-1;i>0;i--){
        if(SHH(arr[i])){
            cout<<"So hoan hao cuoi cung la: "<<arr[i]<<" (nam o so thu "<<i+1<<")";
            find=true;
            break;
        }
    }

    if(find==false) cout<<"Khong co so hoan hao trong mang!";
}

void FindX(int arr[],int n,int x){
    bool find=false;
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            cout<<"So "<<x<<" nam o so thu "<<i+1<<endl;
            find=true;
        }
    }

    if(find==false) cout<<"Khong co so trong mang!";
}

int FindMax(int arr[],int n){
    int max=arr[0];
    for(int i=0;i<n;i++){
        if(max<arr[i]) max=arr[i];
    }

    return max;
}

int FindMin(int arr[],int n){
    int min=arr[0];
    for(int i=0;i<n;i++){
        if(min>arr[i]) min=arr[i];
    }

    return min;
}

int CountMax(int arr[],int n){
    int max=FindMax(arr,n);
    int dem=0;
    for(int i=0;i<n;i++){
        if(max==arr[i]){
            dem+=1;
        }
    }
    return dem;
}

void MaxCoord(int arr[],int n){
    int max=FindMax(arr,n);
    for(int i=0;i<n;i++){
        if(arr[i]==max){
            cout<<i+1<<" ";
        }
    }
}

int main(){
    int n,yc;
    cout<<"Nhap so phan tu: ";
    cin>>n;
    int a[n];

    for(int i=0;i<n;i++){
        a[i]=rand()%101;
    }

    cout<<endl<<"Day la mang co "<<n<<" phan tu voi cac gia tri ngau nhien!\n";
    XuatMang(a,n);
    cout<<endl<<endl<<"Nhap yeu cau de bai (1-6): ";
    cin>>yc;

    switch(yc){

        case 1:
        cout<<endl;
        FirstSHH(a,n);
        break;

        case 2:
        cout<<endl;
        LastSHH(a,n);
        break;

        case 3:
        cout<<endl;
        int x;
        cout<<"Nhap X: ";
        cin>>x;
        FindX(a,n,x);
        break;

        case 4:
        cout<<endl;
        cout<<"Max la: "<<FindMax(a,n)<<", Min la: "<<FindMin(a,n);
        break;

        case 5:
        cout<<endl;
        cout<<"So lon nhat la: "<<FindMax(a,n)<<endl;
        cout<<"Va co "<<CountMax(a,n)<<" phan tu trong mang!";
        break;

        case 6:
        cout<<endl;
        cout<<"So lon nhat la: "<<FindMax(a,n)<<endl;
        cout<<"Co vi tri o so thu: ";
        MaxCoord(a,n);
        break;
    }
}