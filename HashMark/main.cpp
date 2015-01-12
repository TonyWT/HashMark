//
//  main.cpp
//  HashMark
//
//  Created by vivitanjing on 15-1-4.
//  Copyright (c) 2015年 vivitanjing. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    int i = 0;
    for (i=0; i<7; i++) {
        // output space
        for(int k=abs(i-3); k>0; k--)
            cout << " ";
        // cal the num of hashmark
        int hmNum = 0;
        if(i > 3)
            hmNum = (4-(i-3))*2;
        else
            hmNum = 2*(i+1);
        // output hashmark
        for(int j=hmNum; j>0; j--)
            cout << "#";
        cout << endl;
    }
    return 0;
}
