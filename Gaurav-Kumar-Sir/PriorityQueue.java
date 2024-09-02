//they are of two types
    // we willl implement max priority queue
    // if k is root then
    //2k and 2k+1 as childs
    // example:
    // for 1 it is 2,3
    //for 2 it is 4,5
    // for 3 it is 6.7

    // but to child to parent it is: k/2
    // arr :1,7,5,9,8,16,13,10
//     16 , 10, 13 , 8 , 9 ,5 , 7, 1 

//         16
//      10       13
//   8     9    5   7
// 1  

public class PriorityQueue
{
    private Integer[] pq;
    private int n;
    public PriorityQueue(int capacity){
        pq=new Integer[capacity+1];
    }
    public void insert(Integer x)
    {
        pq[++n]=x;
        swim(n);
    }
    public Integer delMax(){
        Integer maxP=pq[1];
        pq[1]=pq[n--];
        pq[n+1]=null;// to  avoid loitering
        sink(1);
        return maxP;

    }
    public boolean isEmpty(){
        return n==0;
    }
    public Integer size(){
        return n;
    }
    private void exch(int i,int j){
        int temp=pq[i];
        pq[i]=pq[j];
        pq[j]=temp;
    }
    private void swim(int k){
        while(k > 1 && pq[k/2]<=pq[k]){
            
            exch(k,k/2);
            k=k/2;
        }
    }
    private void sink(int k){
        while(2*k <= n){
            int j=2*k;
            if(j<n && pq[j] < pq[j+1]) j++;
            if(pq[k]>=pq[j]) break;
            exch(k,j);
            k=j;
        }
    }
    public static void main(String[] args){
        PriorityQueue pQueue= new PriorityQueue(10);
        pQueue.insert(10);
        pQueue.insert(9);
        pQueue.insert(7);
        pQueue.insert(11);
        // pQueue.insert(10);
        assert pQueue.delMax()==11;
        pQueue.insert(15);
        pQueue.insert(16);
        pQueue.insert(11);
        // pQueue.insert(10);

    }
}