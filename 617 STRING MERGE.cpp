/*
POLISH SPOJ
http://pl.spoj.com/problems/PP0504B/
*/
 #include <iostream>
 #include <cstring>
 #include <string.h>
 using namespace std;
 #define T_SIZE 1001 // OLD c-language define, in modern c++ should be using const int
 char* string_merge(char *x, char *y);
 int main()
 {
    int t,n;
    char S1[T_SIZE], S2[T_SIZE], *S;
    cin>>t;
    cin.getline(S1,T_SIZE);
    while(t){
        cin.getline(S1,T_SIZE,' ');
        cin.getline(S2,T_SIZE);
        string_merge(S1,S2);
        S=string_merge(S1,S2);
        cout << S << endl;
        delete[] S;
    t--;
    }
    return 0;
}

char* string_merge(char *x, char *y)
{
   int n=0;
   while (x[n]!=NULL&&y[n]!=NULL) // LOOP TO COUNT ARRAY CELLS
   {
    n++;
   }
    int arraySize=n*2+1; // +1 BECAUSE NULL ON THE END
    char* mergedArray= new char[arraySize];
    for(int i=0; i<n; i++) // LOOP TO FILL mergedArray WITH ONE BY ONE ELEMENTS FORM EACH x AND y ARRAY
    {
        mergedArray[i*2]=*x;
        mergedArray[(i*2)+1]=*y;
        x++;
        y++;
    }
   mergedArray[n*2]=NULL; // LAST ELEMENT IS NULL OR '\0'
return mergedArray;
}
