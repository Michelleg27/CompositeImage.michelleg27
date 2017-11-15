#include "bitmap.h"
#include <vector>
#include <string>
#include <iostream>


using namespace std;
vector <int> compositeImage ( vector <vector <Pixel> > bmp);
//vector <int> imageAvg (vector <vector <Pixel> > img);
vector <int> imgSum (vector <vector <Pixel> > img);

int main()
{
vector <int> imageAvg (vector <vector <Pixel> > bmp);
vector <vector <Pixel> > bmp; 
vector <string> filenames; 
vector <vector <Pixel> > img;
Bitmap image; 
Pixel rgb; 
string input; 
int max=0;  
int width, height = 0; 


do {
    cout<<" Enter file name"<<endl; 
    cin>>input;
    image.open(input); 
    if (! image.isImage())
    {
        cout<<"Error, not a valid image"<<endl; 
    }
    else if (image.isImage() && filenames.size())
    {
        filenames.push_back(input); 
        bmp = image.toPixelMatrix(); 
        width = bmp.size(); 
        height = bmp[0].size(); 
        max++; 
     }
     else if (image.isImage())
     {
        bmp = image.toPixelMatrix();
     }
     if (bmp.size() == width && bmp[0].size() == height)
     {
        filenames.push_back(input);
        max++; 
     }
     else
     {
        cout<<"Error, image has wrong dimensions"<<endl; 
     }
 }
     while (!(input == "DONE" || max <= 10));
  if (filenames.size() <2)
  {
    cout<<"Error, not enough images"<<endl;
  }
  else
  {
    vector <int> imageAvg;
    vector <int> total; 
    vector <vector <int> > files; 
    for (int i = 0; i<filenames.size(); i++)
    {
        image.open(filenames[i]); 
        bmp = image.toPixelMatrix();
        files.push_back(imageAvg ); 
    }
    int imgSum;
    for(int row=0; row<files.size(); row++)
    {
        for (int col=0; col<files[0].size(); col++)
        {
            imgSum = imgSum + files[row][col]; 
        }
          total.push_back(imgSum/files.size()); 
    }
        
        
   image.open(filenames[0]);
   bmp = image.toPixelMatrix(); 
      int count = 0; 
    for( int r=0; r<bmp.size(); r++)
    {
        for( int c=0; c<bmp[0].size(); c++)
        {
            rgb = bmp[r][c];
            rgb.red = rgb.green = rgb.blue = total [count];
            bmp[r][c] = rgb; 
            count++; 
         }
    }
        return 0;
 }

 vector <int> imgAvg( vector <vector <Pixel> > img);
 {
    Pixel rgb; 
    int total; 
    vector <int> imgSum; 
    for ( int row = 0; row<img.size(); row++)
    {
        for (int col = 0; col<img[0].size(); col++)
        {
            rgb = img [row][col];
            total = rgb.red + rgb.green + rgb.blue;
        }
        imgSum.push_back(total/img.size());
    }
      //  return imgSum; 

}
{
image.fromPixelMatrix(bmp);
image.save("composite -michelleg27.bmp");
}
} 
