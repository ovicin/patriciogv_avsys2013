#ifndef _TEST_APP
#define _TEST_APP

#include "ofMain.h"
#include "fft.h"
#include "FFTOctaveAnalyzer.h"

class testApp : public ofBaseApp {
public:
		
    void setup();
    void update();
    void draw();
		
    void keyPressed  (int key);
    void mouseMoved(int x, int y );
    void mouseDragged(int x, int y, int button);
    void mousePressed(int x, int y, int button);
    void mouseReleased();
		
    void audioReceived 	(float * input, int bufferSize, int nChannels);
	ofPolyline  freqArc(float *_values, int _size, const ofPoint &_center, float _angleBegin, float _angleEnd, float _minRad , bool _bSmooth = false);
    
    void createSkin( int _width );
    
    ofEasyCam           cam;
    ofMesh              mesh;
    ofLight             light;
    vector<ofPoint>     points;
    ofMatrix4x4         matrix;
    
    fft                 myFft;
    FFTOctaveAnalyzer   FFTanalyzer;
    int                 bufferSize;
    int                 large;
    
    float               *left;
    float               *right;
    float               *magnitude;
    float               *phase;
    float               *power;
    float               *freq;
};

#endif	

