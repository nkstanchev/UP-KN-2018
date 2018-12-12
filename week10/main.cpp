#include<iostream>
#include<cmath>
#include<cstring>

using namespace std;

///Write a function to print all alphabets from a to z

void PrintAtoZ(){
    for (char  i= 'a'; i <= 'z'; i++ ){
        cout << i << " ";
    }
}
///Write a function to swap first and last digits of a number.

int swapFirstAndLastDigit(int number)
{
    int firstDigit, lastDigit, counter = 0, copyOfnum = number;

    lastDigit = number % 10;

    while(copyOfnum != 0)
    {
        copyOfnum /= 10;
        counter++;
    }

    firstDigit = number / pow(10, counter - 1);
    copyOfnum = number;
    int newNum = lastDigit * pow(10, counter-1);
    newNum += number % (int) pow(10, counter -1 );
    newNum -= lastDigit;
    newNum += firstDigit;

    return newNum;
}
///Write a function to find length of a string
int strLen(char str[])
{
    int i=0;
    int counter = 0;
    while(str[i]!='\0'){
        ++counter;
        ++i;
    }
    return counter;
}
///Write a function to delete an element from an array at specified position.
void removeElement(int arr[],int& size,int index){

    if(index <0 || index >=size){
        cout << "Error";
    }else{
        for (int i=index;i <size-1 ; i++){
        arr[i]= arr[i+1];
    }
    size--;
    //for(int i=0;i < size ; i++) cout << arr[i];

    }

}
void InputArr(int a[],int size){
for(int i =0 ; i < size ; i ++)
    {
    cin >> a[i];
}

}
void printArray(int a[], int size){
    for(int i=0;i < size ; i++){
        cout << a[i];
    }
}
///Write a function to count total number of duplicate elements in an array.
int numberOfDuplicates(int arr[],int size)
{
    //1 2 3 3 3 4
    int count=0;
    for(int i=0;i<size;i++)
    {

        for(int j=i+1;j<size;j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
                //break;
            }
        }
    }
    return count;
}
void substractMatrixes(int fst[][100],int snd[][100],int n,int arrToReturn[][100])
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            arrToReturn[i][j]=fst[i][j]-snd[i][j];
            cout<<arrToReturn[i][j]<<" ";
        }
        cout<<endl;
    }


}
///Write a function to find transpose of a matrix.
void transpose(int arr[][100],int size)
{
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
}
///Write a function to check whether two matrices are equal or not.
bool areEqual(int fst[][100],int snd[][100],int n,int m)
{
    if(n!=m)return false;
    bool flag = true;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(fst[i][j]!=snd[i][j])
            {
                flag = false;
                break;
            }
        }
    }
    return flag;

}

///Write a function to multiply two matrices.
void multiply(int matrix1[][100], int matrix2[][100], int n) {

    for(int i = 0; i < n ; i++) {
        for (int j = 0; j < n; j++) {
            int sum = 0;
            for (int k = 0; k < n; k++) {
               sum += matrix1[i][k] * matrix2[k][j];
            }
            cout << sum << " ";
        }
        cout << endl;
    }
}
///Write a function to trim trailing white space characters from given string
void trimTrailing(char str[])
{
    int size = strlen(str);
    for(int i=0;i<size;i++)
    {
        bool flag=true;;
        if(str[i]==' ')
        {
            for(int j=i+1;str[j]!='\0';j++)
            {
                if(str[j]!=' ')
                {
                    flag = false;
                    break;
                }
            }
            if(flag) str[i]='\0';

        }
    }
}

int main()
{

/*
    int n;
    cin >> n;
    int arr[100][100],arr2[100][100],arr3[100][100];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];

        }
    }
    //transpose(arr,n);
    cout<<"Initialize second matrix"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr2[i][j];

        }
    }
    */
    //cout<<areEqual(arr,arr2,n,n);
    //multiply(arr,arr2,n);
    /*
    cout<<endl;
    //substractMatrixes(arr,arr2,n,arr3);
    //InputArr(a,n);

    int position;
    cin >> position;
    removeElement(a,n,position);
    printArray(a,n);

*/
    char str[100];
    cin.getline(str,100);
    trimTrailing(str);
    cout<<endl<<str<<'!';
    //cout<<numberOfDuplicates(a,n);
    return 0;
}