#include Playlist.h
#include <iostream>

//can constructor can be listed in heading?
PlaylistNode:: PlaylistNode(): uniqueID("none"), songName("none"), artistName("none"), songLength(0), nextNodePtr(0){}

PlaylistNode:: PlaylistNode();{

}
//
PlaylistNode:: PlaylistNode();
PlaylistNode:: InsertAfter();
PlaylistNode:: SetNext();
std::string PlaylistNode:: GetID() const;
std::string PlaylistNode:: GetArtistName() const;
std::int PlaylistNode:: GetSongLength() const;
PlaylistNode:: PlaylistNode* GetNext() const;
void PlaylistNode:: PrintPlaylistNode();
