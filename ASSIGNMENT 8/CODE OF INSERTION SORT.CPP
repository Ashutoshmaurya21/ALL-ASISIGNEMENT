using namespace std;
 
//a function that will print the vector passed to it, elements seprated by space
void printVector(vector<int>A)
{
	//traverse all the element and print them
	for(int i=0;i<A.size();i++)
	{
		cout<<A[i]<<" ";	
	}
	cout<<"\n";
}
 
//the vector A will be sorted inplace and that's why passed with refrence
void sort(vector<int>&A)
{
	sort(A.begin(),A.end());
	//write the code for insertion sort
}
 
int main() {
	vector<int>A= {6,1,2,3,4,6,1};
	// your code goes here
	sort(A);
	cout<<"sorted vector: ";
	printVector(A);
 
	return 0;
}
