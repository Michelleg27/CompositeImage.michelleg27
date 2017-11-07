#include <isotream>
#include <string>
#include <vector>
#include "bitmap.h"


using namespace std; 

int main()
{
}
//repeatly ask the user for file name until user tyes DONE or input max which = 10
string input; 
//ask to enter file name 
do  
    cout<<"Enter file name"<<endl;
    cin>>input; 
while ( input!= "DONE"   )
{
//checks file is vaild

// open file
  Bitmap image;
  image.open(input);
  if( image.isImage() )
  {
    vector <vector < Pixel> > bmp = img.toPixelMatrix();
    printImage(bmp);
 //pass image into vector of vetor of pixels 
  }

}

//print out error : file DNE, not the same dimensions; says error but continues; if not provied with at least 2 images 
//then an error should appear 



//combine all images; composite in avg values of RGB compents for each pixel 
//print occasional updates 

bool is_valid_image(bitmap lol)
return lol.isImage();

//checks it has right dimensions 
void printImage (vector <vector <Pixel> > bmp)
{
l    cout << "IM PRINTING"
}


