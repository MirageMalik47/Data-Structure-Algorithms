//Given an expression string exp. Examine whether the pairs and the orders of “{“,”}”,”(“,”)”,”[“,”]” are correct in exp.
// For example, the program should print 'balanced' for exp = “[()]{}{[()()]()}” and 'not balanced' for exp = “[(])”
 
/******************* Time Comp : O(n) ******************/
bool checkBalanced( string exp) 
{
  stack<char> s;
  for(int i=0;i<exp.size();i++)
  {
        
    if (exp[i]=='('||exp[i]=='['||exp[i]=='{')
    {
       s.push(exp[i]);
    }
    else if(exp[i]==')'||exp[i]==']'||exp[i]=='}')
    {
        if(s.empty() && ( exp[i]==')' || exp[i]==']' || exp[i]=='}') )
          return false;
        
       s.pop();
    }
  }
  return s.empty()?true:false;
}
