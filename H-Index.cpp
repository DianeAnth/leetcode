// Given an array of integers citations where citations[i] is the number of citations a researcher received for their ith paper,
// return the researcher's h-index.

// According to the definition of h-index on Wikipedia: The h-index is defined as the maximum value of h,
// such that the given researcher has published at least h papers that have each been cited at least h times.


  class Solution {
public:
    int hIndex(vector<int>& citations) {
        

        int n = citations.size();
        int h = n;
        cout << h <<"  ";
        int dessous = 0;
        int k = 1;
        int i = 0;

            while (i<n) {

            if (citations[i]<h){
                dessous ++ ;
                i++;
              //  cout << "dessous "<< dessous <<"\n";
              
               // cout << " k "<< k<< "\n";


                
            }
            else {
                i++;
            }

            if (dessous == k) {
                k++;
                h = h-1;
               // cout << "h vaut " <<h <<" ";
                i=0;
                dessous = 0;
                
            }

            
        }

        return h;
    }
};
