class MyHashSet {
private:
    vector<int> data;
public:
    MyHashSet() {}

    void add(int key) {
        if (!contains(key)) {
            data.push_back(key);
        }
    }

    void remove(int key) {
        for(int i = 0; i < data.size(); i++){
            if(data[i] == key){
                data.erase(data.begin() + i);
            }
        }
    }

    bool contains(int key) {
       for(int i = 0; i < data.size(); i++){
            if(data[i] == key){
                return true;
            }
       }
       return false;
    }
};
