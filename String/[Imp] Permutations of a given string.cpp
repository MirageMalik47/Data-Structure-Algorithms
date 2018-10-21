
/***************************** Time Comp : O(n) ***********************/

void helper(string input,string output)
{
    if(input.size()==0)
    {
        cout<<output<<" ";
        return;
    }
    int i=0;
    while(i<input.size())
    {
        output=output+input[i];
        string s=input.substr(0,i)+input.substr(i+1);
        helper(s,output);
        output.pop_back();
        i++;
    }
}

void printpermutation(string input)
{
    string output="";
    return helper(input,output);
}
