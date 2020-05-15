#!/usr/bin/env python
# coding: utf-8

# In[ ]:


"""
201824421 Kim Namhee
Baekjoon 02740 : Matrix Multiplication - Get C = A * B
Language : Python 3
Code Length : 438 B, Time : 248 ms, Mem : 29,380 KB
"""


# In[ ]:


# Set array A
n, m = map(int, input().split())
a = []
for _ in range(n):
    a.append(list(map(int, input().split())))


# In[3]:


# Set array B
m, k = map(int, input().split())
b = []
for _ in range(m):
    b.append(list(map(int, input().split())))


# In[4]:


# Initail array C
c = [[0 for _ in range(k)] for _ in range (n)]


# In[5]:


# Calculate A*B = C
for i in range(n):
    for j in range(k):
        for l in range(m):
            c[i][j] += a[i][l] * b[l][j]


# In[6]:


# Print array C
for i in c:
    for j in i:
        print(j, end = ' ')
    print()

