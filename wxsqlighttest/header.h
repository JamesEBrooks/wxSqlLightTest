#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

#include <vector>



using namespace std;
unsigned int CurrentPosition=0;
//  bool AB=true;


wxString FileName;

struct DataHeader
{
    DataHeader()
    {
      ////
    };
  char *Name;
  char *Thumb;
  int Size;
  int Other1;
  int Other2;
};

struct FadePoints
{
     FadePoints()
     {
         ABnes=0;
         CurveVal=0.0;
         Position=0;
         red=0;
         green=0;
         blue=0;
         Mute=false;
     };
      //  ~hello()

    bool ABnes;
    float CurveVal;
    int Position;
    int red;
    int green;
    int blue;
    bool Mute;
};

int CurrantSize;
int SwatchSelect=0;

vector<FadePoints> Fades;
vector<DataHeader> HeaderList;

vector<vector<std::string>> FullTable_Header;
vector<vector<std::string>> FullTable_FadeData;

/*
static int CREATE_callback(void *NotUsed, int argc, char **argv, char **azColName){
   int i;
   for(i=0; i<argc; i++){
      printf("%s = %s\n", azColName[i], argv[i] ? argv[i] : "NULL");
   }
   printf("\n");
   return 0;
}

*/


#endif // HEADER_H_INCLUDED
