

def extract_artist(song_title):
    
    dash_position = song_title.index("-")

    artist_name = song_title[dash_position + 1:].strip()
    
    return artist_name



song = "Blinding Lights - The Weeknd"
print(extract_artist(song))