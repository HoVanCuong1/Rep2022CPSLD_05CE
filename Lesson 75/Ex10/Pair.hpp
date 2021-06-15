//
//  Pair.hpp
//  Lesson74
//
//  Created by Branium on 12/06/2021.
//

#ifndef Pair_hpp
#define Pair_hpp

#include <iostream>
using namespace std;

template<class K, class V> class Pair;
template<class K, class V> istream& operator >> (istream&, Pair<K, V>&);
template<class K, class V> ostream& operator << (ostream&, const Pair<K, V>&);

template<class K, class V> class Pair {
    friend istream& operator >> <> (istream&, Pair<K, V>&);
    friend ostream& operator << <> (ostream&, const Pair<K, V>&);
private:
    K key;
    V value;
public:
    Pair() {}
    Pair(K key, V value) : key(key), value(value) {}
    void setKey(K key) { this->key = key; }
    void setValue(V value) { this-> value = value; }
    K getKey() const { return key; }
    V getValue() const { return value; }
};

template<class K, class V> istream& operator >> (istream& is, Pair<K, V>& pair) {
    cout << "Nhap key: ";
    getline(is, pair.key);
    cout << "Nhap value: ";
    getline(is, pair.value);
    return is;
}

template<class K, class V> ostream& operator << (ostream& os, const Pair<K, V>& pair) {
    cout << "Key: " << pair.key << " - Value: " << pair.value << endl;
    return os;
}

#endif /* Pair_hpp */
