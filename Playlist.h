#ifndef PLAYLIST_H
#define PLAYLIST_H

class PlaylistNode {
  private:
    std::string uniqueID;
    std::string songName;
    std::string artistName;
    int songLength;
    PlaylistNode* nextNodePtr;
  public:
    PlaylistNode();
    PlaylistNode();
    InsertAfter();
    SetNext();
    std::string GetID() const;
    std::string GetArtistName() const;
    int GetSongLength() const;
    PlaylistNode* GetNext() const;
    void PrintPlaylistNode();
};

#endif
