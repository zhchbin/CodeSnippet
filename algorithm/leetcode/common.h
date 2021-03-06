#ifndef  COMMON_H_
#define  COMMON_H_

#include <cmath>
#include <cassert>

#include <algorithm>
#include <iostream>
#include <map>
#include <queue>
#include <stack>
#include <vector>
using namespace std;

#define ARRAY_SIZE(a) sizeof((a)) / sizeof((a)[0])

struct ListNode {
  int val;
  ListNode* next;
  ListNode(int x = 0) : val(x), next(NULL) {}
};

struct TreeNode {
  int val;
  TreeNode* left;
  TreeNode* right;
  TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

struct Point {
  int x;
  int y;
  Point() : x(0), y(0) {}
  Point(int a, int b) : x(a), y(b) {}
};

#endif  // COMMON_H_
