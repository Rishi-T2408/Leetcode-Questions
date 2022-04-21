class MyHashSet {
public:
    int HT[1000001]={0};
    MyHashSet() {
        for(int i=0;i<1000001;i++)
        {
            HT[i]=0;
        }
    }
    
    void add(int key) {
        HT[key]++;
    }
    
    void remove(int key) {
        if(HT[key]!=0)
        {
            HT[key]=0;
        }
    }
    
    bool contains(int key) {
        if(HT[key]!=0) return true;
        return false;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */