#ifndef PLAYLIST_H
#define PLAYLIST_H

class PlaylistNode {
  private:
    std::string uniqueID = "none";
    std::string songName = "none";
    std::string artistName = "none";
    int songLength = 0;
    PlaylistNode* nextNodePtr = 0;
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
}

#endif
