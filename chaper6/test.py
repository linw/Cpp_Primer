#coding:utf-8
#-------------------------------------------------------------------------------
# Name:        模块1
# Purpose:
#
# Author:      Administrator
#
# Created:     13-10-2011
# Copyright:   (c) Administrator 2011
# Licence:     <your licence>
#-------------------------------------------------------------------------------
#!/usr/bin/env python

import re

def main():
    # info = [1,2,3,4,5]，用两种方法，把列表变成:info=[5,4,3,2,1]

    #method1
    info = [1,2,3,4,5]
    info.reverse()
    print(info)

    #method2
    info = [1,2,3,4,5]
    n=[]
    for s in info:
        n.insert(0,s)
    info=n
    print(info)

    #method3
    info = [1,2,3,4,5]
    for i in range(int(len(info)/2)):
        info[i],info[len(info)-i-1]=info[len(info)-i-1],info[i]
    print(info)


    #x = "abc1z" 用两种方法，把字符串x变成 x="abc2z"
    #methon 1
    x='abc1z'
    x=x.replace('1','2')
    print(x)

    #method2
    x='abc1z'
    pat=re.compile('1')
    x=pat.sub('2',x)
    print(x)

if __name__ == '__main__':
    main()