# include <iostream>
# include <cstring>

using namespace std;

int main()
{
    string text ;
    
    getline(cin, text) ;
    
        
    for(int i = 0; i < text.length() ; i++)
    {
        text[i] = tolower(text[i]) ;
    
    }
    cout << text ;
    
    return 0;
}
