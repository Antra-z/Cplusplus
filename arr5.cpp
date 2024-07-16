#include <iostream>
using namespace std;

int main() 
{
    int a[100]={4, 6, 7, 8}; 
    int ch;
    int l=4; 
    while (true) {
        cout<<"\nEnter\n1. Insert\n2. Delete\n3. Update\n4. Read\n5. Exit"<<endl;
        cin>>ch;
        switch (ch) 
        {
            case 1: {
                cout << "Enter an element to insert into the array"<<endl;
                int x;
                cin>>x;
                a[l]=x;
                l++;
                cout<<"Updated array: ";
                for(int i=0;i<l;i++) 
                {
                    cout<<a[i]<<" ";
                }
                cout<<endl;
                break;
            }
            case 2: 
            {
                cout<<"Enter an element you wish to delete"<<endl;
                int x;
                cin>>x;
                int pos=-1;
                for (int i=0;i<l;i++) 
                {
                    if (a[i]==x) {
                        pos=i;
                        break;
                    }
                }
                if (pos!=-1) {
                    for(int i=pos;i<l-1;i++) 
                    {
                        a[i]=a[i+1];
                    }
                    l--;
                    cout<<"Updated array: ";
                    for(int i=0;i<l;i++) 
                    {
                        cout<<a[i]<<" ";
                    }
                    cout<<endl;
                } 
                else 
                {
                    cout<<"Element not found in the array"<<endl;
                }
                break;
            }
            case 3: {
                int x, pos;
                cout<<"Enter an element to update in the array: ";
                cin>>x;
                cout<<"Enter position: ";
                cin>>pos;
                if(pos>=0&&pos<l) {
                    a[pos]=x;
                    cout<<"Updated array: ";
                    for(int i=0;i<l;i++) 
                    {
                        cout<<a[i]<<" ";
                    }
                    cout<<endl;
                } 
                else 
                {
                    cout << "Invalid position" << endl;
                }
                break;
            }
            case 4: 
            {
                cout<<"Array elements: ";
                for(int i=0;i<l;i++) 
                {
                    cout<<a[i]<<" ";
                }
                cout<<endl;
                break;
            }
            case 5: 
            {
                exit(0);
            }
            default: 
            {
                cout<<"Invalid choice"<< endl;
                break;
            }
        }
    }
    return 0;
}























/*

#include<iostream>
using namespace std;
int main()
{
    int a[]={4,6,7,8};
    int ch;
    int l=sizeof(a)/sizeof(a[0]);
    while(true)
    {
        cout<<"\nEnter\n1. Insert\n2. Delete\n3. Update\n4. Read\n5. Exit"<<endl;
        cin>>ch;
    switch(ch)
    {
        case 1:
        {
            cout<<"Enter an element to insert into the array"<<endl;;
            int x;
            cin>>x;
            a[l]=x;
            cout<<"Updated array"<<endl;
            for(int i=0;i<=l;i++)
            {
                cout<<a[i]<<" ";
            }
            break;
        }
        case 2:
        {
            cout<<"Enter an element you wish to delete"<<endl;
            int x;
            cin>>x;
            int pos;
            for(int i=0;i<l;i++)
            {
                if(a[i]==x)
                {
                    pos=i;
                    break;
                }
            }
            for(int i=pos;i<l;i++)
            {
                a[i]=a[i+1];
            }
            for(int i=0;i<l-1;i++)
            {
                cout<<a[i]<<" ";
            }
            cout<<endl;
        }
        case 3:
        {
            int x, pos;
            cout<<"Enter an element to update in the array: ";
            cin>>x;
            cout<<"Enter position: ";
            cin>>pos;
            a[pos]=x;
            for(int i=0;i<l;i++)
            {
                cout<<a[i]<<" ";
            }
        }
        case 4:
        {
            for (int i=0;i<l;i++) 
            {
                cout<<a[i]<<" ";
            }
            cout<<endl;
        }
        case 5:
        {
            exit(0);
        }
    }
    }
}




























#include<iostream>
using namespace std;

void insertElement(int arr[], int &n, int pos, int element) {
    if (pos < 0 || pos > n) {
        cout << "Invalid position!" << endl;
        return;
    }
    // Shift elements to the right
    for (int i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    // Insert new element
    arr[pos] = element;
    n++;
}

void deleteElement(int arr[], int &n, int pos) {
    if (pos < 0 || pos >= n) {
        cout << "Invalid position!" << endl;
        return;
    }
    // Shift elements to the left
    for (int i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--;
}

void updateElement(int arr[], int n, int pos, int element) {
    if (pos < 0 || pos >= n) {
        cout << "Invalid position!" << endl;
        return;
    }
    arr[pos] = element;
}

void readElements(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[100] = {4, 6, 7, 8}; // initialize array with some elements
    int n = 4; // current size of the array
    int ch;

    while (true) {
        cout << "Enter\n1.Insert\n2.Delete\n3.Update\n4.Read\n5.Exit" << endl;
        cin >> ch;

        switch (ch) {
            case 1: {
                int x, pos;
                cout << "Enter an element to insert into the array: ";
                cin >> x;
                cout << "Enter position: ";
                cin >> pos;
                insertElement(arr, n, pos, x);
                break;
            }
            case 2: {
                int pos;
                cout << "Enter position to delete from the array: ";
                cin >> pos;
                deleteElement(arr, n, pos);
                break;
            }
            case 3: {
                int x, pos;
                cout << "Enter an element to update in the array: ";
                cin >> x;
                cout << "Enter position: ";
                cin >> pos;
                updateElement(arr, n, pos, x);
                break;
            }
            case 4: {
                readElements(arr, n);
                break;
            }
            case 5: {
                cout << "Exiting..." << endl;
                return 0;
            }
            default: {
                cout << "Invalid choice!" << endl;
                break;
            }
        }
    }

    return 0;
}



*/