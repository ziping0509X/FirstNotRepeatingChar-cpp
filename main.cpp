//剑指offer
//在一个字符串(0<=字符串长度<=10000，全部由字母组成)中找到第一个只出现一次的字符,
// 并返回它的位置, 如果没有则返回 -1（需要区分大小写）.

#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    int FirstNotRepeatingChar(string str) {
        if(str.size()==0)
            return -1;
        char ch[256]={0};
        for(int i=0;i<str.size();i++)
            ch[str[i]]++;//这一步太厉害了 str[i]作为int型变量时，就是ASC值
        for(int i=0;i<str.size();i++)
            if(ch[str[i]]==1)
                return i;
        return 0;


    }
};

//思路是一样的，只是剑指书上的思路有点绕
//不如理解为定义了一个数组，这个数组中存放的就是对应ASC表中字符出现的次数