
// Converting Decimal Number lying between 1 to 3999 to Roman Numerals
/*********************************** Time Comp : O(n) ************************/

void convertToRoman(int n) 
{
  vector<string> s={"","I","II","III","IV","V","VI","VII","VIII","IX",
                    "","X","XX","XXX","XL","L","LX","LXX","LXXX","XC",
                    "","C","CC","CCC","CD","D","DC","DCC","DCCC","CM",
                    "","M","MM","MMM","MMMM"};
 cout<<s[(n/1000)%10+30]+s[(n/100)%10+20]+s[(n/10)%10+10]+s[n%10];
}
