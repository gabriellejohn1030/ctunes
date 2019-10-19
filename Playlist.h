//
//  Playlist.h
//  CS014LAB1
//
//  Created by Gabby John on 10/2/19.
//  Copyright © 2019 Gabby John. All rights reserved.
//

#ifndef __PLAYLIST_H__
#define __PLAYLIST_H__

#include <iostream>
#include <string>

using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int data) : data(data), next(0){}
};

class PlaylistNode {
    
public:
    PlaylistNode();
    PlaylistNode(string uniqueID, string songName, string artistName, int songLength);
    void InsertAfter();
    void SetNext();
    PlaylistNode GetID();
    string GetSongName();
    string GetArtistName();
    int GetSongLength();
    PlaylistNode* GetNext(Playlist)
    
    
    
    
private:
    string uniqueID;
    string songName;
    string artistName;
    int songLength;
    PlaylistNode* nextnodeptr;
    
};




#endif /* Playlist_h */
