#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <iomanip>

using namespace std;

void Insert(vector<string>& v, string word, int pos);
void Delete(vector <string>& v, int pos);
void Print(const vector <string>& v);

int main()
{
  vector <string> v(0);
  
  string word;
  string cmnd;
  int pos;

  fstream fin;
  fin.open("data.txt");

  if(!fin)
    {
      cout << "ERROR" << endl;
    }
  else
    {
      fin >> cmnd;
      while(fin)
	{
	  if( cmnd == "Insert")
	    {
	      fin >> word;
	      fin >> pos;
	      Insert(v, word, pos);
	    }
	  if(cmnd == "Delete")
	    {
	      fin >> pos;
	      Delete(v,pos);
	    }
	  if(cmnd == "Print")
	    {
	      Print(v);
	    }
	  fin >> cmnd;
	}
    }
  fin.close();
  return 0;
}
void Insert(vector<string>& v, string word, int pos)
{
  if(pos > v.size())
    cout << left << "Error at " << pos << "." << endl;
  else 
    v.insert(v.begin() + pos, word);
}
void Delete(vector<string>& v, int pos)
{
  if(pos > v.size())
    cout << left << "Error at " << pos << "." << endl;
  else 
    v.erase(v.begin() + pos); 
}
void Print(vector<string>& v)
{
  for(int i = 0; i < v.size(); i++)
    cout << left << setw(10) << v[i] << endl; 
}

