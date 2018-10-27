/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Song.h
 * Author: david
 *
 * Created on October 25, 2018, 2:15 PM
 */

#ifndef SONG_H
#define SONG_H
#include <string>

using namespace std;

//Song class declaration
class Song
{
//Private methods, const, etc inside scope of class Song
private:
    string title;
    string artist;
    int size;   
    
//Public, can be accessed by outside specifically by main or utpod
public:
    Song(string _title, string _artist, int _size) {
        this -> title = _title;
        this -> artist = _artist;
        this -> size = _size;
    }
    
    string getTitle() const {
        return title;
    }
    
    string getArtist() const {
        return artist;
    }
    
    int getSize() const {
        return size;
    }
    
    void getSong(string &get_title, string &get_artist, int &get_size) {
        get_title = this -> title;
        get_artist = this -> artist;
        get_size = this -> size;
    }
    
    void changeSong(string new_title, string new_artist, int new_size) {
        this -> title = new_title;
        this -> artist = new_artist;
        this -> size = new_size;
    }
    
    void swapSong(Song &s2) {
        Song temp = s2;
        s2 = *this;
        *this = temp;
    }
    
    bool operator >(Song const &rhs) {
        if( (this -> artist) > rhs.artist ) {
            return true;
        }
        else if( ((this -> artist) == rhs.artist) && ((this -> title) > rhs.title) ) {
            return true;
        }
        else if ( ((this -> artist) == rhs.artist) && ((this -> title) == rhs.title) && ((this -> size) > rhs.size) ){
            return true;
        }
        else {
            return false;
        }
    }
    
    bool operator <(Song const &rhs) {
        if( (this -> artist) < rhs.artist ) {
            return true;
        }
        else if( ((this -> artist) == rhs.artist) && ((this -> title) < rhs.title) ) {
            return true;
        }
        else if ( ((this -> artist) == rhs.artist) && ((this -> title) == rhs.title) && ((this -> size) < rhs.size) ){
            return true;
        }
        else {
            return false;
        }
    }
    
    bool operator ==(Song const &rhs) {
        if ( ((this -> artist) == rhs.artist) && ((this -> title) == rhs.title) && ((this -> size) == rhs.size) ){
            return true;
        }
        else {
            return false;
        }
    }
    
};


#endif /* SONG_H */

