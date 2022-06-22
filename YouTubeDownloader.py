#Program for downloading YouTube Videos.
from pytube import YouTube

#URL
url = input("Enter the video URL: ")
video = YouTube(url)

#Title
print("Title: ",video.title)

#Views
print("Number of Views: ", video.views)

#Length
print("Video Length: ", video.length)

#Description
print("Description: ", video.description)

#Rating
print("Rating: ", video.rating)

#TODO: Add the download part