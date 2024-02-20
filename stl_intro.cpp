#include <iostream>
 //#include <bits/stdc++.h>
 #include <vector>
 #include <string>

using namespace std;

 //int val=10;
 struct node {
    string str;
    int num;
    double doub;
    char x;
      struct node(str_,num_,doub_,x_)
     {
        str=str_;
        num=num_;
        doub=doub_;
        x=x_;
     }
 };
 array<int,3> arr{};
 //the max size of this array is 10^7 while that defined in the int main is 10^7


int main()
{
   
    double val=120.00;
    cout << val << endl;
    //cout <<njiu::val << endl;

//correct way defining a struct in cpp is 
node *stephen=new node("stephen",10,0.99,'y');
/*instead of this code below
node stephen;
stephen.str="Stephen";
stephen.num=10;
stephen.doub=0.99;
stephen.x='Y';*/
 //defining arrays 
 int arr[1000]={0};//a thousand elements each having a zero inside

 array<int, 5> arr;
 arr.fill(5);//fills each index with a 5
 //printing hte array

 for( size_t i=0; i<arr.size(); i++ )
{
    cout<<arr.at(i)<<endl;
}
//looking at iterators in arrays and vectors

 array<int,5> arr={1,3,4,6,9};
 for(auto i:arr.begin();i!=arr.end();i++)
 {
    cout <<*i <<endl;
 }
 //another way of printing out the array elements

 for(auto i:arr.rbegin;i>arr.rend();i++)
 {
     cout <<*i<<endl;

 }
 //another way of printing out the array elements
 for(auto i:arr.end()-1;i>=arr.begin();i--)
 {
    cout<<*i<<" ";

 }
 //using the most powerful loop printin gmethod for each

 for(auto i:arr)
 {
    cout << i << endl;
 }
 //printng size
 cout<<arr.size()<<endl;
 cout <<arr.front()<<endl;
 cout <<arr.back()<<endl;
 //back element can also be printed as
 cout<<arr.at(arr.size()-1)<<endl;




 //INTRODUCTION TO VECTORS

 int arr[50];
 vector<int> v1;
 cout<<v1.size()<<endl;
 v1.push_back(6);
 v1.push_back(99);
 vi.emplace_back(54);
 //Here emplace_back works a little faster than Push_back and is therefore choosen by competitive programming
 v1.pop_back();
 //pop_back deletes the last element of the vector
 v1.clear();
 //this clears the whole vector
 vector<int> v2(4,1);//this means four index all filled with 1

    //coping one vector into another
    vector<int> v3(v2.begin(),v2,end()); //
    vector<int> v3(v2);
    vextor <int> v4;
    v4.emplace_back(4);
    v4.emplace_back(45);
    v4.emplace_back(3);
    v4.emplace_back(2);

    vector <int> v5(v4.begin(),v4.begin()+3);
    //this copies the first three elements of the v4 vector

    //2d and 3d vectors 

    vector <vector<int>>vec;
    vector <int> steve;
    steve.emplace_back(4);
    steve.emplace_back(99);
    steve.emplace_back(3);
     vector <int> njiu;
     njiu.emplace_back(2);
     njiu.emplace_back(4);
     njiu.emplace_back(-1);

     vector <int> guru;
     guru.push_back(-3);
     guru.push_back(-44);
     guru.push_back(-99);

//initialisation of a 2d vector
     vec.push_back(steve);
     vec.push_back(njiu);
     vec.push_back(guru);

     //printing out a 2d vector

     for(int i=0;i<vec.size();i++)
     {
        for(int j=0;j<vec[i].size();j++)
        {
            cout<<vec[i][j]<<endl;
        }
     }

     //defining a 10*20 vector 
     vector<vector<int>>vec1(10,vector<int>(20,1));
     vec1.push_back(vector<int>(20,1));
     cout<<vec1.size()<<endl;

     vec1[2].push_back(1);
     arr[1].push_back(0);
     vector<vector<vector<int>>>vec2(10,vector<vector<int>(20,vector<int>(30,0  ) ) );
     //the last element is the same as arr[10][20][30];





    return 0;
}