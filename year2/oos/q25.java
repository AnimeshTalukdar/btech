class q25{
    public static void main(String [] args){
        int[] arr = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99};
        int n = arr.length;
        int target = 77;
        SearchThread[] s = new SearchThread[n/10];
        for(int i = 0;i<n/10;i++){
            s[i]= new SearchThread(arr,i*(n/10),9+(i*(n/10)),target);
            s[i].start();
        }
        int isFound = -1;
	int threadIndex = -1;
        for(int i = 0; i<n/10;i++){
            try{
                s[i].join();
            }
            catch(InterruptedException e){

            }
            isFound = s[i].isFound();
            if (isFound != -1){
		threadIndex = i;
                break;
            }
        }
        if (isFound !=-1){
            System.out.println("Found "+ target + " at index" + isFound+" threadIndex: "+threadIndex);
        }
        else{
            System.out.println("Not Found " + target);
        }

    }
}


class SearchThread extends Thread{
    int found = -1;
    int [] arr;
    int startIndex,stopIndex,target;
    SearchThread (int [] arr,int startIndex,int stopIndex,int target){
        System.out.println(startIndex+ " "+ stopIndex);
        this.arr = arr;
        this.startIndex = startIndex;
        this.stopIndex = stopIndex;
        this.target = target;
    }

    public int isFound(){
        return found;
    }
    public void run(){
        int low = startIndex, high = stopIndex;
        while (low <= high){
            int mid = low + (high-low)/2;
            if (arr[mid] == target){
                found = mid;
                return ;
            }
            else if (arr[mid] < target){
                low = mid +1;
            }
            else{
                high = mid -1;
            }
        }
    }
}

