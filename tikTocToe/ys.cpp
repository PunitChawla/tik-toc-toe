#include <bits/stdc++.h>
using namespace std;
// vector<int> arrangePermutation(int& N)
// {
// 	vector<int> odd, even, res;

// 	// If answer does not exist
// 	if (N & 1) {
// 		for (int i = 1; i <= N; i++) {
// 			res.push_back(-1);
// 		}
// 		return res;
// 	}

// 	// Separately store the even numbers
// 	// and odd numbers
// 	for (int i = 1; i <= N; i++) {
// 		if (i & 1) {
// 			odd.push_back(i);
// 		}
// 		else {
// 			even.push_back(i);
// 		}
// 	}

// 	int k = 0, j = 0;
// 	for (int i = 0; i < N; i++) {

// 		// If index is even output the even
// 		// number because, (even + 1)*even
// 		// = even
// 		if (i % 2 == 0) {
// 			res.push_back(even[k++]);
// 		}
// 		else {

// 			res.push_back(odd[j++]);
// 		}
// 	}

// 	// Return the result
// 	return res;
// }
// void printResult(vector<int>& res)
// {
//     sort(res.begin(),res.end(), greater<int>() );
// 	for (auto x : res) {
//         if(x==-1){
//             cout<<-1<<endl;
//             break;
//         }

// 		cout << x << " ";
// 	}
// 	cout << endl;
// }

// int main() {
// 	int t; 
// 	cin>>t;
// 	while(t--){
// 	    int N;
// 	    cin>>N;
// 	    vector<int> res = arrangePermutation(N);
// 	    printResult(res);
// 	}
// 	return 0;
// }


int pairORSum(int a, int b)
{
   int ans = 0; // Initialize result
      for (int i = a; i <= b; i++)
       for (int j = i+1; j <=b; j++)
           ans += i^j;

   return ans;
}
int main(){
cout<<pairORSum(1,4)<<endl;
}