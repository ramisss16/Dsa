#include <bits/stdc++.h>
using namespace std;

int cal(int v1, int v2, char op)
{
    if (op == '*')
    {
        return v1 * v2;
    }
    if (op == '+')
    {
        return v1 + v2;
    }
    if (op == '/')
    {
        return v1 / v2;
    }
    else
    {
        return v1 - v2;
    }
}

int presedence(char ch)
{
    if (ch == '/' or ch == '*')
        return 2;
    else if (ch == '+' or ch == '-')
        return 1;
    else
    {
        return -1;
    }
}

int eval(string &str)
{
    stack<int> num;
    stack<int> ops;

    for (int i = 0; i < str.size(); i++)
    {
        if (isdigit(str[i]))
        {
            num.push(str[i] - '0');
        }
        else if (str[i] == '(')
        {
            ops.push(str[i]);
        }
        else if (str[i] == ')')
        {
            while (not ops.empty() and ops.top() != '(')
            {
                char op = ops.top();
                ops.pop();

                int v2 = num.top();
                num.pop();
                int v1 = num.top();
                num.pop();
                num.push(cal(v1, v2, op));
            }
            if (not ops.empty())
                ops.pop();
        }
        else
        {
            while (not ops.empty() and presedence(ops.top()) >= presedence(str[i]))
            {
                char op = ops.top();
                ops.pop();

                int v2 = num.top();
                num.pop();
                int v1 = num.top();
                num.pop();
                num.push(cal(v1, v2, op));
            }
            ops.push(str[i]);
        }
    }
    while (not ops.empty())
    {
        char op = ops.top();
        ops.pop();

        int v2 = num.top();
        num.pop();
        int v1 = num.top();
        num.pop();
        num.push(cal(v1, v2, op));
    }
    return num.top();
}
int main()
{

    string str = "1+(2*(5-1))+1";
    cout<<eval(str)<<endl;
    return 0;
}