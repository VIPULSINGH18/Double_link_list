//class Solution { 
//public:
//    ListNode* swapPairs(ListNode* head) {
//
//         if(head==NULL || head->next==NULL){
//            return head;
//            }
//             
//        ListNode* first=head;
//        ListNode* sec= head->next;
//        ListNode* prev= NULL;
//
//       
//
//            while(first !=NULL && sec!= NULL){
//                ListNode* third= sec->next;
//                sec->next=first;
//                first->next=third;
//
//                if(prev!=NULL){
//                    
//                    prev->next=sec;
//                }
//                else{
//                    head=sec;
//                     }
//
//                 prev=first;
//                first=third;
//                if(third!=NULL){
//                sec=third->next;}
//                else{
//                    sec=NULL;
//                }
//                
//               
//
//            }
//             return head;
//           
//        }
//};

//
//#include<iostream>
//#include<algorithm>
//using namespace std;
//int main(){
//	int arr[5];
//	int size= sizeof(arr)/4;
//    
//    
//    for(int i=0; i<size;i++){
//        cin>> arr[i];
//    }
//    
//    for(int i=0;i<size;i++){
//        cout<<arr[i]<<" ";
//    }
//    cout<<endl;
//    
//    
//    int maxi= INT_MAX;
//    for(int i=0;i<size;i++){
//    	maxi=min(arr[i],maxi);
//	}
//	cout<<"Smallest number of array: "<<maxi<<endl;
//	
//	for(int i=0;i<size;i++){
//		if(arr[i]==maxi){
//			cout<<"Index of smallest number: "<<i<<endl;
//		}
//	}
//
//
//	 int mini= INT_MIN;
//    for(int i=0;i<size;i++){
//    	mini=max(arr[i],mini);
//	}
//		cout<<"Largest number of array: "<<mini<<endl;
//		
//		
//		for(int i=0;i<size;i++){
//		if(arr[i]==mini){
//			cout<<"Index of largest number: "<<i<<endl;
//		}
//	}
//	
//    
//    return 0;
//    
//    
//    
//}

//
//#include<iostream>
//using namespace std;
//
//int Search(int arr[],int target,int size){
//	for(int i=0;i<size;i++){
//		if(arr[i]==target){
//			return i;
//			break;
//		}
//	}
//	return -1;
//}
//
//int main(){
//	int arr[10]={1,2,3,4,5,6,7,8,9,10};
//	int s= sizeof(arr)/4;
//	int tar=100;
//	int result=Search(arr,tar,s);
//	if(result>0){
//	cout<<"target found at : ";
//	}
//	cout<<result;
//	return 0;
//}
//
//#include <bits/stdc++.h>
//#include<iostream>
//#include<algorithm>
//using namespace std;
//vector<int> reverse(vector<int> &vec ,int size,int st,int end){
//    
//    if(st==end){
//        return vec;
//    }
//
//	
//	while(st<end){
//		 swap(vec[st],vec[end]);
//		 st++;
//		 end--;
//	}
//	
//	return vec;
//	
//}
//
//int main(){
//	vector<int>vec={1,2,3,4,5};
//	int size= vec.size();
//	int e= size-1;
//		cout<<"Before swap: ";
//	for(int i=0;i<size;i++){
//		cout<<vec[i]<<" ";
//		
//	}
//	cout<<endl;
//	vector<int> result=reverse(vec,size,0,e);
//	cout<<"After swap: ";
//	for(int i=0;i<size;i++){
//		cout<<result[i]<<" ";
//		
//	}
//	cout<<endl;
//	return 0;
//	
//}


//#include<iostream>
//using namespace std;
//int main(){
//	int arr[6]={1,2,3,4,5,6};
//	int size= sizeof(arr)/4;
//	
//	for(int i=0;i<size;i++){
//		for(int j=i;j<size;j++){
//			for(int k=i;k<=j;k++){
//				cout<<arr[k];
//			}
//			cout<<" ";
//		}
//		cout<<endl;
//	}
//	return 0;
//}



//#include<iostream>
//using namespace std;
//int main(){
//	int arr[6]={1,-2,3,4,5};
//	int size= sizeof(arr)/4;
//	int max_sum= INT_MIN;
//	for(int i=0;i<size;i++){
//		int sum=0;
//		for(int j=i;j<size;j++){
//			sum=sum+arr[j];
//			max_sum=max(sum,max_sum);
//			
//		}
//	}
//	cout<<"maximum subarray sum: "<<max_sum;
//	return 0;
//	
//
//
//}






//
//#include<iostream>
//using namespace std;
//int main(){
//	int arr[5]={1,-2,3,4,5};
//	int size=sizeof(arr)/4;
//	int sum=0;
//	int max_sum= INT_MIN;
//	for(int i=0;i<size;i++){
//		sum=sum+arr[i];
//		max_sum=max(sum,max_sum);
//		
//		if(sum<0){
//			sum=0;
//		}
//		
//		
//	}
//	
//	cout<<"Maximum subarray sum: "<<max_sum;
//	return 0;
//}


//
//#include<iostream>
//using namespace std;
//int main(){
//	int arr[5]={10,20,30,40,50};
//	int size= sizeof(arr)/4;
//	cout<<"Number pf subarrays of this array: "<<endl;
//	for(int i=0;i<size;i++){
//		for(int j=i; j<size;j++){
//			for(int k=i;k<=j;k++){
//				cout<<arr[k];
//			}
//			cout<<" ";
//		}
//		cout<<endl;
//	}
//	
//	return 0;
//}



#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    int size= sizeof(arr)/4;
    for(int st=0;st<size;st++){
        for(int end=st;end<size;end++){
            for(int k=st;k<end;k++){
                cout<<arr[k];
            }
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;
    

    
}
