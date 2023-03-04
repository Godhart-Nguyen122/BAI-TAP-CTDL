#include<bits/stdc++.h>
using namespace std;

void TimMax(int a ,int b, int c);
void Demchanle();
void TimkiemXtrongmang1();
void TimkiemXtrongmang2();
void SelectionSort();
void InsertionSort();
void BubbleSort();
void menu();

void TimMax(int a,int b,int c){
    int max=a;
    if(max<b){
        max=b;
        }
    if(max<c){
        max=c;
        }
    cout<<"Max la :"<<max<<endl;
}

void Demchanle(){
    int chan=0,n,A[1001];
    cout<<"Hay nhap so phan tu cua mang"<<endl;
    cin>>n;
    cout<<"Hay nhap so phan tu mang"<<endl;
    for(int i=0;i<n;i++){
         cin>>A[i];
    for(int i=0;i<n;i++){
        if(!A[i]%2){
            chan++;
        }
    }
    cout<<"So phan tu chan la : "<<chan<<endl;
    cout<<"So phan tu le la : "<<n-chan<<endl;
}
}
void TimkiemXtrongmang1(){
    int A[1001],n,x;
    cout<<"Hay nhap so phan tu cua mang"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
         cout<<"Hay nhap so phan tu thu  "<<i<<" : ";
         cin>>A[i];
         cout<<endl; 
    }
    cout<<"Hay nhap phan tu can tim kiem "<<endl;
    cin>>x;
    cout<<"Vi tri phan tu "<<x<<" can tim la : ";
    for(int i=0;i<n;i++){
        if(A[i]==x){
            cout<<i<<" , ";
        }
    }
    cout<<endl;
}
void TimkiemXtrongmang2(){
    int A[1001],n,x;
    cout<<"Hay nhap so phan tu cua mang "<<endl;
    cin>>n;
    cout<<"Hay nhap phan tu cua mang theo thu tu tang dan hoac giam dan "<<endl;
    for(int i=0;i<n;i++){
         cin>>A[i];
    }
    cout<<"Hay nhap phan tu can tim kiem "<<endl;
    cin>>x;
    // binary search
    vector<int>ketqua;
    int left=0,right=n-1;
    while(left<=right){
        int mid=left+(right-left)/2;
        if(A[mid]==x){
            ketqua.push_back(mid);
        }
        else if(A[mid]<x){
            left=mid+1;
        }
        else{
            right=mid-1;
        }
    }
    if(ketqua.empty()){
        cout<<"Khong tim thay X"<<endl;
    }
    else{
        cout<<"Vi tri cua x la "<<endl;
       for(int x: ketqua){
          cout<<x<<" ";
       }
    }
}
void SelectionSort(){
    int n,A[100];
    cout<<"Nhap so phan tu cua mang"<<endl;
    cin>>n;
    cout<<"Nhap phan tu mang"<<endl;
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    for(int i=0;i<n;i++){
       int mindex=i;
       for(int j=i+1;j<n;j++){
           if(A[mindex]>A[j]){
               mindex=j;
           }
       }
       swap(A[i],A[mindex]);
    }
    cout<<"Mang da duoc sap xep : "<<endl;
    for(int i=0;i<n;i++){
        cout<<A[i]<<" ";
    }
    cout<<endl;
}
void InsertionSort(){
    int n,A[100];
    cout<<"Nhap so phan tu cua mang"<<endl;
    cin>>n;
    cout<<"Nhap phan tu mang"<<endl;
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    for(int i=1;i<n;i++){
        int t=A[i],j=i-1;
        while(t>A[j]&&j>=0){
            A[j+1]=A[j];
            j--;
        }
        A[j+1]=t;
    }
   cout<<"Mang da sap xep la : "<<endl;
   for(int i=0;i<n;i++){
      cout<<A[i]<<" ";
   }
}
void BubbleSort(){
    int n,A[100];
    cout<<"Nhap so phan tu cua mang"<<endl;
    cin>>n;
    cout<<"Nhap phan tu mang"<<endl;
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    for(int i=0;i<n;i++){
        for(int j=n-1;j>=0;j--){
            if(A[j]<A[j-1]){
                swap(A[j],A[j-1]);
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<A[i]<<" ";
    }
}
void menu(){
 cout<<"===================MENU======================"<<endl;
        cout<<"1.Tim max a,b,c"<<endl;
        cout<<"2.Dem chan len trong day"<<endl;
        cout<<"3.Tim kiem X ton tai trong mang"<<endl;
        cout<<"4.Tim kiem X ton tai trong mang theo Binary Search"<<endl;
        cout<<"5.Sap xep mang tang dan Selection Sort "<<endl;
        cout<<"6.Sap xep mang giam dan Insertion Sort"<<endl;
        cout<<"7.Sap xem mang tang dan Bubble Sort"<<endl;
        cout<<"0. Ket thuc chuong trinh"<<endl;
        cout<<"============================================="<<endl;
}
int main(){
    int chon;
    while (true){
        menu();
        cout<<"Hay nhap lua chon cua ban "<<endl;
        cin>>chon;
        switch(chon){
            case 1:
                int a,b,c;
                cout<<"Hay nhap 3 so a b c "<<endl;
                cin>>a>>b>>c;
                TimMax(a,b,c);
                break;
            case 2:
                Demchanle();    
                break;
            case 3:
                TimkiemXtrongmang1();   
                break;
            case 4:
                TimkiemXtrongmang2();
                break;
            case 5:
                SelectionSort();
                break;    
            case 6:
                InsertionSort();
                break;
            case 7: 
                 BubbleSort();  
                 break;
            case 0:
                return 0;         
        }
        system("pause");
        system("cls");
    }
    return 0;
}