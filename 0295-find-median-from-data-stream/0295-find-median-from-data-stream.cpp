#include<vector>
#include <algorithm>
using namespace std;
class MedianFinder {

vector<int> arr;
public:
    MedianFinder() {
        
    }

    void addNum(int num) {

        auto it=lower_bound(arr.begin(),arr.end(),num);
        arr.insert(it,num);
    }
    
    double findMedian() {

        int mid=arr.size()/2;
        if(arr.size()%2==0){
            
            double median=0.0;
            median+=arr[mid];
            median+=arr[mid-1];
            median=median/2;
            return median;
            //avg of middle elements
        }
        else{
            return arr[mid];        
            }
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */