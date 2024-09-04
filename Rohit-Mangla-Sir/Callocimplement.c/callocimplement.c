void* customiseCalloc(int n){
    void * ptr=(int*) malloc(n);
    for(int i=0;i<n;i++){
        char* curr_byte=(char*)(ptr)+i;
        *curr_byte='\0';
    }
    return ptr;
}